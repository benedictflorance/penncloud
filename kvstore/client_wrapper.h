#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <string>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <fcntl.h>
#include "request.pb.h"
#include "response.pb.h"

class KVstore
{
    std::string master_ip_str = "127.0.0.1:8000"; 
    const int BUFFER_SIZE = 15000000;
    const int LENGTH_BUFFER_SIZE = 20; 
    const int NUM_SERVERS = 9;
    std::map<int, bool> is_server_alive;
    std::unordered_map<std::string, sockaddr_in> rkey_to_storage_cache;
    std::pair<std::string, std::string> send_request(int sockfd, std::string type, std::string rkey, std::string ckey, std::string value1, std::string value2);
    std::pair<std::string, std::string> contact_tablet_server(std::string type, std::string rkey, std::string ckey, std::string value1, std::string value2);
    std::pair<std::string, std::string> process_kvstore_request(std::string type, std::string rkey, std::string ckey, std::string value1="", std::string value2 = "");
    sockaddr_in get_address(std::string socket_address);

    public:
        KVstore();
        std::string get(std::string rkey, std::string ckey);
        void put(std::string rkey, std::string ckey, std::string value);
        bool cput(std::string rkey, std::string ckey, std::string value1, std::string value2);
        bool dele(std::string rkey, std::string ckey);
        void kill(int server_index);
        void resurrect(int server_index);
        std::map<int,bool> list_server_status();
};

extern KVstore kvstore;
