/*Angela Lissette Reyes Gómez Practica 10, 18 de Octubre 2024*/
#include <stdio.h>

int main ()
{
  /*inicialización de una matriz 3x3*/
    int arr[3][3]={{1,2,3},{1,2,3} ,{1,2,3}};
    int i,j;

    for(i=0; i<3; i++) 
    { 
        for(j=0; j<3; j++) 
        {
            printf("%d |",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

