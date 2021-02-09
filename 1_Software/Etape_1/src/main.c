#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int PGCD(int A, int B)
{
	while(A != B)
	{
		if (A > B)
		{
			A = A - B;
		else
			B = B - A;
		}
	}
	return A;
}

int main (int argc, char * argv []){
	printf("(II) Starting PGCD program\n");
	int result;
	result = PGCD(15, 26);
	printf("Le PGCD est : %d\n", result);

	printf("(II) End of PGCD program\n");
  return 0;
}
