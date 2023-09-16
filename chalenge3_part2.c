#include<stdio.h>
int main()
{
    int a,b,s;
    printf("entre el nombre a:");
    scanf("%d",&a);
    printf("entre el nombre b:");
    scanf("%d",&b);
        if(a==b)
        {
            s=3*(a+b);
            printf("la somme est : somme = %d",s);

        }
        else {
           s=(a+b);
           printf("la somme est : somme = %d",s);

        }
}
