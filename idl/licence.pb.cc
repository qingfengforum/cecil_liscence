// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: licence.proto

#include "licence.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_licence_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LicenceBase_licence_2eproto;
namespace LICENCE {
class LicenceBaseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LicenceBase> _instance;
} _LicenceBase_default_instance_;
class LicenceListDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LicenceList> _instance;
} _LicenceList_default_instance_;
}  // namespace LICENCE
static void InitDefaultsscc_info_LicenceBase_licence_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::LICENCE::_LicenceBase_default_instance_;
    new (ptr) ::LICENCE::LicenceBase();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::LICENCE::LicenceBase::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LicenceBase_licence_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_LicenceBase_licence_2eproto}, {}};

static void InitDefaultsscc_info_LicenceList_licence_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::LICENCE::_LicenceList_default_instance_;
    new (ptr) ::LICENCE::LicenceList();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::LICENCE::LicenceList::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_LicenceList_licence_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_LicenceList_licence_2eproto}, {
      &scc_info_LicenceBase_licence_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_licence_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_licence_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_licence_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_licence_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LICENCE::LicenceBase, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::LICENCE::LicenceBase, serial_num_),
  PROTOBUF_FIELD_OFFSET(::LICENCE::LicenceBase, registed_),
  PROTOBUF_FIELD_OFFSET(::LICENCE::LicenceBase, start_time_),
  PROTOBUF_FIELD_OFFSET(::LICENCE::LicenceBase, end_time_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LICENCE::LicenceList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::LICENCE::LicenceList, version_),
  PROTOBUF_FIELD_OFFSET(::LICENCE::LicenceList, numbers_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::LICENCE::LicenceBase)},
  { 9, -1, sizeof(::LICENCE::LicenceList)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::LICENCE::_LicenceBase_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::LICENCE::_LicenceList_default_instance_),
};

const char descriptor_table_protodef_licence_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rlicence.proto\022\007LICENCE\"Y\n\013LicenceBase\022"
  "\022\n\nserial_num\030\001 \001(\t\022\020\n\010registed\030\002 \001(\010\022\022\n"
  "\nstart_time\030\003 \001(\003\022\020\n\010end_time\030\004 \001(\003\"E\n\013L"
  "icenceList\022\017\n\007version\030\001 \001(\t\022%\n\007numbers\030\002"
  " \003(\0132\024.LICENCE.LicenceBaseb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_licence_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_licence_2eproto_sccs[2] = {
  &scc_info_LicenceBase_licence_2eproto.base,
  &scc_info_LicenceList_licence_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_licence_2eproto_once;
static bool descriptor_table_licence_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_licence_2eproto = {
  &descriptor_table_licence_2eproto_initialized, descriptor_table_protodef_licence_2eproto, "licence.proto", 194,
  &descriptor_table_licence_2eproto_once, descriptor_table_licence_2eproto_sccs, descriptor_table_licence_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_licence_2eproto::offsets,
  file_level_metadata_licence_2eproto, 2, file_level_enum_descriptors_licence_2eproto, file_level_service_descriptors_licence_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_licence_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_licence_2eproto), true);
namespace LICENCE {

// ===================================================================

void LicenceBase::InitAsDefaultInstance() {
}
class LicenceBase::_Internal {
 public:
};

LicenceBase::LicenceBase()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LICENCE.LicenceBase)
}
LicenceBase::LicenceBase(const LicenceBase& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  serial_num_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_serial_num().empty()) {
    serial_num_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.serial_num_);
  }
  ::memcpy(&start_time_, &from.start_time_,
    static_cast<size_t>(reinterpret_cast<char*>(&registed_) -
    reinterpret_cast<char*>(&start_time_)) + sizeof(registed_));
  // @@protoc_insertion_point(copy_constructor:LICENCE.LicenceBase)
}

void LicenceBase::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LicenceBase_licence_2eproto.base);
  serial_num_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&start_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&registed_) -
      reinterpret_cast<char*>(&start_time_)) + sizeof(registed_));
}

LicenceBase::~LicenceBase() {
  // @@protoc_insertion_point(destructor:LICENCE.LicenceBase)
  SharedDtor();
}

void LicenceBase::SharedDtor() {
  serial_num_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LicenceBase::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LicenceBase& LicenceBase::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LicenceBase_licence_2eproto.base);
  return *internal_default_instance();
}


void LicenceBase::Clear() {
// @@protoc_insertion_point(message_clear_start:LICENCE.LicenceBase)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  serial_num_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&start_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&registed_) -
      reinterpret_cast<char*>(&start_time_)) + sizeof(registed_));
  _internal_metadata_.Clear();
}

