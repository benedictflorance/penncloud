// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: response.proto

#include "response.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_response_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_response_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Response_ServerStatusEntry_DoNotUse;
}  // namespace protobuf_response_2eproto
namespace PennCloud {
class Response_ServerStatusEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Response_ServerStatusEntry_DoNotUse>
      _instance;
} _Response_ServerStatusEntry_DoNotUse_default_instance_;
class ResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Response>
      _instance;
} _Response_default_instance_;
}  // namespace PennCloud
namespace protobuf_response_2eproto {
static void InitDefaultsResponse_ServerStatusEntry_DoNotUse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::PennCloud::_Response_ServerStatusEntry_DoNotUse_default_instance_;
    new (ptr) ::PennCloud::Response_ServerStatusEntry_DoNotUse();
  }
  ::PennCloud::Response_ServerStatusEntry_DoNotUse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Response_ServerStatusEntry_DoNotUse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsResponse_ServerStatusEntry_DoNotUse}, {}};

static void InitDefaultsResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::PennCloud::_Response_default_instance_;
    new (ptr) ::PennCloud::Response();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::PennCloud::Response::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Response =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsResponse}, {
      &protobuf_response_2eproto::scc_info_Response_ServerStatusEntry_DoNotUse.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Response_ServerStatusEntry_DoNotUse.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Response.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PennCloud::Response_ServerStatusEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PennCloud::Response_ServerStatusEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PennCloud::Response_ServerStatusEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PennCloud::Response_ServerStatusEntry_DoNotUse, value_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PennCloud::Response, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PennCloud::Response, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PennCloud::Response, status_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PennCloud::Response, description_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PennCloud::Response, value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PennCloud::Response, server_status_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::PennCloud::Response, col_keys_),
  0,
  1,
  2,
  ~0u,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::PennCloud::Response_ServerStatusEntry_DoNotUse)},
  { 9, 19, sizeof(::PennCloud::Response)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::PennCloud::_Response_ServerStatusEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::PennCloud::_Response_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "response.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\016response.proto\022\tPennCloud\"\303\001\n\010Response"
      "\022\016\n\006status\030\001 \002(\t\022\023\n\013description\030\002 \001(\t\022\r\n"
      "\005value\030\003 \001(\014\022<\n\rserver_status\030\004 \003(\0132%.Pe"
      "nnCloud.Response.ServerStatusEntry\022\020\n\010co"
      "l_keys\030\005 \003(\t\0323\n\021ServerStatusEntry\022\013\n\003key"
      "\030\001 \001(\005\022\r\n\005value\030\002 \001(\010:\0028\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 225);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "response.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_response_2eproto
namespace PennCloud {

// ===================================================================

Response_ServerStatusEntry_DoNotUse::Response_ServerStatusEntry_DoNotUse() {}
Response_ServerStatusEntry_DoNotUse::Response_ServerStatusEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void Response_ServerStatusEntry_DoNotUse::MergeFrom(const Response_ServerStatusEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata Response_ServerStatusEntry_DoNotUse::GetMetadata() const {
  ::protobuf_response_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_response_2eproto::file_level_metadata[0];
}
void Response_ServerStatusEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void Response::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Response::kStatusFieldNumber;
const int Response::kDescriptionFieldNumber;
const int Response::kValueFieldNumber;
const int Response::kServerStatusFieldNumber;
const int Response::kColKeysFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Response::Response()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_response_2eproto::scc_info_Response.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:PennCloud.Response)
}
Response::Response(const Response& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      col_keys_(from.col_keys_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  server_status_.MergeFrom(from.server_status_);
  status_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_status()) {
    status_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.status_);
  }
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_description()) {
    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_value()) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  // @@protoc_insertion_point(copy_constructor:PennCloud.Response)
}

void Response::SharedCtor() {
  status_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Response::~Response() {
  // @@protoc_insertion_point(destructor:PennCloud.Response)
  SharedDtor();
}

void Response::SharedDtor() {
  status_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Response::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Response::descriptor() {
  ::protobuf_response_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_response_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Response& Response::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_response_2eproto::scc_info_Response.base);
  return *internal_default_instance();
}


void Response::Clear() {
// @@protoc_insertion_point(message_clear_start:PennCloud.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  server_status_.Clear();
  col_keys_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      status_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      description_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      value_.ClearNonDefaultToEmptyNoArena();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Response::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PennCloud.Response)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string status = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_status()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->status().data(), static_cast<int>(this->status().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "PennCloud.Response.status");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string description = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->description().data(), static_cast<int>(this->description().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "PennCloud.Response.description");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes value = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<int32, bool> server_status = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          Response_ServerStatusEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              Response_ServerStatusEntry_DoNotUse,
              ::google::protobuf::int32, bool,
              ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_BOOL,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::int32, bool > > parser(&server_status_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string col_keys = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_col_keys()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->col_keys(this->col_keys_size() - 1).data(),
            static_cast<int>(this->col_keys(this->col_keys_size() - 1).length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "PennCloud.Response.col_keys");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:PennCloud.Response)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PennCloud.Response)
  return false;
