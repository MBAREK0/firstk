
#include <stdio.h>
#include<stdlib.h>
int main() {


int x1,x2,y1,y2,mn;
printf("entre M(x1;y1) \n");
printf("entre x1 : ");
scanf("%d",&x1);
printf("entre y1 :");
scanf("%d",&y1);
printf("entre N(x2;y2) \n");
printf("entre x2 : ");
scanf("%d",&x2);
printf("entre y2 : ");
scanf("%d",&y2);
mn = sqrt(pow((x2-x1),2))+sqrt(pow((y2-y1),2));
printf("la distance entre M et N ast : %d ",mn);


    return 0;
}
