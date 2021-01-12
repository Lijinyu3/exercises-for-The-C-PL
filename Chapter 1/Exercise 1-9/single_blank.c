/*
 * Exercise 1-9. Write a program to copy its input to its output, replacing
 * each string of one or more blanks by a single blank.
 *
 * Author:	Leee
 * Date:	2021-1-13 Wed.
 * Filename:	single_blank.c
 * Page:	20
 */

#include <stdio.h>
main()
{
    int c, last_blank = 0;
    printf("Waiting for ur input:\n");
    while ((c = getchar()) != EOF){
        if (c != ' '){
            putchar(c);
            last_blank = 0;
        }else{
            if (!last_blank){
                putchar(c);
            }
            last_blank = 1;
        }
    }
}
