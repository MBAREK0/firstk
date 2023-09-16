#include<stdio.h>
int main()
{
     int annee , Mois , Jours , Heures , Minutes , Secondes ;

     printf("entrer les annee      : ");
     scanf("%d",&annee);
     printf("\n\n");
     Mois = annee*12;
     printf("annee en mois est     : %d \n",Mois);
     Jours = annee*365;
     printf("annee en Jours est    : %d \n",Jours);
     Heures = Jours*24;
     printf("annee en Heures est   : %d \n",Heures);
     Minutes = Heures*60;
     printf("annee en Minutes est  : %d \n",Minutes);
     Secondes = Minutes*60;
     printf("annee en Secondes est : %d ",Secondes);



}
