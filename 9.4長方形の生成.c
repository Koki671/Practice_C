//build a 長方形
#include <stdio.h>

int main(void){

  /* 変数を定義する */
  int i, j;
  int width,height;
    printf("横の長さ:"); scanf("%d", &width);
    printf("縦の長さ:"); scanf("%d", &height);
  /* jが横、iが縦*/
  for(i=1; i<height; i++){
    for(j=1; j<width; j++){
      printf("*");
    
    }
    printf("\n");
  }
  return 0;
}