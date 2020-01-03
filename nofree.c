#include "nofree.h"
#include <stdlib.h>
void nofree()
{
  char *x;
  x = malloc(sizeof(char)*50);
}
