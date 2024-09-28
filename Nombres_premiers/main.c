#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Nombre, T;
    X = 0;

    printf("Entrez un nombre positive");
    scanf("%d", &Nombre);

    if (Nombre < 2){
        printf("le nobmre n'est pas premier");
    }

    else{

    for(int i = 2 ; i <= Nombre - 1 ; i++){
        T = Nombre % i;
        if (T == 0){
            X = 1;
        }
    }
    if ( X == 0){
        printf("OUI");
    }
        else{
            printf("NON");
        }
    }
    }
    return 0;
}


