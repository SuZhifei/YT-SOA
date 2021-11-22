// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v3.0.0
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       https://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     https://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// D:\Work\ZZYT\DDS\OpenDDS\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:149

#ifndef _TAO_IDL_MESSENGERC_H_
#define _TAO_IDL_MESSENGERC_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "D:/Work/ZZYT/YT-SOA/package/soa-com/build/win32/src/3rdparty/openDDS/openDDS_export.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/String_Manager_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 3 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

// TAO_IDL - Generated from
// D:\Work\ZZYT\DDS\OpenDDS\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_module\module_ch.cpp:35

namespace Messenger
{

  // TAO_IDL - Generated from
  // D:\Work\ZZYT\DDS\OpenDDS\ACE_wrappers\TAO\TAO_IDL\be\be_type.cpp:258

  struct Message;

  typedef
    ::TAO_Var_Var_T<
        Message
      >
    Message_var;

  typedef
    ::TAO_Out_T<
        Message
      >
    Message_out;

  // TAO_IDL - Generated from
  // D:\Work\ZZYT\DDS\OpenDDS\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure\structure_ch.cpp:48

  struct openDDS_Export Message
  {

    // TAO_IDL - Generated from
    // D:\Work\ZZYT\DDS\OpenDDS\ACE_wrappers\TAO\TAO_IDL\be\be_type.cpp:304

    
    typedef Message_var _var_type;
    typedef Message_out _out_type;
    
    ::TAO::String_Manager from;
    ::TAO::String_Manager subject;
    ::CORBA::Long subject_id;
    ::TAO::String_Manager text;
    ::CORBA::Long count;
  };

// TAO_IDL - Generated from
// D:\Work\ZZYT\DDS\OpenDDS\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_module\module_ch.cpp:64

} // module Messenger

// TAO_IDL - Generated from
// D:\Work\ZZYT\DDS\OpenDDS\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // D:\Work\ZZYT\DDS\OpenDDS\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Messenger::Message>
    : public
        Var_Size_Arg_Traits_T<
            ::Messenger::Message,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// D:\Work\ZZYT\DDS\OpenDDS\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// D:\Work\ZZYT\DDS\OpenDDS\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure\cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

openDDS_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Messenger::Message &);
openDDS_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Messenger::Message &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// D:\Work\ZZYT\DDS\OpenDDS\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:1686
#if defined (__ACE_INLINE__)
#include "MessengerC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

