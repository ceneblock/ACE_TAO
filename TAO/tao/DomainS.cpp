/* -*- C++ -*- */
// $Id$

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#include "DomainC.h"
#include "tao/Operation_Table.h"
#include "tao/Server_Request.h"
#include "tao/POA_CORBA.h"
#include "tao/ORB.h"

class TAO_CORBA_DomainManager_Perfect_Hash_OpTable : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);
public:
 const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};
/* starting time is 20:54:02 */
/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: gperf -m -M -J -c -C -D -E -T -f 0 -a -o -t -p -K opname_ -L C++ -Z TAO_CORBA_DomainManager_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_CORBA_DomainManager_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
     18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
     18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
     18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
     18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
     18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
     18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
     18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
     18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
     18, 18, 18, 18, 18,  0, 18,  0, 18, 18,
     18, 18, 18,  0, 18, 18, 18, 18, 18, 18,
     18, 18, 18, 18, 18, 18,  0, 18, 18, 18,
     18,  0, 18, 18, 18, 18, 18, 18,
    };
  return len + asso_values[str[len - 1]] + asso_values[str[0]];
}

const class TAO_operation_db_entry *
TAO_CORBA_DomainManager_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 3,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 17,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 17,
      HASH_VALUE_RANGE = 13,
      DUPLICATES = 0
    };

  static const class TAO_operation_db_entry  wordlist[] =
    {
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"_is_a",  &POA_CORBA::DomainManager::_is_a_skel},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"_non_existent",  &POA_CORBA::DomainManager::_non_existent_skel},
      {"",0}, {"",0}, {"",0},
      {"get_domain_policy",     &POA_CORBA::DomainManager::get_domain_policy_skel},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname_;

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}
/* ending time is 20:54:02 */
static TAO_CORBA_DomainManager_Perfect_Hash_OpTable tao_CORBA_DomainManager_optable;

// skeleton constructor
POA_CORBA::DomainManager::DomainManager (void)
{
  this->optable_ = &tao_CORBA_DomainManager_optable;
}

// copy ctor
POA_CORBA::DomainManager::DomainManager (const DomainManager& rhs)
  :   TAO_ServantBase (rhs)
{}

// skeleton destructor
POA_CORBA::DomainManager::~DomainManager (void)
{
}

void POA_CORBA::DomainManager::get_domain_policy_skel (
    CORBA::ServerRequest &_tao_server_request,
    void *_tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
)
{
  TAO_InputCDR &_tao_in = _tao_server_request.incoming ();
  POA_CORBA::DomainManager *_tao_impl = (POA_CORBA::DomainManager *)_tao_object_reference;
  CORBA::Policy_var _tao_retval;
  CORBA::PolicyType policy_type;
  if (!(
    (_tao_in >> policy_type)
  ))
    ACE_THROW (CORBA::MARSHAL () );

  _tao_retval = _tao_impl->get_domain_policy (
    policy_type,
    ACE_TRY_ENV
  );
  ACE_CHECK;
  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!(
    (_tao_out << _tao_retval.in ())
  ))
    ACE_THROW (CORBA::MARSHAL () );

}

void POA_CORBA::DomainManager::_is_a_skel (
    CORBA::ServerRequest &_tao_server_request,
    void * _tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  TAO_InputCDR &_tao_in = _tao_server_request.incoming ();
  POA_CORBA::DomainManager *_tao_impl = (POA_CORBA::DomainManager *) _tao_object_reference;
  CORBA::Boolean _tao_retval = 0;
  CORBA::String_var value;
  if (!((_tao_in >> value.out ())))
    ACE_THROW (CORBA::MARSHAL ());

  _tao_retval = _tao_impl->_is_a (value.in (), ACE_TRY_ENV);
  ACE_CHECK;

  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!((_tao_out << CORBA::Any::from_boolean (_tao_retval))))
    ACE_THROW (CORBA::MARSHAL ());
}

