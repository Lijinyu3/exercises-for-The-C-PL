/*
 * Exercise 1-14. Write a program to print a histogram of the frequencies of dif-
 * ferent characters in its input.
 *
 * Author:	Leee
 * Date:	2021-1-14 Thu.
 * Filename:	freq_char.c
 * Page:	24
 */

#include <stdio.h>
#define MAX_CHAR 128		// ASCII value is a int number between 0 ~ 127 which is the way
				// to represent char in C
main()
{
    int freq[MAX_CHAR];				// frequencies of each char
    int c;
    for (int i = 0; i < MAX_CHAR; i ++ )
	freq[i] = 0;				// initialize array
    printf("Waiting for ur input:\n");
    while ((c = getchar()) != EOF)
	if (c != '\n' && c != ' ' && c != '\t'){
	    ++ freq[c];				// record the frequency
	}else if (c == '\n')			// the end of a line
	    for (int c_char = 0; c_char < 128; c_char ++ )
		if (freq[c_char] != 0){		// if the char are entered
		    printf("%c:\t", c_char);
		    for (int c_freq = 0; c_freq < freq[c_char]; c_freq ++)
		        putchar('-');
		    putchar('\n');
		    freq[c_char] = 0;		// re-initialize the array
		}				// end of if
}						// end of main
