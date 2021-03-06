/* Generated by D:/Work/ZZYT/DDS/OpenDDS/bin/opendds_idl.exe version 3.17.0 (ACE version 7.0.0) running on input file D:/Work/ZZYT/YT-SOA/package/soa-com/src/3rdparty/openDDS/idl/Messenger.idl */
#include "MessengerTypeSupportImpl.h"

#include <cstring>
#include <stdexcept>
#include "dds/DCPS/BuiltInTopicUtils.h"
#include "dds/DCPS/ContentFilteredTopicImpl.h"
#include "dds/DCPS/DataReaderImpl_T.h"
#include "dds/DCPS/DataWriterImpl_T.h"
#include "dds/DCPS/FilterEvaluator.h"
#include "dds/DCPS/MultiTopicDataReader_T.h"
#include "dds/DCPS/PoolAllocator.h"
#include "dds/DCPS/PublicationInstance.h"
#include "dds/DCPS/PublisherImpl.h"
#include "dds/DCPS/Qos_Helper.h"
#include "dds/DCPS/RakeData.h"
#include "dds/DCPS/RakeResults_T.h"
#include "dds/DCPS/ReceivedDataElementList.h"
#include "dds/DCPS/Registered_Data_Types.h"
#include "dds/DCPS/Service_Participant.h"
#include "dds/DCPS/SubscriberImpl.h"
#include "dds/DCPS/Util.h"
#include "dds/DCPS/XTypes/TypeObject.h"
#include "dds/DCPS/debug.h"
#include "dds/DdsDcpsDomainC.h"
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

static const XTypes::TypeMap& get_minimal_type_map();
} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL



/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: OpenDDS */


/* End MODULE: OpenDDS */


/* Begin MODULE: Messenger */



/* Begin STRUCT: Message */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<> const XTypes::TypeIdentifier & getMinimalTypeIdentifier<Messenger_Message_xtag>()
{
  static XTypes::TypeIdentifier ti;
  ACE_GUARD_RETURN(ACE_Thread_Mutex, guard, TheServiceParticipant->get_static_xtypes_lock(), ti);
  if (ti.kind() == XTypes::TK_NONE) {
    ti = XTypes::TypeIdentifier(XTypes::EK_MINIMAL,XTypes::EquivalenceHashWrapper(214, 236, 152, 103, 247, 249, 228, 219, 43, 206, 149, 13, 222, 91));
  }
  return ti;
}

