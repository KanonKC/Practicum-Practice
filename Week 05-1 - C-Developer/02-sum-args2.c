#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    if(argc == 1){
        fprintf(stderr,"Usage: ./sum-args2 num...\n");
        return 1;
    }

    int sum = 0;
    char *format = getenv("FORMAT");

    for(int i=1;i<argc;i++){
        sum += atoi(argv[i]);
    }

    if(format != NULL){
        while(*format != '%'){
            printf("%c",*format);
            format++;
        }
        format++;
        format++;
        printf("%d",sum);
        while(*format != '\0'){
            printf("%c",*format);
            format++;
        }
    }
    else{
        printf("%d\n",sum);
    }

    return 0;
}