#include <stdio.h>

int main()
{
#if VERBOSE >= 2
  printf("Trace message");
#endif
}