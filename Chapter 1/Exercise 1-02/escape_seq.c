/*
 * Exercise 1-2. Experiment to find out what happens when printf's argument
 * string contains \c, where c is some character not listed above.
 * 
 * Author:	Leee
 * Date:	2021-1-4 Mon.
 * Filename:	escape_seq.c
 * Page:	8
 */

#include <stdio.h>
main()
{
    // legal escape sequences I found out
    printf("audible alert (bell)    BEL	\\a	    %d\n", '\a');
    printf("backspace               BS	\\b	    %d\n", '\b');
    printf("horizontal tab          HT	\\t	    %d\n", '\t');
    printf("new line                LF	\\n	    %d\n", '\n');
    printf("vertical tab            VT  \\v     %d\n", '\v');
    printf("form feed               FF  \\f     %d\n", '\f');
    printf("carriage return         CR  \\r     %d\n", '\r');
    printf("double quote            \"  \\\"    %d\n", '\"');
    printf("single quote            \'  \\\'    %d\n", '\'');
    printf("question mark           ?   \\?     %d\n", '\?');
    printf("backslash               \\  \\\\    %d\n", '\\');
}
