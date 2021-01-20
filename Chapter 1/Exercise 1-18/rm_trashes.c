/*
 * Exercise 1-18. Write a program to remove trailing blanks and tabs from each
 * line of input, and to delete entirely blank line.
 * 
 * Author:      Leee
 * Date:        2021-1-21 Thur.
 * Filename:    rm_trashes.c
 * Page:        31
 */

#include <stdio.h>
#define MAXLINE 15   //maximum input line size

int n_getline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
    int len;        // current line length
    int count;      // count lines
    char line[MAXLINE];     // current input line
    char output[MAXLINE][MAXLINE];  // longest line saved here
    count = 0;
    while ((len = n_getline(line, MAXLINE)) > 0){
        if (len != 1)
            copy(output[count++], line);
    }
    for (int i = 0; i < count; i ++ )
        printf("%s", output[i]);
    return 0;
}

// n_getline:   read a line into s, return length
int n_getline(char s[], int lim)
{
    int c, i;
    int blank_flag = 1;     // flag of determine if the input of this line is empty
    for (i = 0; (c=getchar())!=EOF && c!='\n'; ++ i )   // remove break the loop if length > lim-1
        if (i < lim-2){     // if length valid then storage character
            s[i] = c;
            if (s[i] != ' ' && s[i] != '\t')
                blank_flag = 0;
        }
        else                // or keep var i equals to the max length
            -- i;
    if (c == '\n') {
        s[i] = c;
        ++ i;
    }
    s[i] = '\0';
    
    if (blank_flag && i)
        return 1;
    return i;
}

// copy:    copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++ i;
    while (i -- ){
        if (to[i+1] == '\n' && (to[i] == ' ' || to[i] == '\t')){
            to[i] = '\n';
            to[i+1] = '\0';
        }
    }
}