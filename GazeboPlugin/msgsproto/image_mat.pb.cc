// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: image_mat.proto

#include "image_mat.pb.h"

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
class ImageMatDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ImageMat>
      _instance;
} _ImageMat_default_instance_;
}  // namespace matlab
}  // namespace robotics
namespace protobuf_image_5fmat_2eproto {
static void InitDefaultsImageMat() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::robotics::matlab::_ImageMat_default_instance_;
    new (ptr) ::robotics::matlab::ImageMat();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::robotics::matlab::ImageMat::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ImageMat =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsImageMat}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ImageMat.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::ImageMat, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::ImageMat, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::ImageMat, m_width_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::ImageMat, m_height_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::ImageMat, m_pixel_format_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::ImageMat, m_step_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::robotics::matlab::ImageMat, m_data_),
  1,
  2,
  3,
  4,
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::robotics::matlab::ImageMat)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::robotics::matlab::_ImageMat_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "image_mat.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\017image_mat.proto\022\017robotics.matlab\"e\n\010Im"
      "ageMat\022\017\n\007m_width\030\001 \002(\r\022\020\n\010m_height\030\002 \002("
      "\r\022\026\n\016m_pixel_format\030\003 \002(\r\022\016\n\006m_step\030\004 \002("
      "\r\022\016\n\006m_data\030\005 \002(\014"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 137);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "image_mat.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_image_5fmat_2eproto
namespace robotics {
namespace matlab {

// ===================================================================

void ImageMat::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ImageMat::kMWidthFieldNumber;
const int ImageMat::kMHeightFieldNumber;
const int ImageMat::kMPixelFormatFieldNumber;
const int ImageMat::kMStepFieldNumber;
const int ImageMat::kMDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ImageMat::ImageMat()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_image_5fmat_2eproto::scc_info_ImageMat.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:robotics.matlab.ImageMat)
}
ImageMat::ImageMat(const ImageMat& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  m_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_m_data()) {
    m_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.m_data_);
  }
  ::memcpy(&m_width_, &from.m_width_,
    static_cast<size_t>(reinterpret_cast<char*>(&m_step_) -
    reinterpret_cast<char*>(&m_width_)) + sizeof(m_step_));
  // @@protoc_insertion_point(copy_constructor:robotics.matlab.ImageMat)
}

void ImageMat::SharedCtor() {
  m_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&m_width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&m_step_) -
      reinterpret_cast<char*>(&m_width_)) + sizeof(m_step_));
}

ImageMat::~ImageMat() {
  // @@protoc_insertion_point(destructor:robotics.matlab.ImageMat)
  SharedDtor();
}

void ImageMat::SharedDtor() {
  m_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ImageMat::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ImageMat::descriptor() {
  ::protobuf_image_5fmat_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_image_5fmat_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ImageMat& ImageMat::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_image_5fmat_2eproto::scc_info_ImageMat.base);
  return *internal_default_instance();
}


void ImageMat::Clear() {
// @@protoc_insertion_point(message_clear_start:robotics.matlab.ImageMat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    m_data_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 30u) {
    ::memset(&m_width_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&m_step_) -
        reinterpret_cast<char*>(&m_width_)) + sizeof(m_step_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ImageMat::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:robotics.matlab.ImageMat)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 m_width = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_m_width();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &m_width_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 m_height = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_m_height();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &m_height_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 m_pixel_format = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_m_pixel_format();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &m_pixel_format_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 m_step = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_m_step();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &m_step_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bytes m_data = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_m_data()));
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
  // @@protoc_insertion_point(parse_success:robotics.matlab.ImageMat)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:robotics.matlab.ImageMat)
  return false;
#undef DO_
}

void ImageMat::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:robotics.matlab.ImageMat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 m_width = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->m_width(), output);
  }

  // required uint32 m_height = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->m_height(), output);
  }

  // required uint32 m_pixel_format = 3;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->m_pixel_format(), output);
  }

  // required uint32 m_step = 4;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->m_step(), output);
  }

  // required bytes m_data = 5;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      5, this->m_data(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:robotics.matlab.ImageMat)
}

::google::protobuf::uint8* ImageMat::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:robotics.matlab.ImageMat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 m_width = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->m_width(), target);
  }

  // required uint32 m_height = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->m_height(), target);
  }

  // required uint32 m_pixel_format = 3;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->m_pixel_format(), target);
  }

  // required uint32 m_step = 4;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->m_step(), target);
  }

  // required bytes m_data = 5;
  if (cached_has_bits & 0x00000001u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->m_data(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:robotics.matlab.ImageMat)
  return target;
}

size_t ImageMat::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:robotics.matlab.ImageMat)
  size_t total_size = 0;

  if (has_m_data()) {
    // required bytes m_data = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->m_data());
  }

  if (has_m_width()) {
    // required uint32 m_width = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->m_width());
  }

  if (has_m_height()) {
    // required uint32 m_height = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->m_height());
  }

  if (has_m_pixel_format()) {
    // required uint32 m_pixel_format = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->m_pixel_format());
  }

  if (has_m_step()) {
    // required uint32 m_step = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->m_step());
  }

  return total_size;
}
size_t ImageMat::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:robotics.matlab.ImageMat)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x0000001f) ^ 0x0000001f) == 0) {  // All required fields are present.
    // required bytes m_data = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->m_data());

    // required uint32 m_width = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->m_width());

    // required uint32 m_height = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->m_height());

    // required uint32 m_pixel_format = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->m_pixel_format());

    // required uint32 m_step = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->m_step());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ImageMat::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:robotics.matlab.ImageMat)
  GOOGLE_DCHECK_NE(&from, this);
  const ImageMat* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ImageMat>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:robotics.matlab.ImageMat)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:robotics.matlab.ImageMat)
    MergeFrom(*source);
  }
}

void ImageMat::MergeFrom(const ImageMat& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:robotics.matlab.ImageMat)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_m_data();
      m_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.m_data_);
    }
    if (cached_has_bits & 0x00000002u) {
      m_width_ = from.m_width_;
    }
    if (cached_has_bits & 0x00000004u) {
      m_height_ = from.m_height_;
    }
    if (cached_has_bits & 0x00000008u) {
      m_pixel_format_ = from.m_pixel_format_;
    }
    if (cached_has_bits & 0x00000010u) {
      m_step_ = from.m_step_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ImageMat::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:robotics.matlab.ImageMat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImageMat::CopyFrom(const ImageMat& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:robotics.matlab.ImageMat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImageMat::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;
  return true;
}

void ImageMat::Swap(ImageMat* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ImageMat::InternalSwap(ImageMat* other) {
  using std::swap;
  m_data_.Swap(&other->m_data_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(m_width_, other->m_width_);
  swap(m_height_, other->m_height_);
  swap(m_pixel_format_, other->m_pixel_format_);
  swap(m_step_, other->m_step_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ImageMat::GetMetadata() const {
  protobuf_image_5fmat_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_image_5fmat_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace matlab
}  // namespace robotics
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::robotics::matlab::ImageMat* Arena::CreateMaybeMessage< ::robotics::matlab::ImageMat >(Arena* arena) {
  return Arena::CreateInternal< ::robotics::matlab::ImageMat >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
