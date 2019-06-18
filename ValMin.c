#include <stdio.h>
#define MAX_SIZE 100
 
int Min(int array[], int index, int len);
 
 
int main(){
    int array[MAX_SIZE], n, max, min;
    int i;
 
    // Inputting size and elements of array
    printf("Ingrese el numero de elementos del arreglo: ");
    scanf("%d", &n);
    printf("Ingrese los %d elementos del arreglo:\n",n);
    for(i=0; i<n; i++)
    {
       printf(" elemento %d : ",i);
        scanf("%d", &array[i]);
    }
 
    min = Min(array, 0, n);
 
    printf("EL valor minimo en el arreglo es: %d\n", min);
 
    return 0;
}
 
int Min(int array[], int index, int len)
{
    int min;
 
    if(index >= len-2)
    {
        if(array[index] < array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }
 
    min = Min(array, index + 1, len);
 
    if(array[index] < min)
        return array[index];
    else
        return min;
}
