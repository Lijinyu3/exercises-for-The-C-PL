/*
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 *
 * Author:	Leee
 * Date:	2021-1-12 Tues.
 * Filename:	count.c
 * Page:	20
 */

#include <stdio.h>

main()
{
    int c = 0, blk = 0, tb = 0, nl = 0;
    while ( (c=getchar()) != EOF){
        if (c == ' ')
            ++blk;
        else if (c == '\t')
            ++tb;
        else if (c == '\n')
            ++nl;
    }
    printf("The count of blanks:%d, tabs:%d, newlines:%d.\n", blk, tb, nl);
}
