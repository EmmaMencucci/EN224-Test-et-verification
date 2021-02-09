#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "assert.h"

#include "pgcd.h"

int main (int argc, char * argv []){

	FILE* fichierA = NULL;
	fichierA = fopen("./src/ref_A.txt","r");

	FILE* fichierB = NULL;
	fichierB = fopen("./src/ref_B.txt","r");

	FILE* fichierResult = NULL;
	fichierResult = fopen("./src/ref_Result.txt","w");

	int caractereActuelA = 0;
	int caractereActuelB = 0;

	if (fichierA != NULL && fichierB != NULL )
	    {
	        // Boucle de lecture des caractères un à un
	        for(int i = 0;i<65536;i++)
	        {
	            fscanf(fichierA,"%d",&caractereActuelA); // On lit le caractère
							fscanf(fichierB,"%d",&caractereActuelB);
							fprintf(fichierResult,"%d\n",PGCD(caractereActuelA,caractereActuelB));
	        }

	        fclose(fichierA);
	    		fclose(fichierB);
					fclose(fichierResult);
		 }
	 else
	     {
	         // On affiche un message d'erreur si on veut
	         printf("Impossible d'ouvrir le fichier");
	     }

  return 0;
}
