//$Id$


// note: This order of header inclusion is required in order to satisfy
// template instantiation rules.
#include "tao/CORBA_methods.h"
#include "tao/AnyTypeCode/NVList.h"

#include "My_DII_Reply_Handler.h"
#include "ace/Log_Msg.h"
#include "tao/AnyTypeCode/Any.h"

My_DII_Reply_Handler::My_DII_Reply_Handler(
    TAO_AMH_DSI_Response_Handler_ptr rph,
    CORBA::ORB_var orb)
 : response_handler_ (TAO_AMH_DSI_Response_Handler::_duplicate(rph)),
  orb_ (orb)
{
}

My_DII_Reply_Handler::~My_DII_Reply_Handler()
{
}

void
My_DII_Reply_Handler::handle_response(TAO_InputCDR &incoming)
{
  CORBA::NVList_var opList;

  try
  {
    this->orb_->create_list (0, opList.out());

    bool lazy_evaluation = true;
    opList->_tao_incoming_cdr (incoming,
                               CORBA::ARG_OUT | CORBA::ARG_INOUT,
                               lazy_evaluation);

  if (!CORBA::is_nil (this->response_handler_.in()))
    this->response_handler_->invoke_reply (opList.in(),
                                           0 // result
                                           );

  }
  catch (CORBA::SystemException &ex)
  {
    TAO_AMH_DSI_Exception_Holder h (ex._tao_duplicate());
    response_handler_->invoke_excep(&h);
  }
  catch (...)
  {
    ACE_ERROR ((LM_ERROR,
                "ERROR: Unknown Exception\n"));
    TAO_AMH_DSI_Exception_Holder h (new CORBA::UNKNOWN());
    response_handler_->invoke_excep(&h);
  }

}

void
My_DII_Reply_Handler::handle_excep (TAO_InputCDR &incoming,
                                    CORBA::ULong reply_status)
{
  ACE_DEBUG((LM_DEBUG, "calling My_DII_Reply_Handler::handle_excep()\n"));
  this->response_handler_->gateway_exception_reply (reply_status, incoming);

}
