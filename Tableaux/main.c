#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbre,max = 0, min = 0;

    printf("entrez le nombre d'elements du tableau :");
    scanf("%d", &nbre);

    int T[nbre];

    for (int i = 0 ; i < nbre ; i++)
    {
        scanf("%d", &T[i]);
    }


    for (int i = 0; i < nbre; i++)
    {
        if(max < T[i])
        {
            max = T[i];
        }
        else max = max;
    }
    printf("le plus grand nobmre est : %d", max);


    return 0;
}
