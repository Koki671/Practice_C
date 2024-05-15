//foryやwhileの後には；置かない
//何も置かないor{}デクくる


#include <stdio.h>
int main(){
    int a;
    printf("入力してください"); scanf("%d", &a);
    if(a%2==1){
        a--;
    }
    printf("%d",a);

    while(a>=0){
        printf("%d",a);
        printf("\n");
        
        a-=2;
    }

   
    return 0;
}
/*答え(for loop)
int i;
int n;
printf(整数は);　scanf("%d",&n);

for(i = 2; i<=n; i+=2)
    printf("%d",i);
    putcar("\n");
    return 0;
}
}
*/