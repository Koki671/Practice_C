//static を関数の中の変数につけるとglobal variableとオジ働きする
// numはprogram(実行される)が終わるまでリセットされない
#include <stdio.h>

void Func()
{
    //静的変数
    static int num = 0;
    num++;

    printf("%d\n", num);
}

int main()
{
    Func();
    Func();
    Func();

    getchar();
}
