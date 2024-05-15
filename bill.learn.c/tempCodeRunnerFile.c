//scope
#include<stdio.h>

int main(){
    int n = 1;
    int sum = 0;
    while(n<=5){
        int nsqu = n*n;
        sum = sum + n;
        n++;
    }
    printf("nsqu is%d", nsqu);
}