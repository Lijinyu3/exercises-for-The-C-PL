/*
 * Exercise 1-4. Write a program to print the corresponding Celsius to 
 * Fahrenheit table.
 *
 * Author:	Leee
 * Date:	2021-1-11 Mon.
 * Filename:	temperature_C2F.c
 * Page:	8
 */

#include <stdio.h>
main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = -20;	//lower limit of temperature table
    upper = 50;		//upper limit
    step = 2;		//step size
    
    celsius = lower;
    printf("celsius\tfahr\n");
    while (celsius <= upper) {
        fahr = celsius /5.0*9.0 +32.0;
        printf("%7.1f\t%4.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
