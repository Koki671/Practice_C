//入力値の逆すうを求める
#include <stdio.h>
int main(){
    int a;
    do{
        printf("入力してください"); scanf("%d", &a);
    }while(a<0);

    printf("逆から読むと");
    while(a>0){
        printf("%d",a%10);
        //もしaが1234なら4を先にprintしてa/=10で
        //123にする
        a = a/10;
    }
    return 0;
}