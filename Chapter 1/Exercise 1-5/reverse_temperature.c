/*
 * Exercise 1-5. Modify the temperature conversion program to print the table
 * in * reverse order, that is from 300 degree to 0.
 *
 * Author:	Leee
 * Date:	2021-1-11 Mon.
 * Filename:	reverse_temperature.c
 * Page:	14
 */

#include <stdio.h>
main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;		// lower limit of temperature table
    upper = 300;	// upper limit
    step = 20;		// step size
    
    fahr = upper;
    printf("fahr\tcelsius\n");
    while (fahr >= lower) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f\t%7.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
}

