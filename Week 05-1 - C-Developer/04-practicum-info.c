#include <stdio.h>
#include <string.h>
#include "practicum.h"

int main(int argc,char* argv[]){
    int result;
    if(argc == 1){
        printf("Usage: %s type name\n",argv[0]);
        return 1;
    }
    else if(argc != 3){
        fprintf(stderr,"Invalid type\n");
        return 2;
    }
    else if(strcmp(argv[1],"lecturer") == 0){
        result = practicum_get_lecturer_id(argv[2]);
    }
    else if(strcmp(argv[1],"topic") == 0){
        result = practicum_get_topic_id(argv[2]);
    }
    else{
        fprintf(stderr,"Invalid type\n");
        return 2;
    }

    if(result == -1){
        fprintf(stderr,"Name not found\n");
        return 3;
    }
    printf("%d\n",result);
    return 0;
}

/* อย่าลืมลบ 04- ออกด้วย

Compile (Static Library Link):
gcc -static -Ipracticum-1.0.0/include 04-practicum-info.c -Lpracticum-1.0.0/lib -lpracticum -o practicum-info-static

Compile (Dynamic Library Link):
gcc -Ipracticum-1.0.0/include 04-practicum-info.c -Lpracticum-1.0.0/lib -lpracticum -o practicum-info-dynamic

Run Code (Dynamic Library Link):
LD_LIBRARY_PATH=practicum-1.0.0/lib ./practicum-info-dynamic

*/