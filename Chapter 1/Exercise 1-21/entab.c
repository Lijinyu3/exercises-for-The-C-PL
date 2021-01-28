/*
 * Exercise 1-21. Write a program entab that replaces strings of blanks by the
 * minimum number of tabs and blanks to achieve the same spacing. Use the
 * same tab stops as for detab. When either a tab or a single blank would suffice
 * to reach a tab stop, which should be given preference?
 * 
 * Author:      Leee
 * Date:        2021-1-16 Tues.
 * Filename:    entab.c
 * Page:        34
 */

#include <stdio.h>

#define TABSTOP 8
#define MAXLINE 100

void entab(char to[], char from[], int length);
int n_getline(char line[], int maxline);

int main(){
    char a[MAXLINE], b[MAXLINE][MAXLINE];
    int i = 0;
    int length;
    while ((length = n_getline(a, MAXLINE)) > 0){
        printf("%s", a);
        entab(b[i++], a, length);
    }
    for(int j = 0; j < i; j ++ )
        printf("%s", b[j]);
}

int n_getline(char line[], int lim){
    char c;
    int i;
    for (i = 0; (c=getchar()) != EOF && c != '\n'; ++ i){
        if (i < lim-2)
            line[i] = c;
        else
            -- i;
    }
    if (c == '\n')
        line[i++] = c;
    line[i] = '\0';
    return i;
}

void entab(char to[], char from[], int length){
    int space_count, column_count;
    int n_to, n_from;
    space_count = column_count = 0;
    for (n_to = n_from = 0; from[n_from] != EOF && n_from <= length; n_from++ , space_count %= 8){
        if (from[n_from] == ' '){
            ++space_count;
            ++column_count;
            if (column_count == 8){
                to[n_to++] = '\t';
            }
        }else if(from[n_from] == '\t'){
            column_count = 0;
            space_count = 0;
            to[n_to++] = from[n_from];
        }else{
            if (space_count)
                while(--space_count >= 0)
                    to[n_to++] = '#';
            to[n_to++] = from[n_from];
            ++column_count;
        }
    }
    // if (space_count)
    //     while(--space_count >= 0)
    //         to[n_to++] = '#';
    to[n_to] = '\0';
}