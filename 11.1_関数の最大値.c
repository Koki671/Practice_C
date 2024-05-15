#include <stdio.h>

//define でこのdefineより下の式ではmax = 100とする

int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}


int main(void)
{
    
    int n1;
    int n2;
    printf("入力せいn1:"); scanf("%d",&n1);
    printf("入力せいn2:"); scanf("%d",&n2);
    printf("大きいのは%d\n",max(n1,n2));
    
return 0;
}