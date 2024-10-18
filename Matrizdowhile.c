/*Angela Lissette Reyes Gómez, practica 10; 18 de octubre 2025*/
#include <stdio.h>

int main ()
{
  
    int arr[3][3]={{1,2,3},{1,2,3} ,{1,2,3}};
    int i= 0, j;
do
    { 
      j=0; 
        
      do
      
        {
            printf("%d |",arr[i][j]);
            j++;
        } 
        while(j < 3);
        printf("\n");
      i++;
    } while(i < 3);
    return 0;
}

