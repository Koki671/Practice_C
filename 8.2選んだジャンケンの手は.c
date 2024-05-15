/*
グー　チョキ　パーで選んだものを表示
*/

#include <stdio.h>

int main(void){
    int a;
    

    do{
        printf("a is"); scanf("%d",&a);
    }while(a > 2|| a<0);
    switch(a){
        case 0:
        printf("グーです\n");
        break;
        case 1:
        printf("チョキです\n");
        break;
        case 2:
        printf("パーです\n");
        break;
    }
   
    puts("を選びました");

    return 0;
  }
