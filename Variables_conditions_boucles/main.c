#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;

    printf("entrez le nombre :");
    scanf("%d", &n);

    int y  ;
    int h = 0 ;
    int o = 2 ;


    for (int i = 2 ; i < n - 1 ; i++){

      ////////
    y = n % i   ;

    if ( y == 0){
    o = pow(h , i ) ;

    }
    ///////

    }
 if (o != 2){
    printf("non premeir");

    }

     else if (o == 2){

    printf("premier");

    }

    return 0;
}
