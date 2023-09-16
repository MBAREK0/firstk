#include<stdio.h>
int main()
{
    char x;
     printf("entre el caractere x:");
    scanf("%c",&x);


   switch(x)
   {
        case'a':
        case'A':
        case'e':
        case'E':
        case'i':
        case'I':
        case'u':
        case'U':
        case'o':
        case'O':
        case'y':
        case'Y':
            printf("le caractere est voyelle ");break;
        default:
             printf("le caractere est consont ");break;



   }
   return 0;
   }
