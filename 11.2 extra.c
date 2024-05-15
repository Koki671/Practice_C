
#include <stdio.h>

int input(void)
{
    int num;
    
    do {
        printf("非負の整数を入力してください：");
        scanf("%d", &num);
        if (num < 0)
            puts("負の数を入力しないでください。");
    } while (num < 0);
    return num;
}

int reve(int num){
    int tmp = 0;
    if(num > 0){
        do
    }


}
int main(void){
    printf("%dを逆から読むと", num);
    do {
        printf("%d", num % 10); // 最下位の桁の値を表示
        num = num / 10;         // 右に1桁ずらす
    } while (num > 0);
    puts("です。");
    
    return (0);
}
