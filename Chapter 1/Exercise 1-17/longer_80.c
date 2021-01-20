/*
 * Exercise 1-17. Write a program to print all input lines that are longer than 80
 * characters.
 * 
 * Author:      Leee
 * Date:        2021-1-17   Sun.
 * Filename:    longer_80.c
 * Page:        31
 */

#include <stdio.h>
#define MAXLINE 15      //maximum input line size
#define LONG    8       //longer than LONG
int n_getline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
    int len;        // current line length
    int max;        // maximum length seen so far
    int num_ll;     // count of long line
    char line[MAXLINE];                 // current input line
    char long_line[MAXLINE][MAXLINE];   // save lines longer than LONG

    max = 0;
    num_ll = 0;
    while ((len = n_getline(line, MAXLINE)) > 0)
        if (len > LONG)    // there was a line longer than 80
            copy(long_line[num_ll ++], line);
    for (int count = 0; count < num_ll; count ++ ){
        printf("%s", long_line[count]);
    }
    return 0;
}

// n_getline:   read a line into s, return length
int n_getline(char s[], int lim)
{
    int c, i;

    for (i = 0; (c=getchar())!=EOF && c!='\n'; ++ i )   // remove break the loop if length > lim-1
        if (i < lim-2)      // if length valid then storage character
            s[i] = c;
        else                // or keep var i equals to the max length
            -- i;
    if (c == '\n') {
        s[i] = c;
        ++ i;
    }
    s[i] = '\0';
    return i;
}

// copy:    copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++ i;
}