void POA_CORBA::DomainManager::_non_existent_skel (
    CORBA::ServerRequest &_tao_server_request,
    void * _tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  POA_CORBA::DomainManager *_tao_impl = (POA_CORBA::DomainManager *) _tao_object_reference;
  CORBA::Boolean _tao_retval = _tao_impl->_non_existent (ACE_TRY_ENV);
  ACE_CHECK;

  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!((_tao_out << CORBA::Any::from_boolean (_tao_retval))))
    ACE_THROW (CORBA::MARSHAL ());
}

CORBA::Boolean POA_CORBA::DomainManager::_is_a (
    const char* value,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  if (
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/DomainManager:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, CORBA::_tc_Object->id (ACE_TRY_ENV))))
      return 1;
    else
      return 0;
}

void* POA_CORBA::DomainManager::_downcast (
    const char* logical_type_id
  )
{
  if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/CORBA/DomainManager:1.0") == 0)
    return ACE_static_cast (POA_CORBA::DomainManager_ptr, this);
  if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/CORBA/Object:1.0") == 0)
    return ACE_static_cast(PortableServer::Servant, this);
  return 0;
}

void POA_CORBA::DomainManager::_dispatch (CORBA::ServerRequest &req, void *context, CORBA::Environment &ACE_TRY_ENV)
{
  TAO_Skeleton skel; // pointer to skeleton for operation
  const char *opname = req.operation (); // retrieve operation name
  // find the skeleton corresponding to this opname
  if (this->_find (opname, skel, req.operation_length ()) == -1)
  {
    ACE_ERROR ((LM_ERROR, "Bad operation <%s>\n", opname));
    ACE_THROW (CORBA_BAD_OPERATION ());
  }
  else
    skel (req, this, context, ACE_TRY_ENV);
}

const char* POA_CORBA::DomainManager::_interface_repository_id (void) const
{
  return "IDL:omg.org/CORBA/DomainManager:1.0";
}


CORBA::DomainManager*
POA_CORBA::DomainManager::_this (CORBA_Environment &ACE_TRY_ENV)
{
  TAO_Stub *stub = this->_create_stub (ACE_TRY_ENV);
  ACE_CHECK_RETURN (0);

  CORBA::DomainManager *retval = CORBA_DomainManager::_nil ();

  ACE_NEW_RETURN (retval,
                  POA_CORBA::_tao_collocated_DomainManager (this,
                                                            stub),
                  CORBA_DomainManager::_nil ());

  return retval;
}

POA_CORBA::_tao_collocated_DomainManager::_tao_collocated_DomainManager (
    POA_CORBA::DomainManager_ptr  servant,
    TAO_Stub *stub
  )
  : ACE_CORBA_1 (DomainManager) (),
    CORBA_Object (stub, servant, 1),
    servant_ (servant)
{
}

POA_CORBA::DomainManager_ptr POA_CORBA::_tao_collocated_DomainManager::_get_servant (void) const
{
  return this->servant_;
}

CORBA::Policy_ptr POA_CORBA::_tao_collocated_DomainManager::get_domain_policy  (
    CORBA::PolicyType policy_type,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  return this->servant_->get_domain_policy (
    policy_type,
    ACE_TRY_ENV
  );
}

#if ! defined (TAO_HAS_MINIMUM_CORBA)

class TAO_CORBA_ConstructionPolicy_Perfect_Hash_OpTable : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);
public:
 const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};
/* starting time is 20:54:02 */
/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: gperf -m -M -J -c -C -D -E -T -f 0 -a -o -t -p -K opname_ -L C++ -Z TAO_CORBA_ConstructionPolicy_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_CORBA_ConstructionPolicy_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20,  0, 20,  0, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20,  0,
     20, 20, 20, 20,  0, 20,  0, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20,
    };
  return len + asso_values[str[len - 1]] + asso_values[str[0]];
}

