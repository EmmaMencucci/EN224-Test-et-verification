#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int RandA ()
{
  int A = rand() % 65536;
  return A;
}

int RandB ()
{
  int B = rand() % 65536;
  return B;
}
// Premiere methode
int PGCD(int A, int B)
{
  // gerer les cas particulier (le zéro)
  if(A==0)
    return B;
  if (B==0)
    return A;

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
