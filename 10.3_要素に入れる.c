//10.3_配列の要素に値を入れる
#include <stdio.h>
 
int main(void) {
    int i;
    int a[5];
    
    for(int i = 0; i < 5; i++) {
        printf("put num a[%d]:", i);
        scanf("%d", &a[i]);

        }
    for(int i = 0; i < 5; i++) {
       
        printf("%d\n", a[i]);
    }
}