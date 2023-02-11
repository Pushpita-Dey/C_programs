#include <stdio.h>
#define PI  3.14
int main()
{

  int a = 12;
  const float b = 3.4;

 /// b=9.8;   /// can't do this since b is a constant

  printf("value of b is: %f\n",b) ;

///  PI = 7.33;   /// can't do this since PI is a constant

  printf("%f",PI);

}
