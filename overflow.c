#include "overflow.h"
#include <string.h>

void overflow()
{
  char str[5];
  strcpy(str, "sdfghjkl;sdfghjklkjhgfd");
}
