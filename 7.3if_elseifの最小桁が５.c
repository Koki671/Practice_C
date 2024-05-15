#include <stdio.h>
int main(void)
{
  int a;
  
 
  printf("整数を入力してください = ");
  scanf("%d",&a);
 
  if((a%10) == 5){
    printf("aの最小桁は5\n");
  } else if((a%10) == 3) {
    printf("aの最小桁は3\n");
    }else{
    printf("違うよばか\n");
  }
 
  return 0;
}