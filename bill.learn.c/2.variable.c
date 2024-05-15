#include <stdio.h>
int main(void){
    //intのサイズは１４くらいだからもし123333333333とかだったらより大きい入れ物に
    //入れなキャ行けない ex long int もっとおおきいと　longlong int
    int x;
    float y;
    x = 12;
    y = 0.22223232344;
    //数学は細かい方がいいからdouble使う
    //always use doublefloat 7 digit double 15 degits
    //%fを代わりに使う
    printf("%.1f\n ",y);


    int a = 3;
    float b = 2.2234;
    int z;
    //もし二つの型がある時
    printf("%d",z);

}