template<> const XTypes::TypeMap& getMinimalTypeMap<Messenger_Message_xtag>()
{
  return get_minimal_type_map();
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

bool vread(OpenDDS::DCPS::ValueReader& value_reader,  ::Messenger::Message& value)
{
  ACE_UNUSED_ARG(value_reader);
  ACE_UNUSED_ARG(value);
  static const ListMemberHelper::Pair pairs[] = {{"from",0},{"subject",1},{"subject_id",2},{"text",3},{"count",4},{0,0}};
  ListMemberHelper helper(pairs);
  if (!value_reader.begin_struct()) return false;
  XTypes::MemberId member_id;
  while (value_reader.begin_struct_member(member_id, helper)) {
    switch (member_id) {
    case 0: {
    {
  String x;
  if (!value_reader.read_string(x)) return false;
  value.from = x.c_str();
  }
      break;
    }
    case 1: {
    {
  String x;
  if (!value_reader.read_string(x)) return false;
  value.subject = x.c_str();
  }
      break;
    }
    case 2: {
    if (!value_reader.read_int32(value.subject_id)) return false;
      break;
    }
    case 3: {
    {
  String x;
  if (!value_reader.read_string(x)) return false;
  value.text = x.c_str();
  }
      break;
    }
    case 4: {
    if (!value_reader.read_int32(value.count)) return false;
      break;
    }
    }
    if (!value_reader.end_struct_member()) return false;
  }
  if (!value_reader.end_struct()) return false;
  return true;
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void vwrite(OpenDDS::DCPS::ValueWriter& value_writer, const  ::Messenger::Message& value)
{
  ACE_UNUSED_ARG(value_writer);
  ACE_UNUSED_ARG(value);
  value_writer.begin_struct();
  value_writer.begin_struct_member("from");
  value_writer.write_string(value.from);
  value_writer.end_struct_member();
  value_writer.begin_struct_member("subject");
  value_writer.write_string(value.subject);
  value_writer.end_struct_member();
  value_writer.begin_struct_member("subject_id");
  value_writer.write_int32(value.subject_id);
  value_writer.end_struct_member();
  value_writer.begin_struct_member("text");
  value_writer.write_string(value.text);
  value_writer.end_struct_member();
  value_writer.begin_struct_member("count");
  value_writer.write_int32(value.count);
  value_writer.end_struct_member();
  value_writer.end_struct();
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<> void set_default( ::Messenger::Message& stru)
{
  ACE_UNUSED_ARG(stru);
  stru.from = "";
  stru.subject = "";
  stru.subject_id = 0;
  stru.text = "";
  stru.count = 0;
}

void serialized_size(const Encoding& encoding, size_t& size, const  ::Messenger::Message& stru)
{
  ACE_UNUSED_ARG(encoding);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(stru);
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    serialized_size_delimiter(encoding, size);
  }
  primitive_serialized_size_ulong(encoding, size);
  size += ACE_OS::strlen(stru.from.in()) + 1;
  primitive_serialized_size_ulong(encoding, size);
  size += ACE_OS::strlen(stru.subject.in()) + 1;
  primitive_serialized_size(encoding, size, stru.subject_id);
  primitive_serialized_size_ulong(encoding, size);
  size += ACE_OS::strlen(stru.text.in()) + 1;
  primitive_serialized_size(encoding, size, stru.count);
}

bool operator<<(Serializer& strm, const  ::Messenger::Message& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  size_t total_size = 0;
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    serialized_size(encoding, total_size, stru);
    if (!strm.write_delimiter(total_size)) {
      return false;
    }
  }
  return (strm << stru.from.in())
    && (strm << stru.subject.in())
    && (strm << stru.subject_id)
    && (strm << stru.text.in())
    && (strm << stru.count);
}

bool operator>>(Serializer& strm,  ::Messenger::Message& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  size_t total_size = 0;
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    if (!strm.read_delimiter(total_size)) {
      return false;
    }
  }
  const size_t end_of_struct = strm.pos() + total_size;

  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2 &&
      strm.pos() >= end_of_struct) {
    return true;
  }
  if (!(strm >> stru.from.out())) {
    return false;
  }
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2 &&
      strm.pos() >= end_of_struct) {
    return true;
  }
  if (!(strm >> stru.subject.out())) {
    return false;
  }
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2 &&
      strm.pos() >= end_of_struct) {
    return true;
  }
  if (!(strm >> stru.subject_id)) {
    return false;
  }
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2 &&
      strm.pos() >= end_of_struct) {
    return true;
  }
  if (!(strm >> stru.text.out())) {
    return false;
  }
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2 &&
      strm.pos() >= end_of_struct) {
    return true;
  }
  if (!(strm >> stru.count)) {
    return false;
  }
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2 &&
      strm.pos() < end_of_struct) {
    strm.skip(end_of_struct - strm.pos());
  }
  return true;
}

void serialized_size(const Encoding& encoding, size_t& size, const NestedKeyOnly<const  ::Messenger::Message>& stru)
{
  ACE_UNUSED_ARG(encoding);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(stru);
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    serialized_size_delimiter(encoding, size);
  }
  primitive_serialized_size(encoding, size, stru.value.subject_id);
}

bool operator<<(Serializer& strm, const NestedKeyOnly<const  ::Messenger::Message>& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  size_t total_size = 0;
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    serialized_size(encoding, total_size, stru);
    if (!strm.write_delimiter(total_size)) {
      return false;
    }
  }
  return (strm << stru.value.subject_id);
}

bool operator>>(Serializer& strm, const NestedKeyOnly< ::Messenger::Message>& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  size_t total_size = 0;
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    if (!strm.read_delimiter(total_size)) {
      return false;
    }
  }
  const size_t end_of_struct = strm.pos() + total_size;

  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2 &&
      strm.pos() >= end_of_struct) {
    return true;
  }
  if (!(strm >> stru.value.subject_id)) {
    return false;
  }
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2 &&
      strm.pos() < end_of_struct) {
    strm.skip(end_of_struct - strm.pos());
  }
  return true;
}

