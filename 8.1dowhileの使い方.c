/*
8.1 do while

do{
  実行する処理1;
  実行する処理2;
  実行する処理3;
  ....
}while (条件式);

do while はwhile文と違ってatleast 一回はdo文を通る

Koki Itagaki 01/03/2023
*/


#include <stdio.h>
 
int main(void) {
    int i = 0;
    do {
        printf("%d回目の処理です\n", i + 1);
        i++;
    } while(i < 3);
    printf("処理が終了しました\n");
    
    return 0;
}


