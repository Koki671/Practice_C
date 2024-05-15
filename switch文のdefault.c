/*
defaultの使い方
defaultはif文でいうelseの意味
Koki Itagaki 01/02/2023
*/

#include <stdio.h>

int main(void){
  int num =5;

  
  printf("num = %d\n",num);

  switch(num){
    case 1:
      printf("数値は1です\n");
      break;
    case 2:
      printf("数値は2です\n");
      break;
    case 3:
      printf("数値は3です\n");
      break;
    default:
      printf("他の値です\n");
  }
}
