// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: imu_mat.proto

#include "imu_mat.pb.h"

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

namespace protobuf_quaternion_5fmat_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_quaternion_5fmat_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_QuaternionMat;
}  // namespace protobuf_quaternion_5fmat_2eproto
namespace protobuf_time_5fmat_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_time_5fmat_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_TimeMat;
}  // namespace protobuf_time_5fmat_2eproto
namespace protobuf_vector3d_5fmat_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_vector3d_5fmat_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Vector3dMat;
}  // namespace protobuf_vector3d_5fmat_2eproto
namespace robotics {
namespace matlab {
class IMUMatDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<IMUMat>
      _instance;
} _IMUMat_default_instance_;
}  // namespace matlab
}  // namespace robotics
namespace protobuf_imu_5fmat_2eproto {
static void InitDefaultsIMUMat() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::robotics::matlab::_IMUMat_default_instance_;
    new (ptr) ::robotics::matlab::IMUMat();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::robotics::matlab::IMUMat::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<3> scc_info_IMUMat =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsIMUMat}, {
      &protobuf_time_5fmat_2eproto::scc_info_TimeMat.base,
      &protobuf_quaternion_5fmat_2eproto::scc_info_QuaternionMat.base,
      &protobuf_vector3d_5fmat_2eproto::scc_info_Vector3dMat.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_IMUMat.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::IMUMat, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::IMUMat, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::IMUMat, m_stamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::IMUMat, m_entity_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::IMUMat, m_orientation_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::IMUMat, m_angular_velocity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::IMUMat, m_linear_acceleration_),
  1,
  0,
  2,
  3,
  4,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::robotics::matlab::IMUMat)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::robotics::matlab::_IMUMat_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "imu_mat.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\rimu_mat.proto\022\017robotics.matlab\032\016time_m"
      "at.proto\032\022vector3d_mat.proto\032\024quaternion"
      "_mat.proto\"\370\001\n\006IMUMat\022)\n\007m_stamp\030\001 \002(\0132\030"
      ".robotics.matlab.TimeMat\022\025\n\rm_entity_nam"
      "e\030\002 \002(\t\0225\n\rm_orientation\030\003 \002(\0132\036.robotic"
      "s.matlab.QuaternionMat\0228\n\022m_angular_velo"
      "city\030\004 \002(\0132\034.robotics.matlab.Vector3dMat"
      "\022;\n\025m_linear_acceleration\030\005 \002(\0132\034.roboti"
      "cs.matlab.Vector3dMat"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 341);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "imu_mat.proto", &protobuf_RegisterTypes);
  ::protobuf_time_5fmat_2eproto::AddDescriptors();
  ::protobuf_vector3d_5fmat_2eproto::AddDescriptors();
  ::protobuf_quaternion_5fmat_2eproto::AddDescriptors();
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
}  // namespace protobuf_imu_5fmat_2eproto
namespace robotics {
namespace matlab {

// ===================================================================

void IMUMat::InitAsDefaultInstance() {
  ::robotics::matlab::_IMUMat_default_instance_._instance.get_mutable()->m_stamp_ = const_cast< ::robotics::matlab::TimeMat*>(
      ::robotics::matlab::TimeMat::internal_default_instance());
  ::robotics::matlab::_IMUMat_default_instance_._instance.get_mutable()->m_orientation_ = const_cast< ::robotics::matlab::QuaternionMat*>(
      ::robotics::matlab::QuaternionMat::internal_default_instance());
  ::robotics::matlab::_IMUMat_default_instance_._instance.get_mutable()->m_angular_velocity_ = const_cast< ::robotics::matlab::Vector3dMat*>(
      ::robotics::matlab::Vector3dMat::internal_default_instance());
  ::robotics::matlab::_IMUMat_default_instance_._instance.get_mutable()->m_linear_acceleration_ = const_cast< ::robotics::matlab::Vector3dMat*>(
      ::robotics::matlab::Vector3dMat::internal_default_instance());
}
void IMUMat::clear_m_stamp() {
  if (m_stamp_ != NULL) m_stamp_->Clear();
  clear_has_m_stamp();
}
void IMUMat::clear_m_orientation() {
  if (m_orientation_ != NULL) m_orientation_->Clear();
  clear_has_m_orientation();
}
void IMUMat::clear_m_angular_velocity() {
  if (m_angular_velocity_ != NULL) m_angular_velocity_->Clear();
  clear_has_m_angular_velocity();
}
void IMUMat::clear_m_linear_acceleration() {
  if (m_linear_acceleration_ != NULL) m_linear_acceleration_->Clear();
  clear_has_m_linear_acceleration();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int IMUMat::kMStampFieldNumber;
const int IMUMat::kMEntityNameFieldNumber;
const int IMUMat::kMOrientationFieldNumber;
const int IMUMat::kMAngularVelocityFieldNumber;
const int IMUMat::kMLinearAccelerationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

IMUMat::IMUMat()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_imu_5fmat_2eproto::scc_info_IMUMat.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:robotics.matlab.IMUMat)
}
IMUMat::IMUMat(const IMUMat& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  m_entity_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_m_entity_name()) {
    m_entity_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.m_entity_name_);
  }
  if (from.has_m_stamp()) {
    m_stamp_ = new ::robotics::matlab::TimeMat(*from.m_stamp_);
  } else {
    m_stamp_ = NULL;
  }
  if (from.has_m_orientation()) {
    m_orientation_ = new ::robotics::matlab::QuaternionMat(*from.m_orientation_);
  } else {
    m_orientation_ = NULL;
  }
  if (from.has_m_angular_velocity()) {
    m_angular_velocity_ = new ::robotics::matlab::Vector3dMat(*from.m_angular_velocity_);
  } else {
    m_angular_velocity_ = NULL;
  }
  if (from.has_m_linear_acceleration()) {
    m_linear_acceleration_ = new ::robotics::matlab::Vector3dMat(*from.m_linear_acceleration_);
  } else {
    m_linear_acceleration_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:robotics.matlab.IMUMat)
}

