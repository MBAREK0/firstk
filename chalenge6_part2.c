#include<stdio.h>
int main()
{
    float num;
     printf("entrer une nombre : ");
     scanf("%f",&num);
     if(num > 0){
            printf("%f est un positif nombre \n ",num);
     }
     else if(num < 0){
            printf("%f est un negatif nombre \n ",num);
         }
         else
            printf("le nombre est égal à zéro ");

}
