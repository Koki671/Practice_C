#include <stdio.h>

int main(void){
  int num = 50;
  int i = 1;

  printf("数値=%dの約数を求めます\n", num);

  while (i <= num){
    if (num % i == 0){
      printf("約数=%d\n", i);
    }

    i++;
  }

  return 0;
}