const class TAO_operation_db_entry *
TAO_CORBA_ConstructionPolicy_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 3,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 19,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 19,
      HASH_VALUE_RANGE = 15,
      DUPLICATES = 0
    };

  static const class TAO_operation_db_entry  wordlist[] =
    {
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"_is_a",  &POA_CORBA::ConstructionPolicy::_is_a_skel},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"_non_existent",  &POA_CORBA::ConstructionPolicy::_non_existent_skel},
      {"",0}, {"",0}, {"",0}, {"",0}, {"",0},
      {"make_domain_manager",   &POA_CORBA::ConstructionPolicy::make_domain_manager_skel},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname_;

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}
/* ending time is 20:54:02 */
static TAO_CORBA_ConstructionPolicy_Perfect_Hash_OpTable tao_CORBA_ConstructionPolicy_optable;

// skeleton constructor
POA_CORBA::ConstructionPolicy::ConstructionPolicy (void)
{
  this->optable_ = &tao_CORBA_ConstructionPolicy_optable;
}

// copy ctor
POA_CORBA::ConstructionPolicy::ConstructionPolicy (const ConstructionPolicy& rhs)
  :   ACE_NESTED_CLASS (POA_CORBA,Policy) (rhs),
    TAO_ServantBase (rhs)
{}

// skeleton destructor
POA_CORBA::ConstructionPolicy::~ConstructionPolicy (void)
{
}

void POA_CORBA::ConstructionPolicy::make_domain_manager_skel (
    CORBA::ServerRequest &_tao_server_request,
    void *_tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
)
{
  // @@ TODO this method will require some modifications once the
  // interface repository is implemented. The modifications are
  // documented with @@ comments. Right now we raise a
  // MARSHAL exception....

  TAO_InputCDR &_tao_in = _tao_server_request.incoming ();
  POA_CORBA::ConstructionPolicy *_tao_impl = (POA_CORBA::ConstructionPolicy *)_tao_object_reference;

// @@ Needs implementation of InterfaceDef_var and >> operator
#if 0
  CORBA::InterfaceDef_var object_type;

  CORBA::Boolean constr_policy;
  if (!(
    (_tao_in >> object_type.out ()) &&
    (_tao_in >> CORBA::Any::to_boolean (constr_policy))
  ))
    ACE_THROW (CORBA::MARSHAL () );

  _tao_impl->make_domain_manager (
    object_type.in (),
    constr_policy,
    ACE_TRY_ENV
  );
  ACE_CHECK;
  _tao_server_request.init_reply (ACE_TRY_ENV);
#else /* 0 */
  ACE_UNUSED_ARG (_tao_in);
  ACE_UNUSED_ARG (_tao_impl);
  ACE_THROW (CORBA::MARSHAL ());
#endif /* 0 */
}

void POA_CORBA::ConstructionPolicy::_is_a_skel (
    CORBA::ServerRequest &_tao_server_request,
    void * _tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  TAO_InputCDR &_tao_in = _tao_server_request.incoming ();
  POA_CORBA::ConstructionPolicy *_tao_impl = (POA_CORBA::ConstructionPolicy *) _tao_object_reference;
  CORBA::Boolean _tao_retval = 0;
  CORBA::String_var value;
  if (!((_tao_in >> value.out ())))
    ACE_THROW (CORBA::MARSHAL ());

  _tao_retval = _tao_impl->_is_a (value.in (), ACE_TRY_ENV);
  ACE_CHECK;

  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!((_tao_out << CORBA::Any::from_boolean (_tao_retval))))
    ACE_THROW (CORBA::MARSHAL ());
}

