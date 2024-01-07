#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
int main(int argc, char * * argv)
{
  int v1;
  int v2;
  scanf("%d", & v1);
  scanf("%d", & v2);
  printf("%d\n", add(v1, v2));
  return EXIT_SUCCESS;
}
