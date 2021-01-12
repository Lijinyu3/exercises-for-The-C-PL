/*
 * Exercise 1-6. Verfify that the expression getchar() != EOF is 0 or 1.
 *
 * Author:	Leee
 * Date:	2021-1-11 Mon.
 * Filename:	verify_expression.c
 * Page:	17
 */

#include <stdio.h>
main()
{
    printf("Enter a char:");
    int flag = getchar() != EOF;
    printf("The expression of getchar()!=EOF is %d\n", flag);
}
