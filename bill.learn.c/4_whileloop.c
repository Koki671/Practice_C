#include <stdio.h>
int main(void){
    int n = 5;
    while(n <= 10){
        printf("%d**2 =%d \n",n,n*n);
        n++;
    }
}
/*
for version
for(n =1; n <=5; n = n+1){
    printf("%d squared is %d",n,n*n);
}*/