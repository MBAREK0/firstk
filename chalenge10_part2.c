#include<stdio.h>
int main()
{
    int dd , mm , yy ;

    printf("entrer the date : ");
    scanf("%d/%d/%d",&dd,&mm,&yy);

   switch(mm)
   {
 case 1:
    printf("%d-January-%d",dd,yy);break;
    case 2:
    printf("%d-February-%d",dd,yy);break;
    case 3:
    printf("%d-March-%d",dd,yy);break;
    case 4:
    printf("%d-April-%d",dd,yy);break;
    case 5:
    printf("%d-May-%d",dd,yy);break;
    case 6:
    printf("%d-June-%d",dd,yy);break;
    case 7:
    printf("%d-July-%d",dd,yy);break;
    case 8:
    printf("%d-August-%d",dd,yy);break;
    case 9:
    printf("%d-September-%d",dd,yy);break;
    case 10:
    printf("%d-October-%d",dd,yy);break;
    case 11:
    printf("%d-November-%d",dd,yy);break;
    case 12:
    printf("%d-December-%d",dd,yy);break;
    default:
    printf("date not found");break;
   }

}
