#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char * * argv)
{
  if (argc != 3)
    { return EXIT_FAILURE; }
  int v1 = (int) strtol(argv[1], NULL, 10);
  int v2 = (int) strtol(argv[2], NULL, 10);
  printf("%d\n", v1 - v2); // <--- should be +, please correct the mistake
  return EXIT_SUCCESS;
}