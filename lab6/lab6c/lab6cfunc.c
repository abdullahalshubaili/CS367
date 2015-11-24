#include <stdio.h>
#include "lab6cfunc.h"

float price(float gallon, int size)
{
        return gallon * size;
}

void doit(float gallon, int size, float cost)
{
        printf("Price per gallon: $%.2f\n", gallon);
        printf("Tank size   : %d\n", size);
        printf("Total cost      : $%.2f\n", cost);
}

void tankcost(float gallon, int size, float *cost)
{
        (*cost) = price(gallon, size);
}

void second(float *gallon, int *size)
{
        printf("price-per-gallon: ");

        while (scanf("%f", gallon) != 1 || (*gallon) <= 0)
        {
                while (getchar() != '\n');
                printf("Corrected to: ");
        }

        printf("tank size: ");

        while (scanf("%d", size) != 1 || (*size) <= 0)
        {
                while (getchar() != '\n');
                printf("Corrected to: ");
        }
}
