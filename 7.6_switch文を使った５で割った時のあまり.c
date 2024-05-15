// switch文
//switch(条件式){ case 条件式 = 値： printf("Koki Ikemen")
#include <stdio.h>

int main(void)

{
int x;
printf("実数を入力してください。\n"); scanf("%d", &x);
switch (x%5) {
    //case 値(x%5 == 0ということ)
case 0:
printf("%dを５で割った余りは０です。\n", x);
break;
case 1:
printf("%dを５で割った余りは１です。\n", x);
break;
case 2:
printf("%dを５で割った余りは２です。\n", x);
break;
case 3:
printf("%dを５で割った余りは３です。\n", x);
break;
case 4:
printf("%dを５で割った余りは４です。\n", x);
break;

default:
printf("正実数のみ入力してください。\n");
break;
}
}

