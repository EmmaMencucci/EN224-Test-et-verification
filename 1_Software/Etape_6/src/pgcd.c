#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "assert.h"
#include "pgcd.h"

int PGCD(int A, int B)
{

  //Préconditions
  // Vérifier que les valeurs d'entrée sont sur l'intervalle
  assert(0 <= A && A < 65536);
  assert(0 <= B && B < 65536);

  int a = A;
  int b = B;
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
  //Postconditions
  assert(A >= 0); // le pgcd doit etre supérieur à 0
  assert(A <= a && A <= b); // le pgcd doit etre plus petit que les valeurs d'entrée
	return A;
}
