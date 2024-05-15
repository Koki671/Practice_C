#include <stdio.h>
 
void ast(int n){
    while(n>0)
        putchar(('*'));
        n--;
    
 }
int main(void) {
    int i;
    int j;
    scanf("%d", &j);
    for(i = 0; i < j; i++){
        ast(j);
    }
}
