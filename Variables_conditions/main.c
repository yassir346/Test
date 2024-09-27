#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    scanf("%d", &age);

    if (age < 18) printf("vous n'etes pas elligible");
    else printf("vous etes elligibe");
    return 0;
}