void IMUMat::SharedCtor() {
  m_entity_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&m_stamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&m_linear_acceleration_) -
      reinterpret_cast<char*>(&m_stamp_)) + sizeof(m_linear_acceleration_));
}

IMUMat::~IMUMat() {
  // @@protoc_insertion_point(destructor:robotics.matlab.IMUMat)
  SharedDtor();
}

void IMUMat::SharedDtor() {
  m_entity_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete m_stamp_;
  if (this != internal_default_instance()) delete m_orientation_;
  if (this != internal_default_instance()) delete m_angular_velocity_;
  if (this != internal_default_instance()) delete m_linear_acceleration_;
}

void IMUMat::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* IMUMat::descriptor() {
  ::protobuf_imu_5fmat_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_imu_5fmat_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const IMUMat& IMUMat::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_imu_5fmat_2eproto::scc_info_IMUMat.base);
  return *internal_default_instance();
}


void IMUMat::Clear() {
// @@protoc_insertion_point(message_clear_start:robotics.matlab.IMUMat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      m_entity_name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(m_stamp_ != NULL);
      m_stamp_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(m_orientation_ != NULL);
      m_orientation_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(m_angular_velocity_ != NULL);
      m_angular_velocity_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(m_linear_acceleration_ != NULL);
      m_linear_acceleration_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool IMUMat::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:robotics.matlab.IMUMat)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .robotics.matlab.TimeMat m_stamp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_m_stamp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string m_entity_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_m_entity_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->m_entity_name().data(), static_cast<int>(this->m_entity_name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "robotics.matlab.IMUMat.m_entity_name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required .robotics.matlab.QuaternionMat m_orientation = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_m_orientation()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required .robotics.matlab.Vector3dMat m_angular_velocity = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_m_angular_velocity()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required .robotics.matlab.Vector3dMat m_linear_acceleration = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_m_linear_acceleration()));
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
  // @@protoc_insertion_point(parse_success:robotics.matlab.IMUMat)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:robotics.matlab.IMUMat)
  return false;
#undef DO_
}

void IMUMat::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:robotics.matlab.IMUMat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .robotics.matlab.TimeMat m_stamp = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_m_stamp(), output);
  }

  // required string m_entity_name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->m_entity_name().data(), static_cast<int>(this->m_entity_name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "robotics.matlab.IMUMat.m_entity_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->m_entity_name(), output);
  }

  // required .robotics.matlab.QuaternionMat m_orientation = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_m_orientation(), output);
  }

  // required .robotics.matlab.Vector3dMat m_angular_velocity = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_m_angular_velocity(), output);
  }

  // required .robotics.matlab.Vector3dMat m_linear_acceleration = 5;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_m_linear_acceleration(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:robotics.matlab.IMUMat)
}

