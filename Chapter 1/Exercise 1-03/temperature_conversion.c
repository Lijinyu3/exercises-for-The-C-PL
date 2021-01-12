/*
 * Exercise 1-3. Modify the temperature cpmversion program to print a heading
 * above thr table.
 *
 * Author:	Leee
 * Date:	2021-1-10 Sun.
 * Filename:	temperature_conversion.c
 * Page:	8
 */

#include <stdio.h>
main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;		// lower limit of temperature table
    upper = 300;	// upper limit
    step = 20;		// step size
    
    fahr = lower;
    printf("fahr\tcelsius\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f\t%7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
