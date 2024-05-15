// if 文　 == と　!=
#include <stdio.h>
int main(void)
{
  int a;
  int b;
 
  printf("整数を入力してください = ");
  scanf("%d",&a);
  printf("整数を入力してください = ");
  scanf("%d",&b);
 
  if( a != b){
    printf("a,bは違うです\n");
  } else {
    printf("a,bは同じです\n");
  }
 
  return 0;
}