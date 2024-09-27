#include <stdio.h>
#include <stdlib.h>

int main()
{
    int largeur, longueur, air, perimetre;

    printf("entrez largeur :");
    scanf("%d", &largeur);
    printf("entrez longueur : ");
    scanf("%d", &longueur);

    perimetre = longueur * largeur;
    air = 2 * (longueur + largeur);

    printf("l'aire du rectangle est : %d\n", air);
    printf("perimetre du rectangle est : %d", perimetre);

    return 0;
}
