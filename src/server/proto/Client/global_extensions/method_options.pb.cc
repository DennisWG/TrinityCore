// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: global_extensions/method_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "global_extensions/method_options.pb.h"

#include <algorithm>
#include <utility>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#include "Log.h"
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {

namespace {

const ::google::protobuf::Descriptor* BGSMethodOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BGSMethodOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_global_5fextensions_2fmethod_5foptions_2eproto() {
  protobuf_AddDesc_global_5fextensions_2fmethod_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "global_extensions/method_options.proto");
  GOOGLE_CHECK(file != NULL);
  BGSMethodOptions_descriptor_ = file->message_type(0);
  static const int BGSMethodOptions_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BGSMethodOptions, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BGSMethodOptions, client_identity_routing_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BGSMethodOptions, enable_fanout_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BGSMethodOptions, legacy_fanout_replacement_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BGSMethodOptions, forward_key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BGSMethodOptions, idempotent_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BGSMethodOptions, handle_destination_unreachable_),
  };
  BGSMethodOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BGSMethodOptions_descriptor_,
      BGSMethodOptions::default_instance_,
      BGSMethodOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BGSMethodOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BGSMethodOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BGSMethodOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_global_5fextensions_2fmethod_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BGSMethodOptions_descriptor_, &BGSMethodOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_global_5fextensions_2fmethod_5foptions_2eproto() {
  delete BGSMethodOptions::default_instance_;
  delete BGSMethodOptions_reflection_;
}

void protobuf_AddDesc_global_5fextensions_2fmethod_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  ::bgs::protocol::protobuf_AddDesc_global_5fextensions_2frouting_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&global_extensions/method_options.proto"
    "\022\014bgs.protocol\032 google/protobuf/descript"
    "or.proto\032\037global_extensions/routing.prot"
    "o\"\363\001\n\020BGSMethodOptions\022\n\n\002id\030\001 \001(\r\022H\n\027cl"
    "ient_identity_routing\030\002 \001(\0162\'.bgs.protoc"
    "ol.ClientIdentityRoutingType\022\025\n\renable_f"
    "anout\030\003 \001(\010\022!\n\031legacy_fanout_replacement"
    "\030\004 \001(\t\022\023\n\013forward_key\030\005 \001(\t\022\022\n\nidempoten"
    "t\030\006 \001(\010\022&\n\036handle_destination_unreachabl"
    "e\030\007 \001(\010:X\n\016method_options\022\036.google.proto"
    "buf.MethodOptions\030\220\277\005 \001(\0132\036.bgs.protocol"
    ".BGSMethodOptionsB%\n\rbnet.protocolB\022Meth"
    "odOptionsProtoH\001", 496);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "global_extensions/method_options.proto", &protobuf_RegisterTypes);
  BGSMethodOptions::default_instance_ = new BGSMethodOptions();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::google::protobuf::MethodOptions::default_instance(),
    90000, 11, false, false,
    &::bgs::protocol::BGSMethodOptions::default_instance());
  BGSMethodOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_global_5fextensions_2fmethod_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_global_5fextensions_2fmethod_5foptions_2eproto {
  StaticDescriptorInitializer_global_5fextensions_2fmethod_5foptions_2eproto() {
    protobuf_AddDesc_global_5fextensions_2fmethod_5foptions_2eproto();
  }
} static_descriptor_initializer_global_5fextensions_2fmethod_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BGSMethodOptions::kIdFieldNumber;
const int BGSMethodOptions::kClientIdentityRoutingFieldNumber;
const int BGSMethodOptions::kEnableFanoutFieldNumber;
const int BGSMethodOptions::kLegacyFanoutReplacementFieldNumber;
const int BGSMethodOptions::kForwardKeyFieldNumber;
const int BGSMethodOptions::kIdempotentFieldNumber;
const int BGSMethodOptions::kHandleDestinationUnreachableFieldNumber;
#endif  // !_MSC_VER

BGSMethodOptions::BGSMethodOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.BGSMethodOptions)
}

void BGSMethodOptions::InitAsDefaultInstance() {
}

