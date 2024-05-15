//10.2 配列の初期化

#include <stdio.h>
 
int main(void) {
    // 宣言と同時に初期化する方法
    //これでarray ができる
    int arr[5] = {0, 1, 2, 3, 4};
    //初期化してないとこは０になる
    int arra[5] = {0,1};
    // 全ての要素をゼロで初期化する方法
    
    for(int i = 0; i < 5; i++) {
       
            printf("%d\n", arr[i]);

        }
    for(int i = 0; i < 5; i++) {
       
        printf("%d\n", arra[i]);
    }
}