::google::protobuf::uint8* IMUMat::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:robotics.matlab.IMUMat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .robotics.matlab.TimeMat m_stamp = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_m_stamp(), deterministic, target);
  }

  // required string m_entity_name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->m_entity_name().data(), static_cast<int>(this->m_entity_name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "robotics.matlab.IMUMat.m_entity_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->m_entity_name(), target);
  }

  // required .robotics.matlab.QuaternionMat m_orientation = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_m_orientation(), deterministic, target);
  }

  // required .robotics.matlab.Vector3dMat m_angular_velocity = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_m_angular_velocity(), deterministic, target);
  }

  // required .robotics.matlab.Vector3dMat m_linear_acceleration = 5;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_m_linear_acceleration(), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:robotics.matlab.IMUMat)
  return target;
}

size_t IMUMat::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:robotics.matlab.IMUMat)
  size_t total_size = 0;

  if (has_m_entity_name()) {
    // required string m_entity_name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->m_entity_name());
  }

  if (has_m_stamp()) {
    // required .robotics.matlab.TimeMat m_stamp = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *m_stamp_);
  }

  if (has_m_orientation()) {
    // required .robotics.matlab.QuaternionMat m_orientation = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *m_orientation_);
  }

  if (has_m_angular_velocity()) {
    // required .robotics.matlab.Vector3dMat m_angular_velocity = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *m_angular_velocity_);
  }

  if (has_m_linear_acceleration()) {
    // required .robotics.matlab.Vector3dMat m_linear_acceleration = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *m_linear_acceleration_);
  }

  return total_size;
}
size_t IMUMat::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:robotics.matlab.IMUMat)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x0000001f) ^ 0x0000001f) == 0) {  // All required fields are present.
    // required string m_entity_name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->m_entity_name());

    // required .robotics.matlab.TimeMat m_stamp = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *m_stamp_);

    // required .robotics.matlab.QuaternionMat m_orientation = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *m_orientation_);

    // required .robotics.matlab.Vector3dMat m_angular_velocity = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *m_angular_velocity_);

    // required .robotics.matlab.Vector3dMat m_linear_acceleration = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *m_linear_acceleration_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void IMUMat::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:robotics.matlab.IMUMat)
  GOOGLE_DCHECK_NE(&from, this);
  const IMUMat* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const IMUMat>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:robotics.matlab.IMUMat)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:robotics.matlab.IMUMat)
    MergeFrom(*source);
  }
}

void IMUMat::MergeFrom(const IMUMat& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:robotics.matlab.IMUMat)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_m_entity_name();
      m_entity_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.m_entity_name_);
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_m_stamp()->::robotics::matlab::TimeMat::MergeFrom(from.m_stamp());
    }
    if (cached_has_bits & 0x00000004u) {
      mutable_m_orientation()->::robotics::matlab::QuaternionMat::MergeFrom(from.m_orientation());
    }
    if (cached_has_bits & 0x00000008u) {
      mutable_m_angular_velocity()->::robotics::matlab::Vector3dMat::MergeFrom(from.m_angular_velocity());
    }
    if (cached_has_bits & 0x00000010u) {
      mutable_m_linear_acceleration()->::robotics::matlab::Vector3dMat::MergeFrom(from.m_linear_acceleration());
    }
  }
}

void IMUMat::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:robotics.matlab.IMUMat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IMUMat::CopyFrom(const IMUMat& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:robotics.matlab.IMUMat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IMUMat::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;
  if (has_m_stamp()) {
    if (!this->m_stamp_->IsInitialized()) return false;
  }
  if (has_m_orientation()) {
    if (!this->m_orientation_->IsInitialized()) return false;
  }
  if (has_m_angular_velocity()) {
    if (!this->m_angular_velocity_->IsInitialized()) return false;
  }
  if (has_m_linear_acceleration()) {
    if (!this->m_linear_acceleration_->IsInitialized()) return false;
  }
  return true;
}

void IMUMat::Swap(IMUMat* other) {
  if (other == this) return;
  InternalSwap(other);
}
void IMUMat::InternalSwap(IMUMat* other) {
  using std::swap;
  m_entity_name_.Swap(&other->m_entity_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(m_stamp_, other->m_stamp_);
  swap(m_orientation_, other->m_orientation_);
  swap(m_angular_velocity_, other->m_angular_velocity_);
  swap(m_linear_acceleration_, other->m_linear_acceleration_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata IMUMat::GetMetadata() const {
  protobuf_imu_5fmat_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_imu_5fmat_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace matlab
}  // namespace robotics
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::robotics::matlab::IMUMat* Arena::CreateMaybeMessage< ::robotics::matlab::IMUMat >(Arena* arena) {
  return Arena::CreateInternal< ::robotics::matlab::IMUMat >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
