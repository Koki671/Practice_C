//関数形式マクロ... マクロを関数のように扱える(にてる式を２、三回と書かなくていい)
#include <stdio.h>

//式のところ(x)にする
//もし　define sum(x,y) x + y だと
//     sum(x,y) * sum(z,n) = x + y * z + n になってしまう
#define sqr(x) ((x)*(x)) //戻り値とかint型とか気にしなくていい

int main(void) {
    int i;
    double j;
    printf("入力");
    scanf("%d", &i);
    printf("2 times is%d\n", sqr(i));

    printf("入力double");
    scanf("%lf", &j);
    printf("2 times is%f\n", sqr(j));
    

    return 0;
}
 

/*こうやって二回同じのやる代わりにマクロ使え
 //The similar stracture twice
int sqrint(int n){
    return (n*n);
        
 }

int double(double n){
    return(n*n);
}
int main(void) {
    int i;
    double j;
    printf("入力");
    scanf("%d", &n);
    printf("2 times is%d\n", sqrint(n));

    return 0;
}
*/