const char* LicenceBase::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string serial_num = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_serial_num();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "LICENCE.LicenceBase.serial_num"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool registed = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          registed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 start_time = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          start_time_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 end_time = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          end_time_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LicenceBase::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LICENCE.LicenceBase)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string serial_num = 1;
  if (this->serial_num().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_serial_num().data(), static_cast<int>(this->_internal_serial_num().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "LICENCE.LicenceBase.serial_num");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_serial_num(), target);
  }

  // bool registed = 2;
  if (this->registed() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_registed(), target);
  }

  // int64 start_time = 3;
  if (this->start_time() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(3, this->_internal_start_time(), target);
  }

  // int64 end_time = 4;
  if (this->end_time() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(4, this->_internal_end_time(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LICENCE.LicenceBase)
  return target;
}

size_t LicenceBase::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LICENCE.LicenceBase)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string serial_num = 1;
  if (this->serial_num().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_serial_num());
  }

  // int64 start_time = 3;
  if (this->start_time() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_start_time());
  }

  // int64 end_time = 4;
  if (this->end_time() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_end_time());
  }

  // bool registed = 2;
  if (this->registed() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LicenceBase::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LICENCE.LicenceBase)
  GOOGLE_DCHECK_NE(&from, this);
  const LicenceBase* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LicenceBase>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LICENCE.LicenceBase)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LICENCE.LicenceBase)
    MergeFrom(*source);
  }
}

void LicenceBase::MergeFrom(const LicenceBase& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LICENCE.LicenceBase)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.serial_num().size() > 0) {

    serial_num_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.serial_num_);
  }
  if (from.start_time() != 0) {
    _internal_set_start_time(from._internal_start_time());
  }
  if (from.end_time() != 0) {
    _internal_set_end_time(from._internal_end_time());
  }
  if (from.registed() != 0) {
    _internal_set_registed(from._internal_registed());
  }
}

void LicenceBase::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LICENCE.LicenceBase)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LicenceBase::CopyFrom(const LicenceBase& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LICENCE.LicenceBase)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LicenceBase::IsInitialized() const {
  return true;
}

void LicenceBase::InternalSwap(LicenceBase* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  serial_num_.Swap(&other->serial_num_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(start_time_, other->start_time_);
  swap(end_time_, other->end_time_);
  swap(registed_, other->registed_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LicenceBase::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void LicenceList::InitAsDefaultInstance() {
}
class LicenceList::_Internal {
 public:
};

LicenceList::LicenceList()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LICENCE.LicenceList)
}
LicenceList::LicenceList(const LicenceList& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      numbers_(from.numbers_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  version_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_version().empty()) {
    version_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  // @@protoc_insertion_point(copy_constructor:LICENCE.LicenceList)
}

void LicenceList::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LicenceList_licence_2eproto.base);
  version_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

LicenceList::~LicenceList() {
  // @@protoc_insertion_point(destructor:LICENCE.LicenceList)
  SharedDtor();
}

void LicenceList::SharedDtor() {
  version_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LicenceList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LicenceList& LicenceList::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LicenceList_licence_2eproto.base);
  return *internal_default_instance();
}


void LicenceList::Clear() {
// @@protoc_insertion_point(message_clear_start:LICENCE.LicenceList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  numbers_.Clear();
  version_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* LicenceList::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string version = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_version();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "LICENCE.LicenceList.version"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .LICENCE.LicenceBase numbers = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_numbers(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LicenceList::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LICENCE.LicenceList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string version = 1;
  if (this->version().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_version().data(), static_cast<int>(this->_internal_version().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "LICENCE.LicenceList.version");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_version(), target);
  }

  // repeated .LICENCE.LicenceBase numbers = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_numbers_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_numbers(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LICENCE.LicenceList)
  return target;
}

size_t LicenceList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LICENCE.LicenceList)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .LICENCE.LicenceBase numbers = 2;
  total_size += 1UL * this->_internal_numbers_size();
  for (const auto& msg : this->numbers_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string version = 1;
  if (this->version().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_version());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LicenceList::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LICENCE.LicenceList)
  GOOGLE_DCHECK_NE(&from, this);
  const LicenceList* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LicenceList>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LICENCE.LicenceList)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LICENCE.LicenceList)
    MergeFrom(*source);
  }
}

void LicenceList::MergeFrom(const LicenceList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LICENCE.LicenceList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  numbers_.MergeFrom(from.numbers_);
  if (from.version().size() > 0) {

    version_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
}

void LicenceList::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LICENCE.LicenceList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LicenceList::CopyFrom(const LicenceList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LICENCE.LicenceList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LicenceList::IsInitialized() const {
  return true;
}

void LicenceList::InternalSwap(LicenceList* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  numbers_.InternalSwap(&other->numbers_);
  version_.Swap(&other->version_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata LicenceList::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace LICENCE
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::LICENCE::LicenceBase* Arena::CreateMaybeMessage< ::LICENCE::LicenceBase >(Arena* arena) {
  return Arena::CreateInternal< ::LICENCE::LicenceBase >(arena);
}
template<> PROTOBUF_NOINLINE ::LICENCE::LicenceList* Arena::CreateMaybeMessage< ::LICENCE::LicenceList >(Arena* arena) {
  return Arena::CreateInternal< ::LICENCE::LicenceList >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
