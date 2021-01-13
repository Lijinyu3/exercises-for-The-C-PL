/*
 * Write a program that prints its input one word per line.
 *
 * Author:	Leee
 * Date:	2021-1-4 Thu.
 * Filename:	one_word.c
 * Page: 	21
 */

#include <stdio.h>

#define IN  1	//inside a word
#define OUT 0	//inside a word

main()
{
    int c, state;
    state = OUT;				// initial state is OUT
    while ((c = getchar()) != EOF){
        if (c == ' ' ||  c == '\t')		// it's not a word
	    state = OUT;
	else if (state == OUT && c != '\n'){	// the end of a word, print nl
	    state = IN;				// and that char
	    printf("\n");
	    putchar(c);
	}
	else					// it's a char but not the end
	    putchar(c);				// or it's a Newline
    }						// so no nl and no state change
}
