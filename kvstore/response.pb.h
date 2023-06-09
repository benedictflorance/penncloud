// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: response.proto

#ifndef PROTOBUF_INCLUDED_response_2eproto
#define PROTOBUF_INCLUDED_response_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_response_2eproto 

namespace protobuf_response_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_response_2eproto
namespace PennCloud {
class Response;
class ResponseDefaultTypeInternal;
extern ResponseDefaultTypeInternal _Response_default_instance_;
class Response_ServerStatusEntry_DoNotUse;
class Response_ServerStatusEntry_DoNotUseDefaultTypeInternal;
extern Response_ServerStatusEntry_DoNotUseDefaultTypeInternal _Response_ServerStatusEntry_DoNotUse_default_instance_;
}  // namespace PennCloud
namespace google {
namespace protobuf {
template<> ::PennCloud::Response* Arena::CreateMaybeMessage<::PennCloud::Response>(Arena*);
template<> ::PennCloud::Response_ServerStatusEntry_DoNotUse* Arena::CreateMaybeMessage<::PennCloud::Response_ServerStatusEntry_DoNotUse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace PennCloud {

// ===================================================================

class Response_ServerStatusEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<Response_ServerStatusEntry_DoNotUse, 
    ::google::protobuf::int32, bool,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
    ::google::protobuf::internal::WireFormatLite::TYPE_BOOL,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<Response_ServerStatusEntry_DoNotUse, 
    ::google::protobuf::int32, bool,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
    ::google::protobuf::internal::WireFormatLite::TYPE_BOOL,
    0 > SuperType;
  Response_ServerStatusEntry_DoNotUse();
  Response_ServerStatusEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const Response_ServerStatusEntry_DoNotUse& other);
  static const Response_ServerStatusEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const Response_ServerStatusEntry_DoNotUse*>(&_Response_ServerStatusEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class Response : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PennCloud.Response) */ {
 public:
  Response();
  virtual ~Response();

  Response(const Response& from);

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(Response&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Response& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Response* other);
  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Response* New() const final {
    return CreateMaybeMessage<Response>(NULL);
  }

  Response* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Response>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Response* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<int32, bool> server_status = 4;
  int server_status_size() const;
  void clear_server_status();
  static const int kServerStatusFieldNumber = 4;
  const ::google::protobuf::Map< ::google::protobuf::int32, bool >&
      server_status() const;
  ::google::protobuf::Map< ::google::protobuf::int32, bool >*
      mutable_server_status();

  // repeated string col_keys = 5;
  int col_keys_size() const;
  void clear_col_keys();
  static const int kColKeysFieldNumber = 5;
  const ::std::string& col_keys(int index) const;
  ::std::string* mutable_col_keys(int index);
  void set_col_keys(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_col_keys(int index, ::std::string&& value);
  #endif
  void set_col_keys(int index, const char* value);
  void set_col_keys(int index, const char* value, size_t size);
  ::std::string* add_col_keys();
  void add_col_keys(const ::std::string& value);
  #if LANG_CXX11
  void add_col_keys(::std::string&& value);
  #endif
  void add_col_keys(const char* value);
  void add_col_keys(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& col_keys() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_col_keys();

  // repeated string row_keys = 6;
  int row_keys_size() const;
  void clear_row_keys();
  static const int kRowKeysFieldNumber = 6;
  const ::std::string& row_keys(int index) const;
  ::std::string* mutable_row_keys(int index);
  void set_row_keys(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_row_keys(int index, ::std::string&& value);
  #endif
  void set_row_keys(int index, const char* value);
  void set_row_keys(int index, const char* value, size_t size);
  ::std::string* add_row_keys();
  void add_row_keys(const ::std::string& value);
  #if LANG_CXX11
  void add_row_keys(::std::string&& value);
  #endif
  void add_row_keys(const char* value);
  void add_row_keys(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& row_keys() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_row_keys();

  // required string status = 1;
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  const ::std::string& status() const;
  void set_status(const ::std::string& value);
  #if LANG_CXX11
  void set_status(::std::string&& value);
  #endif
  void set_status(const char* value);
  void set_status(const char* value, size_t size);
  ::std::string* mutable_status();
  ::std::string* release_status();
  void set_allocated_status(::std::string* status);

  // optional string description = 2;
  bool has_description() const;
  void clear_description();
  static const int kDescriptionFieldNumber = 2;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // optional bytes value = 3;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 3;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const void* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:PennCloud.Response)
 private:
  void set_has_status();
  void clear_has_status();
  void set_has_description();
  void clear_has_description();
  void set_has_value();
  void clear_has_value();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::MapField<
      Response_ServerStatusEntry_DoNotUse,
      ::google::protobuf::int32, bool,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_BOOL,
      0 > server_status_;
  ::google::protobuf::RepeatedPtrField< ::std::string> col_keys_;
  ::google::protobuf::RepeatedPtrField< ::std::string> row_keys_;
  ::google::protobuf::internal::ArenaStringPtr status_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  friend struct ::protobuf_response_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Response

// required string status = 1;
inline bool Response::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Response::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Response::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Response::clear_status() {
  status_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_status();
}
inline const ::std::string& Response::status() const {
  // @@protoc_insertion_point(field_get:PennCloud.Response.status)
  return status_.GetNoArena();
}
inline void Response::set_status(const ::std::string& value) {
  set_has_status();
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PennCloud.Response.status)
}
#if LANG_CXX11
inline void Response::set_status(::std::string&& value) {
  set_has_status();
  status_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PennCloud.Response.status)
}
#endif
inline void Response::set_status(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_status();
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PennCloud.Response.status)
}
inline void Response::set_status(const char* value, size_t size) {
  set_has_status();
  status_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PennCloud.Response.status)
}
inline ::std::string* Response::mutable_status() {
  set_has_status();
  // @@protoc_insertion_point(field_mutable:PennCloud.Response.status)
  return status_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_status() {
  // @@protoc_insertion_point(field_release:PennCloud.Response.status)
  if (!has_status()) {
    return NULL;
  }
  clear_has_status();
  return status_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_status(::std::string* status) {
  if (status != NULL) {
    set_has_status();
  } else {
    clear_has_status();
  }
  status_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), status);
  // @@protoc_insertion_point(field_set_allocated:PennCloud.Response.status)
}

// optional string description = 2;
inline bool Response::has_description() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Response::set_has_description() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Response::clear_has_description() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Response::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_description();
}
inline const ::std::string& Response::description() const {
  // @@protoc_insertion_point(field_get:PennCloud.Response.description)
  return description_.GetNoArena();
}
inline void Response::set_description(const ::std::string& value) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PennCloud.Response.description)
}
#if LANG_CXX11
inline void Response::set_description(::std::string&& value) {
  set_has_description();
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PennCloud.Response.description)
}
#endif
inline void Response::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PennCloud.Response.description)
}
inline void Response::set_description(const char* value, size_t size) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PennCloud.Response.description)
}
inline ::std::string* Response::mutable_description() {
  set_has_description();
  // @@protoc_insertion_point(field_mutable:PennCloud.Response.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_description() {
  // @@protoc_insertion_point(field_release:PennCloud.Response.description)
  if (!has_description()) {
    return NULL;
  }
  clear_has_description();
  return description_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    set_has_description();
  } else {
    clear_has_description();
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:PennCloud.Response.description)
}

