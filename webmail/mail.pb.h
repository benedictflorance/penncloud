// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mail.proto

#ifndef PROTOBUF_INCLUDED_mail_2eproto
#define PROTOBUF_INCLUDED_mail_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_mail_2eproto 

namespace protobuf_mail_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_mail_2eproto
namespace PennCloud {
class Mail;
class MailDefaultTypeInternal;
extern MailDefaultTypeInternal _Mail_default_instance_;
}  // namespace PennCloud
namespace google {
namespace protobuf {
template<> ::PennCloud::Mail* Arena::CreateMaybeMessage<::PennCloud::Mail>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace PennCloud {

// ===================================================================

class Mail : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PennCloud.Mail) */ {
 public:
  Mail();
  virtual ~Mail();

  Mail(const Mail& from);

  inline Mail& operator=(const Mail& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Mail(Mail&& from) noexcept
    : Mail() {
    *this = ::std::move(from);
  }

  inline Mail& operator=(Mail&& from) noexcept {
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
  static const Mail& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Mail* internal_default_instance() {
    return reinterpret_cast<const Mail*>(
               &_Mail_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Mail* other);
  friend void swap(Mail& a, Mail& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Mail* New() const final {
    return CreateMaybeMessage<Mail>(NULL);
  }

  Mail* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Mail>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Mail& from);
  void MergeFrom(const Mail& from);
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
  void InternalSwap(Mail* other);
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

  // required string from = 1;
  bool has_from() const;
  void clear_from();
  static const int kFromFieldNumber = 1;
  const ::std::string& from() const;
  void set_from(const ::std::string& value);
  #if LANG_CXX11
  void set_from(::std::string&& value);
  #endif
  void set_from(const char* value);
  void set_from(const char* value, size_t size);
  ::std::string* mutable_from();
  ::std::string* release_from();
  void set_allocated_from(::std::string* from);

  // required string to = 2;
  bool has_to() const;
  void clear_to();
  static const int kToFieldNumber = 2;
  const ::std::string& to() const;
  void set_to(const ::std::string& value);
  #if LANG_CXX11
  void set_to(::std::string&& value);
  #endif
  void set_to(const char* value);
  void set_to(const char* value, size_t size);
  ::std::string* mutable_to();
  ::std::string* release_to();
  void set_allocated_to(::std::string* to);

  // required string date = 3;
  bool has_date() const;
  void clear_date();
  static const int kDateFieldNumber = 3;
  const ::std::string& date() const;
  void set_date(const ::std::string& value);
  #if LANG_CXX11
  void set_date(::std::string&& value);
  #endif
  void set_date(const char* value);
  void set_date(const char* value, size_t size);
  ::std::string* mutable_date();
  ::std::string* release_date();
  void set_allocated_date(::std::string* date);

  // required string subject = 4;
  bool has_subject() const;
  void clear_subject();
  static const int kSubjectFieldNumber = 4;
  const ::std::string& subject() const;
  void set_subject(const ::std::string& value);
  #if LANG_CXX11
  void set_subject(::std::string&& value);
  #endif
  void set_subject(const char* value);
  void set_subject(const char* value, size_t size);
  ::std::string* mutable_subject();
  ::std::string* release_subject();
  void set_allocated_subject(::std::string* subject);

  // required string key = 5;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 5;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // @@protoc_insertion_point(class_scope:PennCloud.Mail)
 private:
  void set_has_from();
  void clear_has_from();
  void set_has_to();
  void clear_has_to();
  void set_has_date();
  void clear_has_date();
  void set_has_subject();
  void clear_has_subject();
  void set_has_key();
  void clear_has_key();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr from_;
  ::google::protobuf::internal::ArenaStringPtr to_;
  ::google::protobuf::internal::ArenaStringPtr date_;
  ::google::protobuf::internal::ArenaStringPtr subject_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  friend struct ::protobuf_mail_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Mail

// required string from = 1;
inline bool Mail::has_from() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Mail::set_has_from() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Mail::clear_has_from() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Mail::clear_from() {
  from_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_from();
}
inline const ::std::string& Mail::from() const {
  // @@protoc_insertion_point(field_get:PennCloud.Mail.from)
  return from_.GetNoArena();
}
inline void Mail::set_from(const ::std::string& value) {
  set_has_from();
  from_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PennCloud.Mail.from)
}
#if LANG_CXX11
inline void Mail::set_from(::std::string&& value) {
  set_has_from();
  from_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PennCloud.Mail.from)
}
#endif
inline void Mail::set_from(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_from();
  from_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PennCloud.Mail.from)
}
inline void Mail::set_from(const char* value, size_t size) {
  set_has_from();
  from_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PennCloud.Mail.from)
}
inline ::std::string* Mail::mutable_from() {
  set_has_from();
  // @@protoc_insertion_point(field_mutable:PennCloud.Mail.from)
  return from_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mail::release_from() {
  // @@protoc_insertion_point(field_release:PennCloud.Mail.from)
  if (!has_from()) {
    return NULL;
  }
  clear_has_from();
  return from_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mail::set_allocated_from(::std::string* from) {
  if (from != NULL) {
    set_has_from();
  } else {
    clear_has_from();
  }
  from_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from);
  // @@protoc_insertion_point(field_set_allocated:PennCloud.Mail.from)
}

// required string to = 2;
inline bool Mail::has_to() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Mail::set_has_to() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Mail::clear_has_to() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Mail::clear_to() {
  to_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_to();
}
inline const ::std::string& Mail::to() const {
  // @@protoc_insertion_point(field_get:PennCloud.Mail.to)
  return to_.GetNoArena();
}
inline void Mail::set_to(const ::std::string& value) {
  set_has_to();
  to_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PennCloud.Mail.to)
}
#if LANG_CXX11
inline void Mail::set_to(::std::string&& value) {
  set_has_to();
  to_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PennCloud.Mail.to)
}
#endif
inline void Mail::set_to(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_to();
  to_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PennCloud.Mail.to)
}
inline void Mail::set_to(const char* value, size_t size) {
  set_has_to();
  to_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PennCloud.Mail.to)
}
inline ::std::string* Mail::mutable_to() {
  set_has_to();
  // @@protoc_insertion_point(field_mutable:PennCloud.Mail.to)
  return to_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mail::release_to() {
  // @@protoc_insertion_point(field_release:PennCloud.Mail.to)
  if (!has_to()) {
    return NULL;
  }
  clear_has_to();
  return to_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mail::set_allocated_to(::std::string* to) {
  if (to != NULL) {
    set_has_to();
  } else {
    clear_has_to();
  }
  to_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), to);
  // @@protoc_insertion_point(field_set_allocated:PennCloud.Mail.to)
}

