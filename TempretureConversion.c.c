
#include <stdio.h>

int main()
{
    //declared two variable
    
  int celsius,fahrenheit;
  
  // input and output
  
  printf("Get a User input in celsius:\n");
  scanf("%d",&celsius);
  
  // formula of celsius to fahrenheit converter
  
  fahrenheit=(celsius * 9/5) +32;
  printf("celsius = %d\nfahrebheit = %d",celsius,fahrenheit);
   

    return 0;
}