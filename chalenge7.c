#include <stdio.h>
int main()
{
    int x ,num1,num2,num3,test;
    printf("entre le nombre x : x = ");
    scanf("%d",&x);
    num3=x%10;
    test = x/10;
    num2=test%10;
    num1=test/10;
    printf("invers de x =%d%d%d",num3,num2,num1);

}
