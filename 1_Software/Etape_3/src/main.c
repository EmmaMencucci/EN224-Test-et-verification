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
// Deuxième méthode pour le calcul du PGCD
int PGCD2 (int N1, int N2 )
{
  int reste;
  while(N2 != 0)
  {
    reste = N1 % N2;
    N1 = N2;
    N2 = reste;
  }
  return N1;
}
int main (int argc, char * argv []){
	printf("(II) Starting PGCD program\n");
	for(int i=0;i<20;i++)
	{
    int A = RandA();
    int B = RandB();
    // Comparaison avec les deux méthodes de calcul
    if (PGCD(A,B)!=PGCD2(A,B))
    {
        printf(" Valeur de A : %d et valeur de B : %d\n", A, B);
        printf("Le PGCD est : %d\n", PGCD(A,B));
        printf("Le PGCD2 est : %d\n", PGCD2(A,B));
    }
  }
    printf("(II) End of PGCD program\n");
  return 0;
}
