#include <stdio.h>
int main(void){
    int sum = 0;
    
    int i =1;
    while(i <=6){
        printf("The  sum is %d for %d*%d",sum,i,i );
        sum = sum + i*i;
        i++;
    }
}