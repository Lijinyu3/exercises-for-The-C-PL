/*
 * Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to
 * use a function for conversion.
 *
 * Author:	Leee
 * Date:	2021-1-14 Thu.
 * Filename:	new_temperature.c
 * Page:	27
 */

#include <stdio.h>
// print Fahrenheit-Celsius table by using a function

int fahr_to_celsius(int fahr);

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step  = 20;

    fahr = lower;
    printf("Fahr\tCelsius\n");
    while (fahr <= upper) {
	celsius = fahr_to_celsius(fahr);
	printf("%d\t%d\n", fahr, celsius);
	fahr += step;
    }
}

int fahr_to_celsius(int fahr)
{
    return 5 * (fahr-32) /9;
}
