#include <stdio.h>
#include "banner.h"

int len(char *str){
    int l = 0;
    while(*str){
        l++;
        str++;
    }
    return l;
}

void banner_vertical(char *text){
    printf("+---+\n");
    for(int i=0;i<len(text);i++){
        printf("| %c |\n",text[i]);
    }
    printf("+---+\n");
}

void banner_horizontal(char* text){
    printf("+-");
    for(int i=0;i<len(text);i++){
        printf("-");
    }
    printf("-+\n| ");
    for(int i=0;i<len(text);i++){
        printf("%c",text[i]);
    }
    printf(" |\n+-");
    for(int i=0;i<len(text);i++){
        printf("-");
    }
    printf("-+\n");
}

/*
Compile:
gcc -c banner.c
*/