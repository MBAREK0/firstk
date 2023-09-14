#include <stdio.h>

int main() {
    char nom[50];
    char prenom[50];
    int age ,numeroTel;
    char sexe;


    printf(" nom : ");
    scanf("%s", &nom);

    printf(" prénom : ");
    scanf("%s", &prenom);

    printf("age : ");
    scanf("%d", &age);

    printf("sexe (M/F) : ");
    scanf(" %c", &sexe);

    printf(" telephone : ");
    scanf("%d", &numeroTel);



    return 0;
}