BGSMethodOptions::BGSMethodOptions(const BGSMethodOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.BGSMethodOptions)
}

void BGSMethodOptions::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0u;
  client_identity_routing_ = 0;
  enable_fanout_ = false;
  legacy_fanout_replacement_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  forward_key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  idempotent_ = false;
  handle_destination_unreachable_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BGSMethodOptions::~BGSMethodOptions() {
  // @@protoc_insertion_point(destructor:bgs.protocol.BGSMethodOptions)
  SharedDtor();
}

void BGSMethodOptions::SharedDtor() {
  if (legacy_fanout_replacement_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete legacy_fanout_replacement_;
  }
  if (forward_key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete forward_key_;
  }
  if (this != default_instance_) {
  }
}

void BGSMethodOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BGSMethodOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BGSMethodOptions_descriptor_;
}

const BGSMethodOptions& BGSMethodOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_global_5fextensions_2fmethod_5foptions_2eproto();
  return *default_instance_;
}

BGSMethodOptions* BGSMethodOptions::default_instance_ = NULL;

BGSMethodOptions* BGSMethodOptions::New() const {
  return new BGSMethodOptions;
}

void BGSMethodOptions::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<BGSMethodOptions*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 127) {
    ZR_(id_, client_identity_routing_);
    ZR_(enable_fanout_, handle_destination_unreachable_);
    if (has_legacy_fanout_replacement()) {
      if (legacy_fanout_replacement_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        legacy_fanout_replacement_->clear();
      }
    }
    if (has_forward_key()) {
      if (forward_key_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        forward_key_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BGSMethodOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:bgs.protocol.BGSMethodOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_client_identity_routing;
        break;
      }

      // optional .bgs.protocol.ClientIdentityRoutingType client_identity_routing = 2;
      case 2: {
        if (tag == 16) {
         parse_client_identity_routing:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::bgs::protocol::ClientIdentityRoutingType_IsValid(value)) {
            set_client_identity_routing(static_cast< ::bgs::protocol::ClientIdentityRoutingType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_enable_fanout;
        break;
      }

      // optional bool enable_fanout = 3;
      case 3: {
        if (tag == 24) {
         parse_enable_fanout:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &enable_fanout_)));
          set_has_enable_fanout();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_legacy_fanout_replacement;
        break;
      }

      // optional string legacy_fanout_replacement = 4;
      case 4: {
        if (tag == 34) {
         parse_legacy_fanout_replacement:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_legacy_fanout_replacement()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->legacy_fanout_replacement().data(), this->legacy_fanout_replacement().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "legacy_fanout_replacement");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_forward_key;
        break;
      }

      // optional string forward_key = 5;
      case 5: {
        if (tag == 42) {
         parse_forward_key:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_forward_key()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->forward_key().data(), this->forward_key().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "forward_key");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_idempotent;
        break;
      }

      // optional bool idempotent = 6;
      case 6: {
        if (tag == 48) {
         parse_idempotent:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &idempotent_)));
          set_has_idempotent();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_handle_destination_unreachable;
        break;
      }

      // optional bool handle_destination_unreachable = 7;
      case 7: {
        if (tag == 56) {
         parse_handle_destination_unreachable:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &handle_destination_unreachable_)));
          set_has_handle_destination_unreachable();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:bgs.protocol.BGSMethodOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:bgs.protocol.BGSMethodOptions)
  return false;
#undef DO_
}

void BGSMethodOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:bgs.protocol.BGSMethodOptions)
  // optional uint32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // optional .bgs.protocol.ClientIdentityRoutingType client_identity_routing = 2;
  if (has_client_identity_routing()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->client_identity_routing(), output);
  }

  // optional bool enable_fanout = 3;
  if (has_enable_fanout()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->enable_fanout(), output);
  }

  // optional string legacy_fanout_replacement = 4;
  if (has_legacy_fanout_replacement()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->legacy_fanout_replacement().data(), this->legacy_fanout_replacement().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "legacy_fanout_replacement");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->legacy_fanout_replacement(), output);
  }

  // optional string forward_key = 5;
  if (has_forward_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->forward_key().data(), this->forward_key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "forward_key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->forward_key(), output);
  }

  // optional bool idempotent = 6;
  if (has_idempotent()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->idempotent(), output);
  }

  // optional bool handle_destination_unreachable = 7;
  if (has_handle_destination_unreachable()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->handle_destination_unreachable(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:bgs.protocol.BGSMethodOptions)
}

