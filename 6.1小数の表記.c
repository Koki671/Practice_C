//小数点の表き
#include <stdio.h>
int main()
{
    printf("[%f]\n", 123.45);
    printf("[%.4f]\n", 123.45);
    printf("[%4f]\n", 123.45);
    printf("[%04f]\n", 123.45);
    printf("[%-4f]\n", 123.45);
}