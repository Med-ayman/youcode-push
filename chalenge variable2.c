#include <stdio.h>
#include <stdlib.h>
int main() {

    float temperatureCelsius;
    float temperatureKelvin;


    printf("Entrez la température en degrés Celsius : ");
    scanf("%f", &temperatureCelsius);


    temperatureKelvin = temperatureCelsius + 273.15;

    printf("La température en Kelvin est : %f\n", temperatureKelvin);

    return 0;
    }
