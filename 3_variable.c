//variable
#include <stdio.h>

int main()
{
  int a,b,c;

  a = 1;
  // a は一つincrement している
  b = ++a;
  //a+1= a++ or ++a 
  c = b++;

  printf("a=%d b=%d c=%d\n",a,b,c);
  return 0;
}