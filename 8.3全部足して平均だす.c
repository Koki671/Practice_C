#include <stdio.h>

int main(void){
    int sum = 0;
    int num = 0;
    int retry;
    do{
        int a;
        printf("a is"); scanf("%d",&a);

        sum += a;
        num++;
        printf("続ける？（0yes）");
        printf("続ける？（0yes）");
        scanf("%d", &retry);
    }while(retry==0);

    printf("合計は%d averageは%d", sum,sum/num );
    return 0;
}



