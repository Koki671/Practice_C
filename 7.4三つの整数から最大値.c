#include <stdio.h>
int main(void)
{
 /*int a,b,c,max;
  
 
  printf("整数を入力してください = "); scanf("%d",&a);
  printf("整数を入力してください = "); scanf("%d",&b);
  printf("整数を入力してください = "); scanf("%d",&c);
  max = a;
  if(b>max){
    max = b;
  }if(c>max){
    max = c;
  }
  printf("max is %d\n",max);
 */
 //もう一つの方法(三つintがある時)
 int a,b,max;
  
 
  printf("整数を入力してください = "); scanf("%d",&a);
  printf("整数を入力してください = "); scanf("%d",&b);
  //(a>bでaの方が大きいと？のあとのaを返す、もし違うと：の後を返す)
  max = (a>b) ? a: b;
  printf("max is %d\n",max);
  return 0;
}