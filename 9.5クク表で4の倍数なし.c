//九九表で4の倍数をスキップ
#include <stdio.h>

int main(void){

  /* 変数を定義する */
  int i, j;

  /* 二重ループで九九の一覧表を出力する */
  for(i=1; i<10; i++){
    for(j=1; j<10; j++){
        if((i*j)%10 == 4 ||(i*j)/10 == 4){
            printf("   ");
            continue;
        }
        //もし4の倍数ならこれスキップされる
        printf("%3d", i*j);
    
    }
    printf("\n");
  }
  return 0;
}