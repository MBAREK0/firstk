#include<stdio.h>
int main()
{
    char x;
    printf("entrez le caracter : ");
    scanf("%c",&x);
    int y=x;
    if(y>64 && y<91)
        printf("%c est un alphabet majuscule ",x);
    else if(y>96 && y<123)
        printf("%c est un alphabet minuscule ",x);
    else
        printf("%c est non alphabet",x);
}
