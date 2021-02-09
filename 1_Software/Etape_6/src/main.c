#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "assert.h"

#include "pgcd.h"

int main (int argc, char * argv []){
	printf("(II) Starting PGCD program\n");
  assert(PGCD(0, 0) == 0);
  assert(PGCD(0, 15) == 15);
  assert(PGCD(456, 0) == 456);
  assert(PGCD(564, 9967) == 1);
  assert(PGCD(65535, 65535) == 65535);
  assert(PGCD(65535, 65535) == 1);
  printf("(II) End of PGCD program\n");

  return 0;
}
