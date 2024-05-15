//文字列の配列
#include <stdio.h>

int main(void) {
    int i;
    //3行６列(3っつの文字、最大で５文字)
    char name[][6] = {"Taiki","Kouki","Korou"};
    for(i = 0; i < 3; i ++){
        printf("お名前は%s\n", name[i]);
   
    }
    printf("%c",name[0][1]);
    return 0;
}


    
    