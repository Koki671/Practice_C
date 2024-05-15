#include <stdio.h>

int main(void)
{
    int i;
    int vx[7];
    
    for (i = 0; i < 7; i++) {   // 各要素に値を読み込む
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }
    for (i = 0; i < 3; i++) {   // 配列を逆順に並べ替える
        int temp = vx[i];
        vx[i] = vx[6 - i];
        vx[6 - i] = temp;
    }
    
    for (i = 0; i < 7; i++) {
        printf("vx[%d]=%d\n", i, vx[i]);
    }
    
    return (0);
}
