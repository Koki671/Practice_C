//再帰的な階上の問題　５！etc
#include <stdio.h>
int fact(int n) {
    if(n == 0) {
        return 1; // 0! = 1
    }
    else {
        return n * fact(n-1); // ここで fact 自身を呼び出す
    }
}

int main(void){
    int num;
    printf("何の階上？"); 
    scanf("%d", &num);
    printf("%dの階上は%d",num, fact(num));
    return 0;
}