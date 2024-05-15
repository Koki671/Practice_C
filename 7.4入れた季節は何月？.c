#include <stdio.h>
 
/*春：3-5 夏：6-8 秋：9-11 冬：12-2とする。*/
int main(void){
    int m;
    printf("月を入力してください。(1 - 12)\n");
    scanf("%d",&m);
    if(m>=3 && m<=5){
        printf("%d月は春です。\n",m);
    }else if(m>=6 && m<=8){
        printf("%d月は夏です。\n",m);
    }else if(m>=9 && m<=11){
        printf("%d月は秋です。\n",m);
    }else if(m==12 || (m>=1 && m<=2)){
        printf("%d月は冬です。\n",m);
    }else{
        printf("月は1-12の英数字で入力してください。\n");
    }
    return 0;
}
