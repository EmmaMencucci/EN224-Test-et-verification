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
// Premiere methode
int PGCD(int A, int B)
{
  if(A==0)
    return B;
  if (B==0)
    return A;
  if (A==0 && B==0)
    return 0;
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
	for(int i=0;i<2000;i++)
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
