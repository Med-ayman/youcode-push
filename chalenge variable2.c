#include <stdio.h>
#include <stdlib.h>
int main() {

    float temperatureCelsius;
    float temperatureKelvin;


    printf("Entrez la temp�rature en degr�s Celsius : ");
    scanf("%f", &temperatureCelsius);


    temperatureKelvin = temperatureCelsius + 273.15;

    printf("La temp�rature en Kelvin est : %f\n", temperatureKelvin);

    return 0;
    }