void serialized_size(const Encoding& encoding, size_t& size, const KeyOnly<const  ::Messenger::Message>& stru)
{
  ACE_UNUSED_ARG(encoding);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(stru);
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    serialized_size_delimiter(encoding, size);
  }
  primitive_serialized_size(encoding, size, stru.value.subject_id);
}

bool operator<<(Serializer& strm, const KeyOnly<const  ::Messenger::Message>& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  size_t total_size = 0;
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    serialized_size(encoding, total_size, stru);
    if (!strm.write_delimiter(total_size)) {
      return false;
    }
  }
  return (strm << stru.value.subject_id);
}

bool operator>>(Serializer& strm, const KeyOnly< ::Messenger::Message>& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  size_t total_size = 0;
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    if (!strm.read_delimiter(total_size)) {
      return false;
    }
  }
  const size_t end_of_struct = strm.pos() + total_size;

  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2 &&
      strm.pos() >= end_of_struct) {
    return true;
  }
  if (!(strm >> stru.value.subject_id)) {
    return false;
  }
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2 &&
      strm.pos() < end_of_struct) {
    strm.skip(end_of_struct - strm.pos());
  }
  return true;
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Messenger {
::DDS::DataWriter_ptr MessageTypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<Message> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}

::DDS::DataReader_ptr MessageTypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Message> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}

#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr MessageTypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<Message> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<Message, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& MessageTypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<Message>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */

bool MessageTypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key();
}

const char* MessageTypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}

void MessageTypeSupportImpl::representations_allowed_by_type(
  ::DDS::DataRepresentationIdSeq& seq)
{
  MarshalTraitsType::representations_allowed_by_type(seq);
}

const OpenDDS::XTypes::TypeIdentifier& MessageTypeSupportImpl::getMinimalTypeIdentifier() const
{
  return OpenDDS::DCPS::getMinimalTypeIdentifier<OpenDDS::DCPS::Messenger_Message_xtag>();
}

const OpenDDS::XTypes::TypeMap& MessageTypeSupportImpl::getMinimalTypeMap() const
{
  return OpenDDS::DCPS::getMinimalTypeMap<OpenDDS::DCPS::Messenger_Message_xtag>();
}

OpenDDS::DCPS::Extensibility MessageTypeSupportImpl::getExtensibility() const
{
  return MarshalTraitsType::extensibility();
}

MessageTypeSupport::_ptr_type MessageTypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl< ::Messenger::Message> : MetaStruct {
  typedef  ::Messenger::Message T;

#ifndef OPENDDS_NO_MULTI_TOPIC
  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 1; }