::google::protobuf::uint8* BGSMethodOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:bgs.protocol.BGSMethodOptions)
  // optional uint32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // optional .bgs.protocol.ClientIdentityRoutingType client_identity_routing = 2;
  if (has_client_identity_routing()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->client_identity_routing(), target);
  }

  // optional bool enable_fanout = 3;
  if (has_enable_fanout()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->enable_fanout(), target);
  }

  // optional string legacy_fanout_replacement = 4;
  if (has_legacy_fanout_replacement()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->legacy_fanout_replacement().data(), this->legacy_fanout_replacement().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "legacy_fanout_replacement");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->legacy_fanout_replacement(), target);
  }

  // optional string forward_key = 5;
  if (has_forward_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->forward_key().data(), this->forward_key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "forward_key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->forward_key(), target);
  }

  // optional bool idempotent = 6;
  if (has_idempotent()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->idempotent(), target);
  }

  // optional bool handle_destination_unreachable = 7;
  if (has_handle_destination_unreachable()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->handle_destination_unreachable(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bgs.protocol.BGSMethodOptions)
  return target;
}

int BGSMethodOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // optional .bgs.protocol.ClientIdentityRoutingType client_identity_routing = 2;
    if (has_client_identity_routing()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->client_identity_routing());
    }

    // optional bool enable_fanout = 3;
    if (has_enable_fanout()) {
      total_size += 1 + 1;
    }

    // optional string legacy_fanout_replacement = 4;
    if (has_legacy_fanout_replacement()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->legacy_fanout_replacement());
    }

    // optional string forward_key = 5;
    if (has_forward_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->forward_key());
    }

    // optional bool idempotent = 6;
    if (has_idempotent()) {
      total_size += 1 + 1;
    }

    // optional bool handle_destination_unreachable = 7;
    if (has_handle_destination_unreachable()) {
      total_size += 1 + 1;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BGSMethodOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BGSMethodOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BGSMethodOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BGSMethodOptions::MergeFrom(const BGSMethodOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_client_identity_routing()) {
      set_client_identity_routing(from.client_identity_routing());
    }
    if (from.has_enable_fanout()) {
      set_enable_fanout(from.enable_fanout());
    }
    if (from.has_legacy_fanout_replacement()) {
      set_legacy_fanout_replacement(from.legacy_fanout_replacement());
    }
    if (from.has_forward_key()) {
      set_forward_key(from.forward_key());
    }
    if (from.has_idempotent()) {
      set_idempotent(from.idempotent());
    }
    if (from.has_handle_destination_unreachable()) {
      set_handle_destination_unreachable(from.handle_destination_unreachable());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BGSMethodOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BGSMethodOptions::CopyFrom(const BGSMethodOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BGSMethodOptions::IsInitialized() const {

  return true;
}

void BGSMethodOptions::Swap(BGSMethodOptions* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(client_identity_routing_, other->client_identity_routing_);
    std::swap(enable_fanout_, other->enable_fanout_);
    std::swap(legacy_fanout_replacement_, other->legacy_fanout_replacement_);
    std::swap(forward_key_, other->forward_key_);
    std::swap(idempotent_, other->idempotent_);
    std::swap(handle_destination_unreachable_, other->handle_destination_unreachable_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BGSMethodOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BGSMethodOptions_descriptor_;
  metadata.reflection = BGSMethodOptions_reflection_;
  return metadata;
}

::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::google::protobuf::internal::MessageTypeTraits< ::bgs::protocol::BGSMethodOptions >, 11, false >
  method_options(kMethodOptionsFieldNumber, ::bgs::protocol::BGSMethodOptions::default_instance());

// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol
}  // namespace bgs

// @@protoc_insertion_point(global_scope)