// optional bytes value = 3;
inline bool Response::has_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Response::set_has_value() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Response::clear_has_value() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Response::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
inline const ::std::string& Response::value() const {
  // @@protoc_insertion_point(field_get:PennCloud.Response.value)
  return value_.GetNoArena();
}
inline void Response::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PennCloud.Response.value)
}
#if LANG_CXX11
inline void Response::set_value(::std::string&& value) {
  set_has_value();
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PennCloud.Response.value)
}
#endif
inline void Response::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PennCloud.Response.value)
}
inline void Response::set_value(const void* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PennCloud.Response.value)
}
inline ::std::string* Response::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:PennCloud.Response.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_value() {
  // @@protoc_insertion_point(field_release:PennCloud.Response.value)
  if (!has_value()) {
    return NULL;
  }
  clear_has_value();
  return value_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:PennCloud.Response.value)
}

// map<int32, bool> server_status = 4;
inline int Response::server_status_size() const {
  return server_status_.size();
}
inline void Response::clear_server_status() {
  server_status_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::int32, bool >&
Response::server_status() const {
  // @@protoc_insertion_point(field_map:PennCloud.Response.server_status)
  return server_status_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::int32, bool >*
Response::mutable_server_status() {
  // @@protoc_insertion_point(field_mutable_map:PennCloud.Response.server_status)
  return server_status_.MutableMap();
}

// repeated string col_keys = 5;
inline int Response::col_keys_size() const {
  return col_keys_.size();
}
inline void Response::clear_col_keys() {
  col_keys_.Clear();
}
inline const ::std::string& Response::col_keys(int index) const {
  // @@protoc_insertion_point(field_get:PennCloud.Response.col_keys)
  return col_keys_.Get(index);
}
inline ::std::string* Response::mutable_col_keys(int index) {
  // @@protoc_insertion_point(field_mutable:PennCloud.Response.col_keys)
  return col_keys_.Mutable(index);
}
inline void Response::set_col_keys(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:PennCloud.Response.col_keys)
  col_keys_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Response::set_col_keys(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:PennCloud.Response.col_keys)
  col_keys_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Response::set_col_keys(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  col_keys_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:PennCloud.Response.col_keys)
}
inline void Response::set_col_keys(int index, const char* value, size_t size) {
  col_keys_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:PennCloud.Response.col_keys)
}
inline ::std::string* Response::add_col_keys() {
  // @@protoc_insertion_point(field_add_mutable:PennCloud.Response.col_keys)
  return col_keys_.Add();
}
inline void Response::add_col_keys(const ::std::string& value) {
  col_keys_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:PennCloud.Response.col_keys)
}
#if LANG_CXX11
inline void Response::add_col_keys(::std::string&& value) {
  col_keys_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:PennCloud.Response.col_keys)
}
#endif
inline void Response::add_col_keys(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  col_keys_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:PennCloud.Response.col_keys)
}
inline void Response::add_col_keys(const char* value, size_t size) {
  col_keys_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:PennCloud.Response.col_keys)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Response::col_keys() const {
  // @@protoc_insertion_point(field_list:PennCloud.Response.col_keys)
  return col_keys_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Response::mutable_col_keys() {
  // @@protoc_insertion_point(field_mutable_list:PennCloud.Response.col_keys)
  return &col_keys_;
}

// repeated string row_keys = 6;
inline int Response::row_keys_size() const {
  return row_keys_.size();
}
inline void Response::clear_row_keys() {
  row_keys_.Clear();
}
inline const ::std::string& Response::row_keys(int index) const {
  // @@protoc_insertion_point(field_get:PennCloud.Response.row_keys)
  return row_keys_.Get(index);
}
inline ::std::string* Response::mutable_row_keys(int index) {
  // @@protoc_insertion_point(field_mutable:PennCloud.Response.row_keys)
  return row_keys_.Mutable(index);
}
inline void Response::set_row_keys(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:PennCloud.Response.row_keys)
  row_keys_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Response::set_row_keys(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:PennCloud.Response.row_keys)
  row_keys_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Response::set_row_keys(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  row_keys_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:PennCloud.Response.row_keys)
}
inline void Response::set_row_keys(int index, const char* value, size_t size) {
  row_keys_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:PennCloud.Response.row_keys)
}
inline ::std::string* Response::add_row_keys() {
  // @@protoc_insertion_point(field_add_mutable:PennCloud.Response.row_keys)
  return row_keys_.Add();
}
inline void Response::add_row_keys(const ::std::string& value) {
  row_keys_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:PennCloud.Response.row_keys)
}
#if LANG_CXX11
inline void Response::add_row_keys(::std::string&& value) {
  row_keys_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:PennCloud.Response.row_keys)
}
#endif
inline void Response::add_row_keys(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  row_keys_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:PennCloud.Response.row_keys)
}
inline void Response::add_row_keys(const char* value, size_t size) {
  row_keys_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:PennCloud.Response.row_keys)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Response::row_keys() const {
  // @@protoc_insertion_point(field_list:PennCloud.Response.row_keys)
  return row_keys_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Response::mutable_row_keys() {
  // @@protoc_insertion_point(field_mutable_list:PennCloud.Response.row_keys)
  return &row_keys_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace PennCloud

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_response_2eproto
