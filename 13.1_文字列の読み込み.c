#include <stdio.h>

int main(void) {
    //文字は４7文字まで　48文字目はnull string(\'0')が入る
    char name[48];
    printf("お名前は");
    //%sにして＆いらない
    scanf("%s", name);

    printf("こんちゃす[%s]\n", name);
    
    //書籍化表示
    char str[] = "12345";
    printf("%s\n", str);
    printf("%3s\n", str);  //最低３桁
    printf("%.3s\n", str); //最高3桁
    printf("%8s\n", str);  //最低８桁右寄せ
    printf("%-8s\n", str); //最低8桁左よせ

    return 0;
}