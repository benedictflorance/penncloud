// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request.proto

#include "request.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace PennCloud {
constexpr Request::Request(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : type_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , rowkey_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , columnkey_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , value1_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , value2_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , command_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , isserver_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , sender_server_index_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , uniqueid_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , preprocessed_response_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct RequestDefaultTypeInternal {
  constexpr RequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RequestDefaultTypeInternal() {}
  union {
    Request _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RequestDefaultTypeInternal _Request_default_instance_;
}  // namespace PennCloud
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_request_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_request_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_request_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_request_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::PennCloud::Request, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::PennCloud::Request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::PennCloud::Request, type_),
  PROTOBUF_FIELD_OFFSET(::PennCloud::Request, rowkey_),
  PROTOBUF_FIELD_OFFSET(::PennCloud::Request, columnkey_),
  PROTOBUF_FIELD_OFFSET(::PennCloud::Request, value1_),
  PROTOBUF_FIELD_OFFSET(::PennCloud::Request, value2_),
  PROTOBUF_FIELD_OFFSET(::PennCloud::Request, command_),
  PROTOBUF_FIELD_OFFSET(::PennCloud::Request, isserver_),
  PROTOBUF_FIELD_OFFSET(::PennCloud::Request, sender_server_index_),
  PROTOBUF_FIELD_OFFSET(::PennCloud::Request, uniqueid_),
  PROTOBUF_FIELD_OFFSET(::PennCloud::Request, preprocessed_response_),
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 15, sizeof(::PennCloud::Request)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::PennCloud::_Request_default_instance_),
};

const char descriptor_table_protodef_request_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rrequest.proto\022\tPennCloud\"\313\001\n\007Request\022\014"
  "\n\004type\030\001 \002(\t\022\016\n\006rowkey\030\002 \001(\t\022\021\n\tcolumnke"
  "y\030\003 \001(\t\022\016\n\006value1\030\004 \001(\014\022\016\n\006value2\030\005 \001(\014\022"
  "\017\n\007command\030\006 \001(\t\022\020\n\010isServer\030\007 \001(\t\022\033\n\023se"
  "nder_server_index\030\010 \001(\t\022\020\n\010uniqueid\030\t \001("
  "\t\022\035\n\025preprocessed_response\030\n \001(\t"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_request_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_request_2eproto = {
  false, false, 232, descriptor_table_protodef_request_2eproto, "request.proto", 
  &descriptor_table_request_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_request_2eproto::offsets,
  file_level_metadata_request_2eproto, file_level_enum_descriptors_request_2eproto, file_level_service_descriptors_request_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_request_2eproto_getter() {
  return &descriptor_table_request_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_request_2eproto(&descriptor_table_request_2eproto);
namespace PennCloud {

// ===================================================================

class Request::_Internal {
 public:
  using HasBits = decltype(std::declval<Request>()._has_bits_);
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_rowkey(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_columnkey(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_value1(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_value2(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_command(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_isserver(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_sender_server_index(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_uniqueid(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_preprocessed_response(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000001) ^ 0x00000001) != 0;
  }
};

Request::Request(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:PennCloud.Request)
}
Request::Request(const Request& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_type()) {
    type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_type(), 
      GetArenaForAllocation());
  }
  rowkey_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_rowkey()) {
    rowkey_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_rowkey(), 
      GetArenaForAllocation());
  }
  columnkey_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_columnkey()) {
    columnkey_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_columnkey(), 
      GetArenaForAllocation());
  }
  value1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_value1()) {
    value1_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_value1(), 
      GetArenaForAllocation());
  }
  value2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_value2()) {
    value2_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_value2(), 
      GetArenaForAllocation());
  }
  command_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_command()) {
    command_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_command(), 
      GetArenaForAllocation());
  }
  isserver_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_isserver()) {
    isserver_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_isserver(), 
      GetArenaForAllocation());
  }
  sender_server_index_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_sender_server_index()) {
    sender_server_index_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_sender_server_index(), 
      GetArenaForAllocation());
  }
  uniqueid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_uniqueid()) {
    uniqueid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_uniqueid(), 
      GetArenaForAllocation());
  }
  preprocessed_response_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_preprocessed_response()) {
    preprocessed_response_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_preprocessed_response(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:PennCloud.Request)
}

