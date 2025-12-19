#include "Bibliothequelib.h" 
#include <math.h>
#include <stdio.h> 
// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ) { 
unsigned int result = 1; 
while ( value > 1 ) { 
result *= value; 
value --; 
} 
return result; 
} 
// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ) { 
if ( pow == 0 ) return 1; 
if ( pow == 1 ) return value; 
int accumulator = 1; 
while( pow > 0 ) { 
accumulator *= value; 
pow--; 
} 
return accumulator; }

// Définition d'une fonction de permutation 
void permutation(int *a, int *b){
int c= 0;
c = *a;
*a = *b;
*b = c;
}

// Définition des fonctions pour resoudre l'equation du second degre .
void resoudreEquationSecondDegre() {
    double a, b, c, delta;
    
    
    printf("Resolution d'equation du second degre : ax² + bx + c = 0\n");
    printf("Entrez les coefficients a, b, c : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    
    if (a == 0) {
        printf("Ce n'est pas une equation du second degre\n");
        return;
    }
    
    
    delta = b * b - 4 * a * c;
    
    
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Deux solutions : %.2f et %.2f\n", x1, x2);
    } 
    else if (delta == 0) {
        double x = -b / (2 * a);
        printf("Une solution double : %.2f\n", x);
    } 
    else {
        printf("Pas de solution reelle\n");
    }
}
void verifierNombrePremier() {
    int n, i;
    
    printf("Entrez un entier positif : ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("%d n'est pas premier\n", n);
        return;
    }
    
    // Recherche directe d'un diviseur
    for (i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            printf("%d n'est pas premier\n", n);
            return;  // On sort de la fonction immédiatement
        }
    }
    
    // Si on arrive ici, aucun diviseur n'a été trouvé
    printf("%d est premier\n", n);
 }

void calculerEtAfficherDistance() {
    typedef struct {
        float x, y;
    } Point;
    
    Point p1, p2;
    float distance;
    
    printf("Entrez les coordonnées du premier point : \n");
    scanf("%f %f", &p1.x, &p1.y);
    
    printf("Entrez les coordonnées du second point : \n");
    scanf("%f %f", &p2.x, &p2.y);

    printf("le premier point est:(%.2f,%.2f)\n", p1.x, p1.y);
    printf("le premier point est:(%.2f,%.2f)\n",p2.x, p2.y );

    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    
    printf("Distance : %.2f\n", distance);
}