#include <stdio.h>
 
void ast(int n){
    while(n-->0)
        putchar('*');
        
    
 }
int main(void) {
    int i;
    int j;
    printf("入力");
    scanf("%d", &j);
    for(i = 1; i <= j; i++){
        ast(i);
        putchar('\n');
    }
    return 0;
}
