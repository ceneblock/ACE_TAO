// $Id$

#include "ace/streams.h"
#include "ace/Get_Opt.h"
#include "Collocation_Tester.h"
#include "tao/Strategies/advanced_resource.h"

ACE_RCSID(Collocation, main, "$Id$")

int main (int argc, char *argv[])
{
  ACE_TRY_NEW_ENV
    {
      Collocation_Test coll_test;

      coll_test.init (argc, argv TAO_ENV_ARG_PARAMETER);
      ACE_TRY_CHECK;

      coll_test.run (TAO_ENV_SINGLE_ARG_PARAMETER);
      ACE_TRY_CHECK;

      coll_test.shutdown (TAO_ENV_SINGLE_ARG_PARAMETER);
      ACE_TRY_CHECK;
    }
  ACE_CATCHANY
    {
      ACE_PRINT_EXCEPTION (ACE_ANY_EXCEPTION, "Uncaught exception: ");
    }
  ACE_ENDTRY;

  return 0;
}
