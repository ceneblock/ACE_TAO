// $Id$

#include "airplane_server_i.h"

ACE_RCSID(ImplRepo, airplane_server, "$Id$")

int
main (int argc, char *argv[])
{
  Airplane_Server_i server;

  ACE_DEBUG ((LM_DEBUG, "\n\tPaper Airplane Server\n\n"));

  TAO_ENV_DECLARE_NEW_ENV;
  ACE_TRY
    {
      int retval = server.init (argc, argv TAO_ENV_ARG_PARAMETER);
      ACE_TRY_CHECK;

      if (retval == -1)
        return -1;
      else
        {
          server.run (TAO_ENV_SINGLE_ARG_PARAMETER);
          ACE_TRY_CHECK;
        }
    }
  ACE_CATCH (CORBA::SystemException, sysex)
    {
      ACE_PRINT_EXCEPTION (sysex, "System Exception");
      return -1;
    }
  ACE_CATCH (CORBA::UserException, userex)
    {
      ACE_PRINT_EXCEPTION (userex, "User Exception");
      return -1;
    }
  ACE_ENDTRY;

  ACE_DEBUG ((LM_DEBUG, "Paper Airplane Server says goodnight\n"));
  return 0;
}
