#include <stdio.h>

int main() {

 float F,C;
 C = (F-32)/1.8;
 printf("entrer la temperature en Fahrenheit F = ");
 scanf("%f",&F);
 C = (F-32)/1.8;
 printf("la température en degre Celsius C = %f ",C);
 if(C<0)
    {printf("la température et tres froid ");};
  if(C>=0 && C<28)
  {printf("la temperature et froid ");};
  if(C>=28 && C<38)
  {printf("la temperature et  chaud ");};
   if(C>=38)
   {printf("la temperature et tres chaud ");};
    return 0;
}
