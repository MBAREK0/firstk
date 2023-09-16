#include <stdio.h>

int main() {


int a,b,somme,div,mod,mins,mult;
printf("saisie le nombre a ");
scanf("%d",&a);
printf("saisie le nombre b ");
scanf("%d",&b);
somme=a+b;
printf("a+b= %d\n",somme);
div=a/b;
if(b==0)
    printf("ereur\n");
else
    printf("a/b= %d\n",div);

mod=a%b;
if(b==0)
    printf("ereur\n");
else
    printf("a%b= %d\n",mod);
mins=a-b;
printf("a-b= %d\n",mins);
mult=a*b;
printf("a*b= %d\n",mult);






    return 0;
}

