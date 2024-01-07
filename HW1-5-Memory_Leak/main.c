#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
int main(int argc, char * * argv)
{
  if (argc != 3)
    {
      return EXIT_FAILURE;
    }
  FILE * fin = fopen(argv[1], "r");
  if (fin == NULL)
    {
      return EXIT_FAILURE;
    }
  FILE * fout = fopen(argv[2], "w");
  if (fout == NULL)
    {
      return EXIT_FAILURE;
    }
  int v1;
  int v2;
  fscanf(fin, "%d", & v1);
  fscanf(fin, "%d", & v2);
  fprintf(fout, "%d\n", add(v1, v2));
  fprintf(fout, "%d\n", sub(v1, v2));
  fclose(fin); // no fclose will leak memory
  fclose(fout); // no fclose will leak memory
  int * array = malloc(sizeof(int) * 1024);
  if (array == NULL)
    {
      return EXIT_FAILURE;
    }
  free(array); // no free will leak memory
  return EXIT_SUCCESS;
}