#undef DO_
}

void Response::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PennCloud.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string status = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->status().data(), static_cast<int>(this->status().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "PennCloud.Response.status");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->status(), output);
  }

  // optional string description = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "PennCloud.Response.description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->description(), output);
  }

  // optional bytes value = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->value(), output);
  }

  // map<int32, bool> server_status = 4;
  if (!this->server_status().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::int32, bool >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::int32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->server_status().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->server_status().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::int32, bool >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::int32, bool >::const_iterator
          it = this->server_status().begin();
          it != this->server_status().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<Response_ServerStatusEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(server_status_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            4, *entry, output);
      }
    } else {
      ::std::unique_ptr<Response_ServerStatusEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::google::protobuf::int32, bool >::const_iterator
          it = this->server_status().begin();
          it != this->server_status().end(); ++it) {
        entry.reset(server_status_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            4, *entry, output);
      }
    }
  }

  // repeated string col_keys = 5;
  for (int i = 0, n = this->col_keys_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->col_keys(i).data(), static_cast<int>(this->col_keys(i).length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "PennCloud.Response.col_keys");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->col_keys(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:PennCloud.Response)
}

::google::protobuf::uint8* Response::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:PennCloud.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string status = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->status().data(), static_cast<int>(this->status().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "PennCloud.Response.status");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->status(), target);
  }

  // optional string description = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "PennCloud.Response.description");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->description(), target);
  }

  // optional bytes value = 3;
  if (cached_has_bits & 0x00000004u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->value(), target);
  }

  // map<int32, bool> server_status = 4;
  if (!this->server_status().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::int32, bool >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::int32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->server_status().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->server_status().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::int32, bool >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::int32, bool >::const_iterator
          it = this->server_status().begin();
          it != this->server_status().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<Response_ServerStatusEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(server_status_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       4, *entry, deterministic, target);
;
      }
    } else {
      ::std::unique_ptr<Response_ServerStatusEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::google::protobuf::int32, bool >::const_iterator
          it = this->server_status().begin();
          it != this->server_status().end(); ++it) {
        entry.reset(server_status_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       4, *entry, deterministic, target);
;
      }
    }
  }

  // repeated string col_keys = 5;
  for (int i = 0, n = this->col_keys_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->col_keys(i).data(), static_cast<int>(this->col_keys(i).length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "PennCloud.Response.col_keys");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(5, this->col_keys(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PennCloud.Response)
  return target;
}

size_t Response::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PennCloud.Response)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required string status = 1;
  if (has_status()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->status());
  }
  // map<int32, bool> server_status = 4;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->server_status_size());
  {
    ::std::unique_ptr<Response_ServerStatusEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::google::protobuf::int32, bool >::const_iterator
        it = this->server_status().begin();
        it != this->server_status().end(); ++it) {
      entry.reset(server_status_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // repeated string col_keys = 5;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->col_keys_size());
  for (int i = 0, n = this->col_keys_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->col_keys(i));
  }

  if (_has_bits_[0 / 32] & 6u) {
    // optional string description = 2;
    if (has_description()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->description());
    }

    // optional bytes value = 3;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->value());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Response::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PennCloud.Response)
  GOOGLE_DCHECK_NE(&from, this);
  const Response* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Response>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PennCloud.Response)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PennCloud.Response)
    MergeFrom(*source);
  }
}

void Response::MergeFrom(const Response& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PennCloud.Response)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  server_status_.MergeFrom(from.server_status_);
  col_keys_.MergeFrom(from.col_keys_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_status();
      status_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.status_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_description();
      description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_value();
      value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
    }
  }
}

void Response::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PennCloud.Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Response::CopyFrom(const Response& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PennCloud.Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Response::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void Response::Swap(Response* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Response::InternalSwap(Response* other) {
  using std::swap;
  server_status_.Swap(&other->server_status_);
  col_keys_.InternalSwap(CastToBase(&other->col_keys_));
  status_.Swap(&other->status_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  description_.Swap(&other->description_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  value_.Swap(&other->value_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Response::GetMetadata() const {
  protobuf_response_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_response_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace PennCloud
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::PennCloud::Response_ServerStatusEntry_DoNotUse* Arena::CreateMaybeMessage< ::PennCloud::Response_ServerStatusEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateInternal< ::PennCloud::Response_ServerStatusEntry_DoNotUse >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::PennCloud::Response* Arena::CreateMaybeMessage< ::PennCloud::Response >(Arena* arena) {
  return Arena::CreateInternal< ::PennCloud::Response >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
