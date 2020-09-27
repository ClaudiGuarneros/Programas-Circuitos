#include <stdio.h>
#include <stdlib.h>

int main()
{
    float V;
    float R1;
    float R2;
    float R3;

    printf("ESTE PROGRAMA TE DARA EL VALOR DE UNA RESISTENCIA APARTIR DEL VOLTAJE INICIAL PARA LOS LED\nVERDE STD\nBLANCO\nAZUL BRILLANTE\n");
    printf("Dame el valor del voltaje de tu fuente\n");
    scanf("%f", &V);

    //LED VERDE STD
    R1=(V-1.8)/0.015;
    //LED BLANCO
    R2=(V-2.8)/0.02;
    //LED AZUL BRILLANTE
    R3=(V-3)/0.02;

    printf("Para encender el led VERDE STD necesitas una resistencia de: %f\n", R1);
    printf("Para encender el led BLANCO necesitas una resistencia de: %f\n", R2);
    printf("Para encender el led AZUL BRILLANTE necesitas una resistencia de: %f\n", R3);

    return 0;
}
