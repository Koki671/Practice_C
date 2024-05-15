#include <stdio.h>
int main(){
    int i;
    //5個の箱 もし配列の中み(v[1] = 8.2)だと　double v[1] で宣言
    int v[5];

    for(i=0; i<=4; i++){
    v[i]=i*i;
}

    printf("数２乗\n");

    for(i=0; i<=4; i++){
        printf("v[%d] = %d\n",i,v[i]);
}
return 0;
}
