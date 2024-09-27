#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("entrez le nombre :");
    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++)
    {
    if (n % i == 0)
    {
     printf("le nombre n'est pas premier\n");
    }
    else printf("le nombre est premier\n");
    }
    return 0;
}
