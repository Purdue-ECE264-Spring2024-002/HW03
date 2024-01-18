// ***
// *** DO NOT submit this file
// ***

#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h>
#define NUMCHAR 256
void printCounts(int * counts, int size);

int main(int argc, char * * argv)
{
  // read input file
  if (argc != 2)
    {
      return EXIT_FAILURE;
    }
  int counts[NUMCHAR] = {0}; // initialize all elements to zero
  bool rtv;
  
  // This line will not compile because countChar 
  // is not defined in this folder
  // Optionally, you can copy your implementation of 
  // countChar into this folder. However, make sure you 
  // remove it before submitting.
  rtv = countChar(argv[1], counts, NUMCHAR);
  if (rtv == false)
    {
      return EXIT_FAILURE;
    }
  printCounts(counts, NUMCHAR);
  return EXIT_SUCCESS;
}
