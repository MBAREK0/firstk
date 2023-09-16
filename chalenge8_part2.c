#include<stdio.h>
int main()
{
    float  moyenne;
    printf("entrez la moyenne => ");
    scanf("%f",&moyenne);

     switch((int)moyenne)
     {
         case 1:
         case 2:
         case 3:
         case 4:
         case 5:
         case 6:
         case 7:
         case 8:
         case 9:
                 printf("la mention est recale.");                   break;
         case 10:
         case 11:
                 printf("la mention passable.");                     break;
         case 12:
         case 13:
                 printf("la mention assez bien.");                   break;
         case 14:
         case 15:
                 printf("la mention est bien.");                     break;
         case 16:
         case 17:
         case 18:
         case 19:
         case 20:
                 printf("la mention est  très bien.");               break;
         default :
                 printf("le moyenne que vous entrez est incorrect"); break;


     }

}
