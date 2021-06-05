/*
 * main-net.c
 */

#include <stdio.h>
#include "main-net.h"

int main(void)
{
    printf("Main started\n");
    double a1 = 11.4;
    double a2 = 12.5;
    double result = calc_net(a1, a2);
    printf("Calcolo: %f\n", result);
    return(0);
}
