// Coach bruh.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{

    int Lati;
	while (true)
	{
        printf("Dammi il numero di lati: ");
        scanf("%d", &Lati);
        if (Lati < 3) {
            printf("Devono essere almeno 3!\n");
        }
        else {
            break;
        }
	}
    float Lato;
    while (true)
    {
        printf("Quanto e' lungo un lato? ");
        scanf("%f", &Lato);
        if (Lato <= 0) {
            printf("Dev'essere un numero positivo!\n");
        }
        else {
            break;
        }
    }
    float Perimetro = Lati * Lato;
    printf("Perimetro: %f\n", Perimetro);
    float Apotema = Lato / (2 * tan(M_PI / Lati));
    printf("Apotema: %f\n", Apotema);
    float Area = Perimetro * Apotema / 2;
    printf("Area: %f\n", Area);
}

