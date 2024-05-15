//for 文を使って数分＊を表示
//putchar関数は文字を1文字標準出力に出力する関数です。
//puts or printf の一文字バージョン
#include <stdio.h>

int main(){
    int a;
    int i;
    printf("入力sei:"); scanf("%d", &a);
    for(i = 1; a >= i; i++)
        printf("*");
    
}