// ***
// *** DO NOT submit this file
// ***

#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h>
#define NUMCHAR 256
bool countChar(char * filename, int * counts, int size);

int main(int argc, char * * argv)
{
  // read input file
  if (argc != 2)
    {
      return EXIT_FAILURE;
    }
  int counts[NUMCHAR] = {0}; // initialize all elements to zero
  bool rtv;
  rtv = countChar(argv[1], counts, NUMCHAR);
  
  // Optionally, here you can test your countChar function by 
  // printing out the value of counts, the return 
  // value, etc. However, this file will not
  // be graded

  if (rtv == false)
    {
      return EXIT_FAILURE;
    }
  return EXIT_SUCCESS;
}
