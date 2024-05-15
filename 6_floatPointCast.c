//Float point 
#include <stdio.h>
int main()
{
    //intは小数点切り捨て
    int x;
    //doubleはfloat型
    double y;
    x = 9.99;
    //scanfの時は%ldにする
    printf("yの値:"); scanf("%lf",&y);
    puts("二つnumber");

    printf("intは整数だけ%d\n",x);
    
    //float pointの時は％fにする
    printf("doubleは小数点も%f\n",y);
    
    //intとdoubleの混合の式はdouuble型に格上げされる x: int -> double x = 9 -> 9.00
    //より余裕のある方に格納
     printf("x/y = %f\n",x/y);

    a = 1;
    b = 2;
//2.0のせいで答えはfloat型に
    printf("The average is %f", (a+b)/2.0);


/*cast　型の変更ができる
ex)  c = (double)(a + b) = 3.00
     (int)(c) = 3
     

*/  
    return 0;
}