#include <stdio.h>

int main() {

    float nombre1, nombre2, nombre3;
    float pond�ration1 = 2, pond�ration2 = 3, pond�ration3 = 5;
    float moyennePonderee;
    float sommePonderations;


    printf("Entrez le premier nombre : ");
    scanf("%f", &nombre1);

    printf("Entrez le deuxi�me nombre : ");
    scanf("%f", &nombre2);

    printf("Entrez le troisi�me nombre : ");
    scanf("%f", &nombre3);

    sommePonderations = pond�ration1 + pond�ration2 + pond�ration3;

    moyennePonderee = (nombre1 * pond�ration1 + nombre2 * pond�ration2 + nombre3 * pond�ration3) / sommePonderations;

    printf("La moyenne pond�r�e est : %f\n", moyennePonderee);

    return 0;
}
