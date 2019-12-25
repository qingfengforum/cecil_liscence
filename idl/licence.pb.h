// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: licence.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_licence_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_licence_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_licence_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_licence_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_licence_2eproto;
namespace LICENCE {
class LicenceBase;
class LicenceBaseDefaultTypeInternal;
extern LicenceBaseDefaultTypeInternal _LicenceBase_default_instance_;
class LicenceList;
class LicenceListDefaultTypeInternal;
extern LicenceListDefaultTypeInternal _LicenceList_default_instance_;
}  // namespace LICENCE
PROTOBUF_NAMESPACE_OPEN
template<> ::LICENCE::LicenceBase* Arena::CreateMaybeMessage<::LICENCE::LicenceBase>(Arena*);
template<> ::LICENCE::LicenceList* Arena::CreateMaybeMessage<::LICENCE::LicenceList>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace LICENCE {

// ===================================================================

class LicenceBase :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LICENCE.LicenceBase) */ {
 public:
  LicenceBase();
  virtual ~LicenceBase();

  LicenceBase(const LicenceBase& from);
  LicenceBase(LicenceBase&& from) noexcept
    : LicenceBase() {
    *this = ::std::move(from);
  }

  inline LicenceBase& operator=(const LicenceBase& from) {
    CopyFrom(from);
    return *this;
  }
  inline LicenceBase& operator=(LicenceBase&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LicenceBase& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LicenceBase* internal_default_instance() {
    return reinterpret_cast<const LicenceBase*>(
               &_LicenceBase_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LicenceBase& a, LicenceBase& b) {
    a.Swap(&b);
  }
  inline void Swap(LicenceBase* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LicenceBase* New() const final {
    return CreateMaybeMessage<LicenceBase>(nullptr);
  }

  LicenceBase* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LicenceBase>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LicenceBase& from);
  void MergeFrom(const LicenceBase& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LicenceBase* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LICENCE.LicenceBase";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_licence_2eproto);
    return ::descriptor_table_licence_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSerialNumFieldNumber = 1,
    kStartTimeFieldNumber = 3,
    kEndTimeFieldNumber = 4,
    kRegistedFieldNumber = 2,
  };
  // string serial_num = 1;
  void clear_serial_num();
  const std::string& serial_num() const;
  void set_serial_num(const std::string& value);
  void set_serial_num(std::string&& value);
  void set_serial_num(const char* value);
  void set_serial_num(const char* value, size_t size);
  std::string* mutable_serial_num();
  std::string* release_serial_num();
  void set_allocated_serial_num(std::string* serial_num);
  private:
  const std::string& _internal_serial_num() const;
  void _internal_set_serial_num(const std::string& value);
  std::string* _internal_mutable_serial_num();
  public:

  // int64 start_time = 3;
  void clear_start_time();
  ::PROTOBUF_NAMESPACE_ID::int64 start_time() const;
  void set_start_time(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_start_time() const;
  void _internal_set_start_time(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 end_time = 4;
  void clear_end_time();
  ::PROTOBUF_NAMESPACE_ID::int64 end_time() const;
  void set_end_time(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_end_time() const;
  void _internal_set_end_time(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // bool registed = 2;
  void clear_registed();
  bool registed() const;
  void set_registed(bool value);
  private:
  bool _internal_registed() const;
  void _internal_set_registed(bool value);
  public:

  // @@protoc_insertion_point(class_scope:LICENCE.LicenceBase)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr serial_num_;
  ::PROTOBUF_NAMESPACE_ID::int64 start_time_;
  ::PROTOBUF_NAMESPACE_ID::int64 end_time_;
  bool registed_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_licence_2eproto;
};
// -------------------------------------------------------------------

class LicenceList :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:LICENCE.LicenceList) */ {
 public:
  LicenceList();
  virtual ~LicenceList();

  LicenceList(const LicenceList& from);
  LicenceList(LicenceList&& from) noexcept
    : LicenceList() {
    *this = ::std::move(from);
  }

  inline LicenceList& operator=(const LicenceList& from) {
    CopyFrom(from);
    return *this;
  }
  inline LicenceList& operator=(LicenceList&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LicenceList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LicenceList* internal_default_instance() {
    return reinterpret_cast<const LicenceList*>(
               &_LicenceList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(LicenceList& a, LicenceList& b) {
    a.Swap(&b);
  }
  inline void Swap(LicenceList* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LicenceList* New() const final {
    return CreateMaybeMessage<LicenceList>(nullptr);
  }

  LicenceList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LicenceList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LicenceList& from);
  void MergeFrom(const LicenceList& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LicenceList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "LICENCE.LicenceList";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_licence_2eproto);
    return ::descriptor_table_licence_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNumbersFieldNumber = 2,
    kVersionFieldNumber = 1,
  };
  // repeated .LICENCE.LicenceBase numbers = 2;
  int numbers_size() const;
  private:
  int _internal_numbers_size() const;
  public:
  void clear_numbers();
  ::LICENCE::LicenceBase* mutable_numbers(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LICENCE::LicenceBase >*
      mutable_numbers();
  private:
  const ::LICENCE::LicenceBase& _internal_numbers(int index) const;
  ::LICENCE::LicenceBase* _internal_add_numbers();
  public:
  const ::LICENCE::LicenceBase& numbers(int index) const;
  ::LICENCE::LicenceBase* add_numbers();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LICENCE::LicenceBase >&
      numbers() const;

  // string version = 1;
  void clear_version();
  const std::string& version() const;
  void set_version(const std::string& value);
  void set_version(std::string&& value);
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  std::string* mutable_version();
  std::string* release_version();
  void set_allocated_version(std::string* version);
  private:
  const std::string& _internal_version() const;
  void _internal_set_version(const std::string& value);
  std::string* _internal_mutable_version();
  public:

  // @@protoc_insertion_point(class_scope:LICENCE.LicenceList)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LICENCE::LicenceBase > numbers_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr version_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_licence_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LicenceBase

// string serial_num = 1;
inline void LicenceBase::clear_serial_num() {
  serial_num_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& LicenceBase::serial_num() const {
  // @@protoc_insertion_point(field_get:LICENCE.LicenceBase.serial_num)
  return _internal_serial_num();
}
inline void LicenceBase::set_serial_num(const std::string& value) {
  _internal_set_serial_num(value);
  // @@protoc_insertion_point(field_set:LICENCE.LicenceBase.serial_num)
}
inline std::string* LicenceBase::mutable_serial_num() {
  // @@protoc_insertion_point(field_mutable:LICENCE.LicenceBase.serial_num)
  return _internal_mutable_serial_num();
}
inline const std::string& LicenceBase::_internal_serial_num() const {
  return serial_num_.GetNoArena();
}
inline void LicenceBase::_internal_set_serial_num(const std::string& value) {
  
  serial_num_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void LicenceBase::set_serial_num(std::string&& value) {
  
  serial_num_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LICENCE.LicenceBase.serial_num)
}
inline void LicenceBase::set_serial_num(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  serial_num_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LICENCE.LicenceBase.serial_num)
}
inline void LicenceBase::set_serial_num(const char* value, size_t size) {
  
  serial_num_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LICENCE.LicenceBase.serial_num)
}
inline std::string* LicenceBase::_internal_mutable_serial_num() {
  
  return serial_num_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LicenceBase::release_serial_num() {
  // @@protoc_insertion_point(field_release:LICENCE.LicenceBase.serial_num)
  
  return serial_num_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LicenceBase::set_allocated_serial_num(std::string* serial_num) {
  if (serial_num != nullptr) {
    
  } else {
    
  }
  serial_num_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), serial_num);
  // @@protoc_insertion_point(field_set_allocated:LICENCE.LicenceBase.serial_num)
}

// bool registed = 2;
inline void LicenceBase::clear_registed() {
  registed_ = false;
}
inline bool LicenceBase::_internal_registed() const {
  return registed_;
}
inline bool LicenceBase::registed() const {
  // @@protoc_insertion_point(field_get:LICENCE.LicenceBase.registed)
  return _internal_registed();
}
inline void LicenceBase::_internal_set_registed(bool value) {
  
  registed_ = value;
}
inline void LicenceBase::set_registed(bool value) {
  _internal_set_registed(value);
  // @@protoc_insertion_point(field_set:LICENCE.LicenceBase.registed)
}

// int64 start_time = 3;
inline void LicenceBase::clear_start_time() {
  start_time_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 LicenceBase::_internal_start_time() const {
  return start_time_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 LicenceBase::start_time() const {
  // @@protoc_insertion_point(field_get:LICENCE.LicenceBase.start_time)
  return _internal_start_time();
}
inline void LicenceBase::_internal_set_start_time(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  start_time_ = value;
}
inline void LicenceBase::set_start_time(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_start_time(value);
  // @@protoc_insertion_point(field_set:LICENCE.LicenceBase.start_time)
}

// int64 end_time = 4;
inline void LicenceBase::clear_end_time() {
  end_time_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 LicenceBase::_internal_end_time() const {
  return end_time_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 LicenceBase::end_time() const {
  // @@protoc_insertion_point(field_get:LICENCE.LicenceBase.end_time)
  return _internal_end_time();
}
inline void LicenceBase::_internal_set_end_time(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  end_time_ = value;
}
inline void LicenceBase::set_end_time(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_end_time(value);
  // @@protoc_insertion_point(field_set:LICENCE.LicenceBase.end_time)
}

// -------------------------------------------------------------------

// LicenceList

// string version = 1;
inline void LicenceList::clear_version() {
  version_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& LicenceList::version() const {
  // @@protoc_insertion_point(field_get:LICENCE.LicenceList.version)
  return _internal_version();
}
inline void LicenceList::set_version(const std::string& value) {
  _internal_set_version(value);
  // @@protoc_insertion_point(field_set:LICENCE.LicenceList.version)
}
inline std::string* LicenceList::mutable_version() {
  // @@protoc_insertion_point(field_mutable:LICENCE.LicenceList.version)
  return _internal_mutable_version();
}
inline const std::string& LicenceList::_internal_version() const {
  return version_.GetNoArena();
}
inline void LicenceList::_internal_set_version(const std::string& value) {
  
  version_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void LicenceList::set_version(std::string&& value) {
  
  version_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LICENCE.LicenceList.version)
}
inline void LicenceList::set_version(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  version_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LICENCE.LicenceList.version)
}
inline void LicenceList::set_version(const char* value, size_t size) {
  
  version_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LICENCE.LicenceList.version)
}
inline std::string* LicenceList::_internal_mutable_version() {
  
  return version_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LicenceList::release_version() {
  // @@protoc_insertion_point(field_release:LICENCE.LicenceList.version)
  
  return version_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LicenceList::set_allocated_version(std::string* version) {
  if (version != nullptr) {
    
  } else {
    
  }
  version_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), version);
  // @@protoc_insertion_point(field_set_allocated:LICENCE.LicenceList.version)
}

// repeated .LICENCE.LicenceBase numbers = 2;
inline int LicenceList::_internal_numbers_size() const {
  return numbers_.size();
}
inline int LicenceList::numbers_size() const {
  return _internal_numbers_size();
}
inline void LicenceList::clear_numbers() {
  numbers_.Clear();
}
inline ::LICENCE::LicenceBase* LicenceList::mutable_numbers(int index) {
  // @@protoc_insertion_point(field_mutable:LICENCE.LicenceList.numbers)
  return numbers_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LICENCE::LicenceBase >*
LicenceList::mutable_numbers() {
  // @@protoc_insertion_point(field_mutable_list:LICENCE.LicenceList.numbers)
  return &numbers_;
}
inline const ::LICENCE::LicenceBase& LicenceList::_internal_numbers(int index) const {
  return numbers_.Get(index);
}
inline const ::LICENCE::LicenceBase& LicenceList::numbers(int index) const {
  // @@protoc_insertion_point(field_get:LICENCE.LicenceList.numbers)
  return _internal_numbers(index);
}
inline ::LICENCE::LicenceBase* LicenceList::_internal_add_numbers() {
  return numbers_.Add();
}
inline ::LICENCE::LicenceBase* LicenceList::add_numbers() {
  // @@protoc_insertion_point(field_add:LICENCE.LicenceList.numbers)
  return _internal_add_numbers();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::LICENCE::LicenceBase >&
LicenceList::numbers() const {
  // @@protoc_insertion_point(field_list:LICENCE.LicenceList.numbers)
  return numbers_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace LICENCE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_licence_2eproto
