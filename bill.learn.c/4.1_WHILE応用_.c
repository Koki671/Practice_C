//4.2_1^2 + 2^2 + 3^2
//want int i = 1;
//sum = sum + i*i
//i+*1;
//sum = sum * i*i; ...6times
#include <stdio.h>
int main(void){
    int sum =0;
    
    int i =1;
    while(i <=6){
        sum = sum + i*i;
        printf("The sum is %d for %d*%d\n",sum,i,i );
        i++;
    }
}