// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#ifndef _TAO_IDL_CORBA_CURRENTC_H_
#define _TAO_IDL_CORBA_CURRENTC_H_

#include "ace/pre.h"
#include "tao/Object.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/corbafwd.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Export

#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO TAO_Export
#endif /* TAO_EXPORT_NESTED_CLASSES */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option push -w-rvl -w-rch -w-ccc -w-inl
#endif /* __BORLANDC__ */


#if !defined (_CORBA_CURRENT___PTR_CH_)
#define _CORBA_CURRENT___PTR_CH_

class CORBA_Current;
typedef CORBA_Current *CORBA_Current_ptr;

#endif /* end #if !defined */


#if !defined (_CORBA_CURRENT___VAR_CH_)
#define _CORBA_CURRENT___VAR_CH_

class TAO_Export CORBA_Current_var : public TAO_Base_var
{
public:
  CORBA_Current_var (void); // default constructor
  CORBA_Current_var (CORBA_Current_ptr p) : ptr_ (p) {}
  CORBA_Current_var (const CORBA_Current_var &); // copy constructor
  ~CORBA_Current_var (void); // destructor

  CORBA_Current_var &operator= (CORBA_Current_ptr);
  CORBA_Current_var &operator= (const CORBA_Current_var &);
  CORBA_Current_ptr operator-> (void) const;

  operator const CORBA_Current_ptr &() const;
  operator CORBA_Current_ptr &();
  // in, inout, out, _retn
  CORBA_Current_ptr in (void) const;
  CORBA_Current_ptr &inout (void);
  CORBA_Current_ptr &out (void);
  CORBA_Current_ptr _retn (void);
  CORBA_Current_ptr ptr (void) const;

  // Hooks used by template sequence and object manager classes
  // for non-defined forward declared interfaces.
  static CORBA_Current_ptr tao_duplicate (CORBA_Current_ptr);
  static void tao_release (CORBA_Current_ptr);
  static CORBA_Current_ptr tao_nil (void);
  static CORBA_Current_ptr tao_narrow (
      CORBA::Object *
      TAO_ENV_ARG_DECL_NOT_USED
    );
  static CORBA::Object * tao_upcast (void *);

private:
  CORBA_Current_ptr ptr_;
  // Unimplemented - prevents widening assignment.
  CORBA_Current_var (const TAO_Base_var &rhs);
  CORBA_Current_var &operator= (const TAO_Base_var &rhs);
};


#endif /* end #if !defined */


#if !defined (_CORBA_CURRENT___OUT_CH_)
#define _CORBA_CURRENT___OUT_CH_

class TAO_Export CORBA_Current_out
{
public:
  CORBA_Current_out (CORBA_Current_ptr &);
  CORBA_Current_out (CORBA_Current_var &);
  CORBA_Current_out (const CORBA_Current_out &);
  CORBA_Current_out &operator= (const CORBA_Current_out &);
  CORBA_Current_out &operator= (const CORBA_Current_var &);
  CORBA_Current_out &operator= (CORBA_Current_ptr);
  operator CORBA_Current_ptr &();
  CORBA_Current_ptr &ptr (void);
  CORBA_Current_ptr operator-> (void);

private:
  CORBA_Current_ptr &ptr_;
};


#endif /* end #if !defined */


#if !defined (_CORBA_CURRENT_CH_)
#define _CORBA_CURRENT_CH_

class TAO_Export CORBA_Current
  : public virtual CORBA_Object
{
public:
#if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
  typedef CORBA_Current_ptr _ptr_type;
  typedef CORBA_Current_var _var_type;
#endif /* ! __GNUC__ || g++ >= 2.8 */

  static int _tao_class_id;

  // The static operations.
  static CORBA_Current_ptr _duplicate (CORBA_Current_ptr obj);

  static CORBA_Current_ptr _narrow (
      CORBA::Object_ptr obj
      TAO_ENV_ARG_DECL_WITH_DEFAULTS);


  static CORBA_Current_ptr _unchecked_narrow (
      CORBA::Object_ptr obj
      TAO_ENV_ARG_DECL_WITH_DEFAULTS);


  static CORBA_Current_ptr _nil (void)
    {
      return (CORBA_Current_ptr)0;
    }

  virtual void *_tao_QueryInterface (ptr_arith_t type);

  virtual const char* _interface_repository_id (void) const;

protected:
  CORBA_Current (void);

  virtual ~CORBA_Current (void);

private:
  CORBA_Current (const CORBA_Current &);
  void operator= (const CORBA_Current &);
};


#endif /* end #if !defined */


#ifndef __ACE_INLINE__


#endif /* __ACE_INLINE__ */


#if defined (__ACE_INLINE__)
#include "tao/CurrentC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#include "ace/post.h"
#endif /* ifndef */
