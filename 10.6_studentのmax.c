//maxの求めかた
//五人の学生の最高点を出す
#include <stdio.h>
#define NUM 5

int main(void){
    int i;
    int student[NUM];
    
    printf("%d人の点数入れろ\n", NUM);
    for(i = 0; i < NUM; i++){
        printf("%d版目",i+1); 
        scanf("%d",&student[i]);
    }
    int max = student[0];
    for(i = 1; i < NUM; i++){
        if(student[i] > student[i-1]){
            max = student[i];
        }   
    }
    printf("maxは%d\n", max);
}