// required string date = 3;
inline bool Mail::has_date() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Mail::set_has_date() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Mail::clear_has_date() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Mail::clear_date() {
  date_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_date();
}
inline const ::std::string& Mail::date() const {
  // @@protoc_insertion_point(field_get:PennCloud.Mail.date)
  return date_.GetNoArena();
}
inline void Mail::set_date(const ::std::string& value) {
  set_has_date();
  date_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PennCloud.Mail.date)
}
#if LANG_CXX11
inline void Mail::set_date(::std::string&& value) {
  set_has_date();
  date_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PennCloud.Mail.date)
}
#endif
inline void Mail::set_date(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_date();
  date_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PennCloud.Mail.date)
}
inline void Mail::set_date(const char* value, size_t size) {
  set_has_date();
  date_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PennCloud.Mail.date)
}
inline ::std::string* Mail::mutable_date() {
  set_has_date();
  // @@protoc_insertion_point(field_mutable:PennCloud.Mail.date)
  return date_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mail::release_date() {
  // @@protoc_insertion_point(field_release:PennCloud.Mail.date)
  if (!has_date()) {
    return NULL;
  }
  clear_has_date();
  return date_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mail::set_allocated_date(::std::string* date) {
  if (date != NULL) {
    set_has_date();
  } else {
    clear_has_date();
  }
  date_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), date);
  // @@protoc_insertion_point(field_set_allocated:PennCloud.Mail.date)
}

// required string subject = 4;
inline bool Mail::has_subject() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Mail::set_has_subject() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Mail::clear_has_subject() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Mail::clear_subject() {
  subject_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_subject();
}
inline const ::std::string& Mail::subject() const {
  // @@protoc_insertion_point(field_get:PennCloud.Mail.subject)
  return subject_.GetNoArena();
}
inline void Mail::set_subject(const ::std::string& value) {
  set_has_subject();
  subject_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PennCloud.Mail.subject)
}
#if LANG_CXX11
inline void Mail::set_subject(::std::string&& value) {
  set_has_subject();
  subject_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PennCloud.Mail.subject)
}
#endif
inline void Mail::set_subject(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_subject();
  subject_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PennCloud.Mail.subject)
}
inline void Mail::set_subject(const char* value, size_t size) {
  set_has_subject();
  subject_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PennCloud.Mail.subject)
}
inline ::std::string* Mail::mutable_subject() {
  set_has_subject();
  // @@protoc_insertion_point(field_mutable:PennCloud.Mail.subject)
  return subject_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mail::release_subject() {
  // @@protoc_insertion_point(field_release:PennCloud.Mail.subject)
  if (!has_subject()) {
    return NULL;
  }
  clear_has_subject();
  return subject_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mail::set_allocated_subject(::std::string* subject) {
  if (subject != NULL) {
    set_has_subject();
  } else {
    clear_has_subject();
  }
  subject_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), subject);
  // @@protoc_insertion_point(field_set_allocated:PennCloud.Mail.subject)
}

// required string key = 5;
inline bool Mail::has_key() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Mail::set_has_key() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Mail::clear_has_key() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Mail::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
inline const ::std::string& Mail::key() const {
  // @@protoc_insertion_point(field_get:PennCloud.Mail.key)
  return key_.GetNoArena();
}
inline void Mail::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PennCloud.Mail.key)
}
#if LANG_CXX11
inline void Mail::set_key(::std::string&& value) {
  set_has_key();
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PennCloud.Mail.key)
}
#endif
inline void Mail::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PennCloud.Mail.key)
}
inline void Mail::set_key(const char* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PennCloud.Mail.key)
}
inline ::std::string* Mail::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:PennCloud.Mail.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mail::release_key() {
  // @@protoc_insertion_point(field_release:PennCloud.Mail.key)
  if (!has_key()) {
    return NULL;
  }
  clear_has_key();
  return key_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mail::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:PennCloud.Mail.key)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace PennCloud

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_mail_2eproto
