#include<stdio.h>5
#include<stdlib.h>
int main()
{
    double a,b,c,delta,x1,x2;
    printf("entre el nombre a= ");
      scanf("%lf",&a);
    printf("entre el nombre b= ");
       scanf("%lf",&b);
    printf("entre el nombre c= ");
       scanf("%lf",&c);
       // cas de a==0
      if(a==0 && b==0 & c==0){
          printf("pleas try again");
      }
        else if(a==0 && b==0 & c!=0){
          printf(" BIG ERROR!!!");
      }
         else if(a==0 && b!=0 & c!=0){
          x1=-c/b;
          printf("the solution is X1 = %lf ",x1);
      }
        else if(a==0 && b!=0 & c==0){
          x1=0;
          printf("the solution is X1 = %lf ",x1);
      }
        else if(a!=0) {

            delta=pow(b,2)-4*a*c;
            if(delta < 0)
            printf("don't have a soulition in R groube");

            else if(delta =0){
                x1=-b/2*a;
                printf("the solution is X1 = %lf ",x1);

            }
            else if(delta > 0){
                x1=(-b-sqrt(delta))/2*a;
                x2=(-b+sqrt(delta))/2*a;
                printf("the solution is X1 = %lf or X2 = %lf  ",x1,x2);
            }

        }

}

