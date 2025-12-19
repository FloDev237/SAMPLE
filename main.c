#include <stdio.h>
#include <stdlib.h> 
#include "Bibliothequelib.h" 
int main( void ) { 

printf("\n=== Test du power ===\n");
int result = power( 2, 3 ); 
printf( "2³ == %d\n", result ); 

printf("\n=== Test du factoriel ===\n");
result = fact( 6 ); 
printf( "6! == %d\n", result ); 


printf("\n=== Test de la permutation ===\n");
int first = 10;
int second = 20;
printf("first =%d, second = %d \n", first, second);
permutation(&first, &second);
printf("first = %d, second =%d \n", first, second);

printf("\n=== Equation du second degre ===\n"); 
resoudreEquationSecondDegre();
    
printf("\n=== Verifier un nombre premier ===\n");
verifierNombrePremier();

printf("\n=== Calculer et afficher la distance ===\n");
calculerEtAfficherDistance();
    
return EXIT_SUCCESS;

}