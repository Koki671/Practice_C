#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
char str[] = "Once upon a time there was a polar bear ... ";
int len = strlen(str); // returns the length of str
FILE *ifp;
FILE *ofp;
ofp = fopen("story.txt", "w");
fputs("The Beatles on Ed Sullivan 1964!\n", ofp);
fclose(ofp);
ifp = fopen("story.txt", "r");
while (fgets(str, len, ifp) != NULL)
printf("%s", str);
fclose(ifp);
return EXIT_SUCCESS;
}