#endif /* OPENDDS_NO_MULTI_TOPIC */

  bool isDcpsKey(const char* field) const
  {
    if (!ACE_OS::strcmp(field, "subject_id")) {
      return true;
    }
    return false;
  }

  ACE_CDR::ULong map_name_to_id(const char* field) const
  {
    static const std::pair<std::string, ACE_CDR::ULong> name_to_id_pairs[] = {
      std::make_pair("from", 0),
      std::make_pair("subject", 1),
      std::make_pair("subject_id", 2),
      std::make_pair("text", 3),
      std::make_pair("count", 4),
    };
    static const std::map<std::string, ACE_CDR::ULong> name_to_id_map(name_to_id_pairs, name_to_id_pairs + 5);
    std::map<std::string, ACE_CDR::ULong>::const_iterator it = name_to_id_map.find(field);
    if (it == name_to_id_map.end()) {
      throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct ::Messenger::Message)");
    } else {
      return it->second;
    }
  }

  Value getValue(const void* stru, const char* field) const
  {
    const  ::Messenger::Message& typed = *static_cast<const  ::Messenger::Message*>(stru);
    ACE_UNUSED_ARG(typed);
    if (std::strcmp(field, "from") == 0) {
      return typed.from.in();
    }
    if (std::strcmp(field, "subject") == 0) {
      return typed.subject.in();
    }
    if (std::strcmp(field, "subject_id") == 0) {
      return typed.subject_id;
    }
    if (std::strcmp(field, "text") == 0) {
      return typed.text.in();
    }
    if (std::strcmp(field, "count") == 0) {
      return typed.count;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct ::Messenger::Message)");
  }

  Value getValue(Serializer& strm, const char* field) const
  {
    const Encoding& encoding = strm.encoding();
    ACE_UNUSED_ARG(encoding);
  size_t total_size = 0;
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    if (!strm.read_delimiter(total_size)) {
      throw std::runtime_error("Unable to reader delimiter in getValue");
    }
  }
    std::string base_field = field;
    size_t index = base_field.find('.');
    std::string subfield;
    if (index != std::string::npos) {
      subfield = base_field.substr(index + 1);
      base_field = base_field.substr(0, index);
    }
    if (base_field == "from") {
      TAO::String_Manager val;
      if (!(strm >> val.out())) {
        throw std::runtime_error("Field 'from' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(strm >> len)) {
        throw std::runtime_error("String 'from' length could not be deserialized");
      }
      if (!strm.skip(len)) {
        throw std::runtime_error("String 'from' contents could not be skipped");
      }
    }
    if (base_field == "subject") {
      TAO::String_Manager val;
      if (!(strm >> val.out())) {
        throw std::runtime_error("Field 'subject' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(strm >> len)) {
        throw std::runtime_error("String 'subject' length could not be deserialized");
      }
      if (!strm.skip(len)) {
        throw std::runtime_error("String 'subject' contents could not be skipped");
      }
    }
    if (base_field == "subject_id") {
      ACE_CDR::Long val;
      if (!(strm >> val)) {
        throw std::runtime_error("Field 'subject_id' could not be deserialized");
      }
      return val;
    } else {
      if (!strm.skip(1,  4 )) {
        throw std::runtime_error("Field 'subject_id' could not be skipped");
      }
    }
    if (base_field == "text") {
      TAO::String_Manager val;
      if (!(strm >> val.out())) {
        throw std::runtime_error("Field 'text' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(strm >> len)) {
        throw std::runtime_error("String 'text' length could not be deserialized");
      }
      if (!strm.skip(len)) {
        throw std::runtime_error("String 'text' contents could not be skipped");
      }
    }
    if (base_field == "count") {
      ACE_CDR::Long val;
      if (!(strm >> val)) {
        throw std::runtime_error("Field 'count' could not be deserialized");
      }
      return val;
    } else {
      if (!strm.skip(1,  4 )) {
        throw std::runtime_error("Field 'count' could not be skipped");
      }
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Did not find field in getValue");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strcmp(field, "from") == 0) {
      return make_field_cmp(&T::from, next);
    }
    if (std::strcmp(field, "subject") == 0) {
      return make_field_cmp(&T::subject, next);
    }
    if (std::strcmp(field, "subject_id") == 0) {
      return make_field_cmp(&T::subject_id, next);
    }
    if (std::strcmp(field, "text") == 0) {
      return make_field_cmp(&T::text, next);
    }
    if (std::strcmp(field, "count") == 0) {
      return make_field_cmp(&T::count, next);
    }
throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct ::Messenger::Message)");
  }

#ifndef OPENDDS_NO_MULTI_TOPIC
  const char** getFieldNames() const
  {
    static const char* names[] = {"from", "subject", "subject_id", "text", "count", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "from") == 0) {
      return &static_cast<const T*>(stru)->from;
    }
    if (std::strcmp(field, "subject") == 0) {
      return &static_cast<const T*>(stru)->subject;
    }
    if (std::strcmp(field, "subject_id") == 0) {
      return &static_cast<const T*>(stru)->subject_id;
    }
    if (std::strcmp(field, "text") == 0) {
      return &static_cast<const T*>(stru)->text;
    }
    if (std::strcmp(field, "count") == 0) {
      return &static_cast<const T*>(stru)->count;
    }
throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct ::Messenger::Message)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "from") == 0) {
      static_cast<T*>(lhs)->from = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "subject") == 0) {
      static_cast<T*>(lhs)->subject = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "subject_id") == 0) {
      static_cast<T*>(lhs)->subject_id = *static_cast<const  ::CORBA::Long*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "text") == 0) {
      static_cast<T*>(lhs)->text = *static_cast<const TAO::String_Manager*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    if (std::strcmp(field, "count") == 0) {
      static_cast<T*>(lhs)->count = *static_cast<const  ::CORBA::Long*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct ::Messenger::Message)");
  }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "from") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->from.in(), static_cast<const T*>(rhs)->from.in());
    }
    if (std::strcmp(field, "subject") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->subject.in(), static_cast<const T*>(rhs)->subject.in());
    }
    if (std::strcmp(field, "subject_id") == 0) {
      return static_cast<const T*>(lhs)->subject_id == static_cast<const T*>(rhs)->subject_id;
    }
    if (std::strcmp(field, "text") == 0) {
      return 0 == ACE_OS::strcmp(static_cast<const T*>(lhs)->text.in(), static_cast<const T*>(rhs)->text.in());
    }
    if (std::strcmp(field, "count") == 0) {
      return static_cast<const T*>(lhs)->count == static_cast<const T*>(rhs)->count;
    }
throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct ::Messenger::Message)");
  }
};

template<>
const MetaStruct& getMetaStruct< ::Messenger::Message>()
{
  static MetaStructImpl< ::Messenger::Message> msi;
  return msi;
}

bool gen_skip_over(Serializer& ser,  ::Messenger::Message*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl< ::Messenger::Message>().getValue(ser, "");
  return true;
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Message */

/* End MODULE: Messenger */
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

namespace {
XTypes::TypeObject to0()
{
  return XTypes::TypeObject(XTypes::MinimalTypeObject(XTypes::MinimalStructType(XTypes::IS_APPENDABLE,XTypes::MinimalStructHeader(XTypes::TypeIdentifier(XTypes::TK_NONE), XTypes::MinimalTypeDetail()),XTypes::MinimalStructMemberSeq().append(XTypes::MinimalStructMember(XTypes::CommonStructMember(0,XTypes::TRY_CONSTRUCT1,XTypes::TypeIdentifier(XTypes::TI_STRING8_SMALL,XTypes::StringSTypeDefn(0))),XTypes::MinimalMemberDetail(217, 138, 7, 248))).append(XTypes::MinimalStructMember(XTypes::CommonStructMember(1,XTypes::TRY_CONSTRUCT1,XTypes::TypeIdentifier(XTypes::TI_STRING8_SMALL,XTypes::StringSTypeDefn(0))),XTypes::MinimalMemberDetail(181, 227, 55, 78))).append(XTypes::MinimalStructMember(XTypes::CommonStructMember(2,XTypes::TRY_CONSTRUCT1 | XTypes::IS_KEY,XTypes::TypeIdentifier(XTypes::TK_INT32)),XTypes::MinimalMemberDetail(255, 171, 161, 209))).append(XTypes::MinimalStructMember(XTypes::CommonStructMember(3,XTypes::TRY_CONSTRUCT1,XTypes::TypeIdentifier(XTypes::TI_STRING8_SMALL,XTypes::StringSTypeDefn(0))),XTypes::MinimalMemberDetail(28, 178, 81, 236))).append(XTypes::MinimalStructMember(XTypes::CommonStructMember(4,XTypes::TRY_CONSTRUCT1,XTypes::TypeIdentifier(XTypes::TK_INT32)),XTypes::MinimalMemberDetail(226, 148, 42, 4))))));
}
XTypes::TypeMap get_minimal_type_map_private()
{
  XTypes::TypeMap tm;
  tm[XTypes::TypeIdentifier(XTypes::EK_MINIMAL,XTypes::EquivalenceHashWrapper(214, 236, 152, 103, 247, 249, 228, 219, 43, 206, 149, 13, 222, 91))] = to0();
  return tm;
}
}
const XTypes::TypeMap& get_minimal_type_map()
{
  static XTypes::TypeMap tm;
  ACE_GUARD_RETURN(ACE_Thread_Mutex, guard, TheServiceParticipant->get_static_xtypes_lock(), tm);
  if (tm.empty()) {
    tm = get_minimal_type_map_private();
  }
  return tm;
}
} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

