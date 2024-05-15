#include <stdio.h>
int main(void){
    int rownumber = 1;
    int counter;
    while(rownumber <= 10){
        counter =rownumber*1;
        while( counter<=rownumber*10){
            printf("%3d ",counter);
            counter = counter + rownumber;
            
        }
        rownumber += 1;
    }
//最後にprintf(\n)を置かないと最後に%くる0 1 5 14 30 55 %   
    printf("\n");
}