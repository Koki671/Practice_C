#include <stdio.h>
int main(void){
     int a = 3;
    float b = 2.2234;
    int z;
    z = a/b;
    //もし二つの型がある時はより容量入る方になる
    //でもzはintだからa/bはまたintに戻る
    printf("%d,%f",z, a/b);
}