void POA_CORBA::ConstructionPolicy::_non_existent_skel (
    CORBA::ServerRequest &_tao_server_request,
    void * _tao_object_reference,
    void * /* context */,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  POA_CORBA::ConstructionPolicy *_tao_impl = (POA_CORBA::ConstructionPolicy *) _tao_object_reference;
  CORBA::Boolean _tao_retval = _tao_impl->_non_existent (ACE_TRY_ENV);
  ACE_CHECK;

  _tao_server_request.init_reply (ACE_TRY_ENV);
  ACE_CHECK;
  TAO_OutputCDR &_tao_out = _tao_server_request.outgoing ();
  if (!((_tao_out << CORBA::Any::from_boolean (_tao_retval))))
    ACE_THROW (CORBA::MARSHAL ());
}

CORBA::Boolean POA_CORBA::ConstructionPolicy::_is_a (
    const char* value,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  if (
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/ConstructionPolicy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Policy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, CORBA::_tc_Object->id (ACE_TRY_ENV))))
      return 1;
    else
      return 0;
}

void* POA_CORBA::ConstructionPolicy::_downcast (
    const char* logical_type_id
  )
{
  if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/CORBA/ConstructionPolicy:1.0") == 0)
    return ACE_static_cast (POA_CORBA::ConstructionPolicy_ptr, this);
  if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/CORBA/Policy:1.0") == 0)
    return ACE_static_cast (POA_CORBA::Policy_ptr, this);
  if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/CORBA/Object:1.0") == 0)
    return ACE_static_cast(PortableServer::Servant, this);
  return 0;
}

void POA_CORBA::ConstructionPolicy::_dispatch (CORBA::ServerRequest &req, void *context, CORBA::Environment &ACE_TRY_ENV)
{
  TAO_Skeleton skel; // pointer to skeleton for operation
  const char *opname = req.operation (); // retrieve operation name
  // find the skeleton corresponding to this opname
  if (this->_find (opname, skel, req.operation_length ()) == -1)
  {
    ACE_ERROR ((LM_ERROR, "Bad operation <%s>\n", opname));
    ACE_THROW (CORBA_BAD_OPERATION ());
  }
  else
    skel (req, this, context, ACE_TRY_ENV);
}

const char* POA_CORBA::ConstructionPolicy::_interface_repository_id (void) const
{
  return "IDL:omg.org/CORBA/ConstructionPolicy:1.0";
}


CORBA::ConstructionPolicy*
POA_CORBA::ConstructionPolicy::_this (CORBA_Environment &ACE_TRY_ENV)
{
  TAO_Stub *stub = this->_create_stub (ACE_TRY_ENV);
  ACE_CHECK_RETURN (0);

  CORBA::ConstructionPolicy *retval =
    CORBA_ConstructionPolicy::_nil ();

  ACE_NEW_RETURN (retval,
                  POA_CORBA::_tao_collocated_ConstructionPolicy (this,
                                                                 stub),
                  CORBA_ConstructionPolicy::_nil ());

  return retval;
}

POA_CORBA::_tao_collocated_ConstructionPolicy::_tao_collocated_ConstructionPolicy (
    POA_CORBA::ConstructionPolicy_ptr  servant,
    TAO_Stub *stub
  )
  : ACE_CORBA_1 (ConstructionPolicy) (),
    ACE_NESTED_CLASS (POA_CORBA,_tao_collocated_Policy) (servant, stub),
    CORBA_Object (stub, servant, 1),
    servant_ (servant)
{
}

POA_CORBA::ConstructionPolicy_ptr POA_CORBA::_tao_collocated_ConstructionPolicy::_get_servant (void) const
{
  return this->servant_;
}

void POA_CORBA::_tao_collocated_ConstructionPolicy::make_domain_manager  (
    CORBA::InterfaceDef_ptr object_type,
    CORBA::Boolean constr_policy,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  this->servant_->make_domain_manager (
    object_type,
    constr_policy,
    ACE_TRY_ENV
  );
}

CORBA::Boolean POA_CORBA::_tao_collocated_ConstructionPolicy::_is_a (
    const char* logical_type_id,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  return this->servant_->_is_a (
      logical_type_id,
      ACE_TRY_ENV
    );
}

#endif /* ! defined (TAO_HAS_MINIMUM_CORBA) */
