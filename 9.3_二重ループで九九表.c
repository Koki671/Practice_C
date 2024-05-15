//二重forloop
//jは横にループしてるのをだす
//iが変わるごとにより改行することで横の列で９９が欠ける

#include <stdio.h>

int main(void){

  /* 変数を定義する */
  int i, j;

  /* 二重ループで九九の一覧表を出力する */
  for(i=1; i<10; i++){
    for(j=1; j<10; j++){
      printf("%3d", i*j);
    
    }
    printf("\n");
  }
  return 0;
}