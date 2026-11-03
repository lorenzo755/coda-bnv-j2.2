#include <stdlib.h> 
#include <stdio.h>

int main()
{
    char prenom[100];
    int age;

    printf("Bonjour, quel est votre prénom ? ");
    scanf("%s", prenom);

    printf("Bonjour %s, quel est votre âge ? ", prenom);
    scanf("%d", &age);

    int annee_fin = 2026 - age;
    int annee_debut = 2027 - age;

    printf("%s, si vous êtes de la fin d'année, votre année de naissance est %d sinon c'est %d\n", prenom, annee_fin, annee_debut);

    exit(0);
}
