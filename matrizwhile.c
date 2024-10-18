/*Angela Lissette Reyes Gómez, Practica 10; 18 de octubre*/
#include <stdio.h>

int main ()
{
  
    int arr[3][3]={{1,2,3},{1,2,3} ,{1,2,3}};
    int i= 0, j;

    while(i < 3) 
    { 
      j=0; 
      while (j < 3)
        {
            printf("%d |",arr[i][j]);
            j++;
        }
        printf("\n");
      i++;
    }
    return 0;
}
