/*
 * Exercise 1-13. Write a program to print a histogram of the lengths of words in
 * its input. It's easy to draw the histogram with the bars horizontal; a vertical
 * orientations is more challenging.
 *
 * Author:	Leee
 * Date:	2021-1-14 Thu.
 * Filename:	histogram.c
 * Page:	24
 */

#include <stdio.h>

#define IN  1
#define OUT 0

main()
{
    int c;
    int count = 0;
    int state = OUT;
    printf("Waiting for ur input:\n");
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n'){
	    if (state == IN)
		putchar('\n');
	    state = OUT;
	}
	else{
	    putchar('-');
	    state = IN;	
	}
    }
}
