#include <stdio.h>
#include "overflow.h"
#include "uninitvar.h"
#include "nofree.h"

int main()
{
  overflow();
  uninitvar();
  nofree();

  return 0;
}
