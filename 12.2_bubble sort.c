/* 
使用法
SortBubble(ソートする配列、ソートする個数);
*/
#include <stdio.h>
#define NUM 5
void SortBubble(int a[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j + 1] < a[j])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main(void){
    int i;
    int height[NUM];
    for(i = 0; i < NUM; i++){
        printf("%d版目のHeight入力:", i); scanf("%d", &height[i]);
    }
    SortBubble(height, NUM);
    for(i = 0; i < NUM; i++){
    printf("%d版目のHeight:%d\n", i, height[i]); 
    }

}