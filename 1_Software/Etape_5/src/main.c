#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "assert.h"

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
	while(A != B)
	{
		// Vérifier que les valeurs d'entrée sont sur l'intervalle
		assert(0 < A && A < 65536);
		assert(0 < B && B < 65536);
		if (A > B)
		{
			A = A - B;
		}
		else
			B = B - A;
	}
	return A;
}
// Deuxième méthode
int PGCD2 (int N1, int N2 )
{
  int reste;
  while(N2 != 0)
  {
		// Vérifier que les valeurs d'entrée sont sur l'intervalle
		assert(0 < N1 && N1 < 65536);
		assert(0 < N2 && N2 < 65536);
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

		int result = PGCD(A,B);
		int result2 = PGCD2(A,B);
		// Vérifier que la valeur de sortie est sur l'intervalle
		assert(0 < result && result < 65536);
		assert(0 < result2 && result2 < 65536);

    // Vérifier que la comparaison avec les deux méthodes de calcul soit bonne
		assert(result!=result2);
		printf(" Valeur de A : %d et valeur de B : %d\n", A, B);
		printf("Le PGCD est : %d\n", result);
		printf("Le PGCD2 est : %d\n", result2);
  }

  printf("(II) End of PGCD program\n");

  return 0;
}
