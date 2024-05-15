/*
getchar*/
#include <stdio.h>

int main(void)
{
	int moji;

	//	キーボード入力待ち
    //入力した文字を一つずつ取り出してなくなるまで
    while((moji = getchar()) !=EOF)
	//	入力された文字を表示
	    printf("取得した文字：%c\n", moji);

	return 0;
}
