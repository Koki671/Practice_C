#include <stdio.h>
int main()
{
    int x;
    int y;
    puts("二つnumber");
    printf("x"); scanf("%d", &x);
    printf("y"); scanf("%d", &y);

    printf("x+y = %d \n" , x+y);
    printf("x*y = %d \n" , x*y);
    printf("x-y = %d \n" , x-y);
    //5/3 = 1
    printf("x/y = %d \n" , x/y);
    // 5%2 =1
    
    //一気に二つ表す
    printf("x-y = %d,x%%y = %d \n" , x-y,x%y);


    // 最小の桁求められる
     
    int n;
    scanf("%d",&n);
    printf("最小の桁は%d",n%10);
    return 0;
}
