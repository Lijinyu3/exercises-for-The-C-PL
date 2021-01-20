/*
 * Exercise 1-19. Write a function reverse(s) that reverse the character
 * string s. Use it to write a program that reverses its input a line at a time.
 * 
 * Author:      Leee
 * Date:        2021-1-21 Thur.
 * Filename:    reverse_char.c
 * Page:        31
 */

#include <stdio.h>
#define MAXLINE 10

int n_getline(char line[], int maxline);
void reverse(char to[], char from[], int length);

main(){
    int len;
    int count;
    char line[MAXLINE];
    char output[MAXLINE][MAXLINE];

    count = 0;
    while ((len=n_getline(line, MAXLINE)) > 0)
        reverse(output[count++], line, len);

    for (int i = 0; i < count; i ++ )
        printf("%s", output[i]);
}

int n_getline(char s[], int lim){
    int c, i;

    for (i = 0; (c=getchar())!=EOF && c!='\n' && c!=EOF; i ++ ){
        if (i < lim-2){     // if length valid then storage character
            s[i] = c;
        }
        else                // or keep var i equals to the max length
            -- i;
    }
    if (c == '\n')
        s[i++] = '\n';
    s[i] = '\0';
    return i;
}

void reverse(char to[], char from[], int length){
    to[length] = '\0';
    to[length-1] = '\n'; 
    int l = length-2;
    for (int i = 0; i < length-1; l --, i ++ )
        to[i] = from[l];
}