#include <stdio.h>

int main(){
    int max_weight,current=0,weight,count=0;
    printf("Enter the maximum weight in kg: ");
    scanf("%d",&max_weight);

    while(current < max_weight){
        printf("Enter passenger's weight in kg: ");
        scanf("%d",&weight);
        current += weight;
        count++;
    }

    if(current != max_weight){
        count--;
    }

    printf("The elevator can carry %d passenger(s)",count);
}