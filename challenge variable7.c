#include <stdio.h>
#include <stdlib.h>
int main() {

    float nombre1, nombre2, nombre3;
    float pondération1 = 2, pondération2 = 3, pondération3 = 5;
    float moyennePonderee;
    float sommePonderations;


    printf("Entrez le premier nombre : ");
    scanf("%f", &nombre1);

    printf("Entrez le deuxième nombre : ");
    scanf("%f", &nombre2);

    printf("Entrez le troisième nombre : ");
    scanf("%f", &nombre3);

    sommePonderations = pondération1 + pondération2 + pondération3;

    moyennePonderee = (nombre1 * pondération1 + nombre2 * pondération2 + nombre3 * pondération3) / sommePonderations;

    printf("La moyenne pondérée est : %f\n", moyennePonderee);

    return 0;
}
