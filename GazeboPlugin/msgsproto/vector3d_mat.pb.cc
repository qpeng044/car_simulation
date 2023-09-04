// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vector3d_mat.proto

#include "vector3d_mat.pb.h"

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

namespace robotics {
namespace matlab {
class Vector3dMatDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Vector3dMat>
      _instance;
} _Vector3dMat_default_instance_;
}  // namespace matlab
}  // namespace robotics
namespace protobuf_vector3d_5fmat_2eproto {
static void InitDefaultsVector3dMat() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::robotics::matlab::_Vector3dMat_default_instance_;
    new (ptr) ::robotics::matlab::Vector3dMat();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::robotics::matlab::Vector3dMat::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Vector3dMat =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVector3dMat}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Vector3dMat.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::Vector3dMat, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::Vector3dMat, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::Vector3dMat, m_x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::Vector3dMat, m_y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::Vector3dMat, m_z_),
  0,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::robotics::matlab::Vector3dMat)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::robotics::matlab::_Vector3dMat_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "vector3d_mat.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\022vector3d_mat.proto\022\017robotics.matlab\"4\n"
      "\013Vector3dMat\022\013\n\003m_x\030\001 \002(\001\022\013\n\003m_y\030\002 \002(\001\022\013"
      "\n\003m_z\030\003 \002(\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 91);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "vector3d_mat.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_vector3d_5fmat_2eproto
namespace robotics {
namespace matlab {

// ===================================================================

void Vector3dMat::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vector3dMat::kMXFieldNumber;
const int Vector3dMat::kMYFieldNumber;
const int Vector3dMat::kMZFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vector3dMat::Vector3dMat()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_vector3d_5fmat_2eproto::scc_info_Vector3dMat.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:robotics.matlab.Vector3dMat)
}
Vector3dMat::Vector3dMat(const Vector3dMat& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&m_x_, &from.m_x_,
    static_cast<size_t>(reinterpret_cast<char*>(&m_z_) -
    reinterpret_cast<char*>(&m_x_)) + sizeof(m_z_));
  // @@protoc_insertion_point(copy_constructor:robotics.matlab.Vector3dMat)
}

void Vector3dMat::SharedCtor() {
  ::memset(&m_x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&m_z_) -
      reinterpret_cast<char*>(&m_x_)) + sizeof(m_z_));
}

Vector3dMat::~Vector3dMat() {
  // @@protoc_insertion_point(destructor:robotics.matlab.Vector3dMat)
  SharedDtor();
}

void Vector3dMat::SharedDtor() {
}

void Vector3dMat::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Vector3dMat::descriptor() {
  ::protobuf_vector3d_5fmat_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_vector3d_5fmat_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Vector3dMat& Vector3dMat::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_vector3d_5fmat_2eproto::scc_info_Vector3dMat.base);
  return *internal_default_instance();
}


void Vector3dMat::Clear() {
// @@protoc_insertion_point(message_clear_start:robotics.matlab.Vector3dMat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    ::memset(&m_x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&m_z_) -
        reinterpret_cast<char*>(&m_x_)) + sizeof(m_z_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Vector3dMat::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:robotics.matlab.Vector3dMat)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required double m_x = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {
          set_has_m_x();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &m_x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required double m_y = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {
          set_has_m_y();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &m_y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required double m_z = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {
          set_has_m_z();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &m_z_)));
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
  // @@protoc_insertion_point(parse_success:robotics.matlab.Vector3dMat)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:robotics.matlab.Vector3dMat)
  return false;
#undef DO_
}

void Vector3dMat::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:robotics.matlab.Vector3dMat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required double m_x = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->m_x(), output);
  }

  // required double m_y = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->m_y(), output);
  }

  // required double m_z = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->m_z(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:robotics.matlab.Vector3dMat)
}

::google::protobuf::uint8* Vector3dMat::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:robotics.matlab.Vector3dMat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required double m_x = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->m_x(), target);
  }

  // required double m_y = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->m_y(), target);
  }

  // required double m_z = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->m_z(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:robotics.matlab.Vector3dMat)
  return target;
}

size_t Vector3dMat::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:robotics.matlab.Vector3dMat)
  size_t total_size = 0;

  if (has_m_x()) {
    // required double m_x = 1;
    total_size += 1 + 8;
  }

  if (has_m_y()) {
    // required double m_y = 2;
    total_size += 1 + 8;
  }

  if (has_m_z()) {
    // required double m_z = 3;
    total_size += 1 + 8;
  }

  return total_size;
}
size_t Vector3dMat::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:robotics.matlab.Vector3dMat)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required double m_x = 1;
    total_size += 1 + 8;

    // required double m_y = 2;
    total_size += 1 + 8;

    // required double m_z = 3;
    total_size += 1 + 8;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vector3dMat::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:robotics.matlab.Vector3dMat)
  GOOGLE_DCHECK_NE(&from, this);
  const Vector3dMat* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vector3dMat>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:robotics.matlab.Vector3dMat)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:robotics.matlab.Vector3dMat)
    MergeFrom(*source);
  }
}

void Vector3dMat::MergeFrom(const Vector3dMat& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:robotics.matlab.Vector3dMat)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      m_x_ = from.m_x_;
    }
    if (cached_has_bits & 0x00000002u) {
      m_y_ = from.m_y_;
    }
    if (cached_has_bits & 0x00000004u) {
      m_z_ = from.m_z_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Vector3dMat::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:robotics.matlab.Vector3dMat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vector3dMat::CopyFrom(const Vector3dMat& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:robotics.matlab.Vector3dMat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vector3dMat::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  return true;
}

void Vector3dMat::Swap(Vector3dMat* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vector3dMat::InternalSwap(Vector3dMat* other) {
  using std::swap;
  swap(m_x_, other->m_x_);
  swap(m_y_, other->m_y_);
  swap(m_z_, other->m_z_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Vector3dMat::GetMetadata() const {
  protobuf_vector3d_5fmat_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_vector3d_5fmat_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace matlab
}  // namespace robotics
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::robotics::matlab::Vector3dMat* Arena::CreateMaybeMessage< ::robotics::matlab::Vector3dMat >(Arena* arena) {
  return Arena::CreateInternal< ::robotics::matlab::Vector3dMat >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
