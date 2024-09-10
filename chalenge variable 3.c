#include <stdio.h>
#include <stdlib.h>
int main() {

    float distanceKm;
    float distanceYards;


    printf("Entrez la distance en kilomètres : ");
    scanf("%f", &distanceKm);


    distanceYards = distanceKm * 1093.61;


    printf("La distance en yards est : %f\n", distanceYards);

    return 0;
}
