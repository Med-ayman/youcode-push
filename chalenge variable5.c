#include <stdio.h>
#include <stdlib.h>
int main() {

    float temperatureCelsius;


    printf("Entrez la temp�rature en degr�s Celsius : ");
    scanf("%f", &temperatureCelsius);


    if (temperatureCelsius < 0) {
        printf("� %.2f�C, l'eau est solide.\n", temperatureCelsius);
    } else if (temperatureCelsius >= 0 && temperatureCelsius < 100) {
        printf("� %.2f�C, l'eau est liquide.\n", temperatureCelsius);
    } else {
        printf("� %.2f�C, l'eau est en gaz.\n", temperatureCelsius);
    }

    return 0;
}
