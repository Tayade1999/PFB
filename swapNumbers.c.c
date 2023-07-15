
#include <stdio.h>

int main()
{
   int a,b, temp;
   printf("Get input from user:\n");
   scanf("%d%d",&a,&b);
  // result = void(int a,int b);
  printf("Before swap first number = %d\nBefore swap second swap = %d",a,b);
   temp = a;
   a = b;
   b = temp;
   printf("\nAfter swap first number = %d\nAfter swap second number = %d",a,b);
   

    return 0;
}
