/*
 * Exercise 1-20. Write a program detab that replaces tabs in the input with the
 * proper number of blanks to space to the next tab stop. Assume a fixed set of
 * tab stops, say every n columns. Should n be a variable or a symbolic parameter?
 * 
 * Author:      Leee
 * Date:        2021-1-22 Fri.
 * Filename:    detab.c
 * Page:        34
 */

    //4 blanks stop
	//1 tab stop
        //8 blanks stop
// obviously we can see 1 tab == 8 blanks
#include <stdio.h>
#define TABSTOP 8
#define MAXLINE 100

int detab(char to[], char from[], int length);
int n_getline(char line[], int maxline);
int main(){
    char line[MAXLINE];
    char output[MAXLINE][MAXLINE];
    int length, n_output;
    n_output = 0;
    while ((length = n_getline(line, MAXLINE)) > 0){
        detab(output[n_output++], line, length);
    }
    for (int i = 0; i < n_output; ++ i)
        printf("%s", output[i]);
}

int n_getline(char line[], int lim){
    char c;
    int i;
    for (i = 0; (c=getchar()) != EOF && c != '\n'; ++ i){
        if (i < lim-2)
            line[i] = c;
        else
            --i;
    }
    if (c == '\n')
        line[i++] = c;
    line[i] = '\0';
    
    return i;
}

int detab(char to[], char from[], int length){
    int i, j;
    for (i = 0, j = 0; i <= length; i ++, j ++){
        if (from[i] != '\t')
            to[j] = from[i];
        else{
            for (int k = j%TABSTOP; k < TABSTOP; k ++ )
                to[j++] = '-';
            j --;
        }
    }
    return j;
}