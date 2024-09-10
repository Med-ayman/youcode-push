#include <stdio.h>
#include <stdlib.h>
int main() {

    float vitesseKmH;
    float vitesseMs;


    printf("Entrez la vitesse en kilomètres par heure (km/h) : ");
    scanf("%f", &vitesseKmH);


    vitesseMs = vitesseKmH * 0.27778;


    printf("La vitesse en mètres par seconde est : %f\n", vitesseMs);

    return 0;
}
