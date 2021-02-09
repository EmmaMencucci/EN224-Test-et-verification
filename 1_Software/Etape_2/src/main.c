#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int RandA ()
{
  int A = rand() % 65535;
  return A;
}

int RandB ()
{
  int B = rand() % 65535;
  return B;
}
int PGCD(int A, int B)
{
	while(A != B)
	{
		if (A > B)
		{
			A = A - B;
		}
		else
			B = B - A;

	}
	return A;
  
}

int main (int argc, char * argv []){
	printf("(II) Starting PGCD program\n");
	int result;
	for(int i=0;i<20;i++)
	{
        int A = RandA();
        int B = RandB();
        printf(" Valeur de A : %d et valeur de B : %d\n", A, B);
        result = PGCD(A, B);
    	printf("Le PGCD est : %d\n", result);
    	printf("(II) End of PGCD program\n");
	}
  return 0;
}