void Request::SharedCtor() {
type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
rowkey_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
columnkey_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
value1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
value2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
command_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
isserver_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
sender_server_index_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
uniqueid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
preprocessed_response_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Request::~Request() {
  // @@protoc_insertion_point(destructor:PennCloud.Request)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Request::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  rowkey_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  columnkey_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  value1_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  value2_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  command_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  isserver_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sender_server_index_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  uniqueid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  preprocessed_response_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Request::ArenaDtor(void* object) {
  Request* _this = reinterpret_cast< Request* >(object);
  (void)_this;
}
void Request::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Request::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Request::Clear() {
// @@protoc_insertion_point(message_clear_start:PennCloud.Request)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      type_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      rowkey_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      columnkey_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      value1_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000010u) {
      value2_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000020u) {
      command_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000040u) {
      isserver_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000080u) {
      sender_server_index_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x00000300u) {
    if (cached_has_bits & 0x00000100u) {
      uniqueid_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000200u) {
      preprocessed_response_.ClearNonDefaultToEmpty();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Request::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required string type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PennCloud.Request.type");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string rowkey = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_rowkey();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PennCloud.Request.rowkey");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string columnkey = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_columnkey();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PennCloud.Request.columnkey");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bytes value1 = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_value1();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bytes value2 = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_value2();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string command = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_command();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PennCloud.Request.command");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string isServer = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_isserver();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PennCloud.Request.isServer");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string sender_server_index = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          auto str = _internal_mutable_sender_server_index();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PennCloud.Request.sender_server_index");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string uniqueid = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          auto str = _internal_mutable_uniqueid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PennCloud.Request.uniqueid");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string preprocessed_response = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          auto str = _internal_mutable_preprocessed_response();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PennCloud.Request.preprocessed_response");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Request::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PennCloud.Request)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string type = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_type().data(), static_cast<int>(this->_internal_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "PennCloud.Request.type");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_type(), target);
  }

  // optional string rowkey = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_rowkey().data(), static_cast<int>(this->_internal_rowkey().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "PennCloud.Request.rowkey");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_rowkey(), target);
  }

  // optional string columnkey = 3;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_columnkey().data(), static_cast<int>(this->_internal_columnkey().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "PennCloud.Request.columnkey");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_columnkey(), target);
  }

  // optional bytes value1 = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_value1(), target);
  }

  // optional bytes value2 = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_value2(), target);
  }

  // optional string command = 6;
  if (cached_has_bits & 0x00000020u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_command().data(), static_cast<int>(this->_internal_command().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "PennCloud.Request.command");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_command(), target);
  }

  // optional string isServer = 7;
  if (cached_has_bits & 0x00000040u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_isserver().data(), static_cast<int>(this->_internal_isserver().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "PennCloud.Request.isServer");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_isserver(), target);
  }

  // optional string sender_server_index = 8;
  if (cached_has_bits & 0x00000080u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_sender_server_index().data(), static_cast<int>(this->_internal_sender_server_index().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "PennCloud.Request.sender_server_index");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_sender_server_index(), target);
  }

  // optional string uniqueid = 9;
  if (cached_has_bits & 0x00000100u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_uniqueid().data(), static_cast<int>(this->_internal_uniqueid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "PennCloud.Request.uniqueid");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_uniqueid(), target);
  }

  // optional string preprocessed_response = 10;
  if (cached_has_bits & 0x00000200u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_preprocessed_response().data(), static_cast<int>(this->_internal_preprocessed_response().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "PennCloud.Request.preprocessed_response");
    target = stream->WriteStringMaybeAliased(
        10, this->_internal_preprocessed_response(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PennCloud.Request)
  return target;
}

size_t Request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PennCloud.Request)
  size_t total_size = 0;

  // required string type = 1;
  if (_internal_has_type()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000feu) {
    // optional string rowkey = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_rowkey());
    }

    // optional string columnkey = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_columnkey());
    }

    // optional bytes value1 = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_value1());
    }

    // optional bytes value2 = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_value2());
    }

    // optional string command = 6;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_command());
    }

    // optional string isServer = 7;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_isserver());
    }

    // optional string sender_server_index = 8;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_sender_server_index());
    }

  }
  if (cached_has_bits & 0x00000300u) {
    // optional string uniqueid = 9;
    if (cached_has_bits & 0x00000100u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_uniqueid());
    }

    // optional string preprocessed_response = 10;
    if (cached_has_bits & 0x00000200u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_preprocessed_response());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Request::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PennCloud.Request)
  GOOGLE_DCHECK_NE(&from, this);
  const Request* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Request>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PennCloud.Request)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PennCloud.Request)
    MergeFrom(*source);
  }
}

void Request::MergeFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PennCloud.Request)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_type(from._internal_type());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_rowkey(from._internal_rowkey());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_columnkey(from._internal_columnkey());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_set_value1(from._internal_value1());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_set_value2(from._internal_value2());
    }
    if (cached_has_bits & 0x00000020u) {
      _internal_set_command(from._internal_command());
    }
    if (cached_has_bits & 0x00000040u) {
      _internal_set_isserver(from._internal_isserver());
    }
    if (cached_has_bits & 0x00000080u) {
      _internal_set_sender_server_index(from._internal_sender_server_index());
    }
  }
  if (cached_has_bits & 0x00000300u) {
    if (cached_has_bits & 0x00000100u) {
      _internal_set_uniqueid(from._internal_uniqueid());
    }
    if (cached_has_bits & 0x00000200u) {
      _internal_set_preprocessed_response(from._internal_preprocessed_response());
    }
  }
}

void Request::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PennCloud.Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Request::CopyFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PennCloud.Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Request::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Request::InternalSwap(Request* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &type_, GetArenaForAllocation(),
      &other->type_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &rowkey_, GetArenaForAllocation(),
      &other->rowkey_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &columnkey_, GetArenaForAllocation(),
      &other->columnkey_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &value1_, GetArenaForAllocation(),
      &other->value1_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &value2_, GetArenaForAllocation(),
      &other->value2_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &command_, GetArenaForAllocation(),
      &other->command_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &isserver_, GetArenaForAllocation(),
      &other->isserver_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &sender_server_index_, GetArenaForAllocation(),
      &other->sender_server_index_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &uniqueid_, GetArenaForAllocation(),
      &other->uniqueid_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &preprocessed_response_, GetArenaForAllocation(),
      &other->preprocessed_response_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Request::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_request_2eproto_getter, &descriptor_table_request_2eproto_once,
      file_level_metadata_request_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace PennCloud
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::PennCloud::Request* Arena::CreateMaybeMessage< ::PennCloud::Request >(Arena* arena) {
  return Arena::CreateMessageInternal< ::PennCloud::Request >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
