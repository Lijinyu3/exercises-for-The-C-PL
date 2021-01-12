/*
 * Exercise 1-10. Write a program to copy its input to its output, replacing
 * each tab by \t, each backspace by \b, and each baskslash by \\. This makes
 * tabs and backspaces visiable in an unambiguous way.
 *
 * Author:	Leee
 * Date:	2021-1-13 Wed.
 * Filename:	visiable.c
 * Page:	20
 */

#include <stdio.h>
main()
{
    int c;
    printf("Waiting for ur input:\n");
    while ((c = getchar()) != EOF){
        if (c == '\b')         printf("\\b");
        else if (c == '\t')    printf("\\t");
        else if (c == '\\')    printf("\\\\");
        else                   putchar(c);
    }
}
