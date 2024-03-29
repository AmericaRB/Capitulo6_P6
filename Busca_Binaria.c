#include <stdio.h>
int binarySearch(int*, int, int, int, int);

int main()
{
    int arr1[10], i, n, md, c, low, hg;

 
    printf("Ingrese el numero de elementos del arreglo:");
    scanf("%d", &n);
    printf("Ingrese los %d elementos del arreglo:\n", n);
    for (i = 0; i < n; i++) 
    {
        printf(" element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    printf("Ingrese el numero que desea buscar: ");
    scanf("%d", &md);
    low = 0, hg = n - 1;
    c = binarySearch(arr1, n, md, low, hg);
    if (c == 0)
        printf(" El numero no existe en el arreglo.\n\n");
    else
        printf(" Se ecnontro el numero en el arreglo.\n\n");
    return 0;
}

int binarySearch(int arr1[], int n, int md, int low, int hg)
{
    int mid, c = 0;
    if (low <= hg) 
    {
        mid = (low + hg) / 2;
        if (md == arr1[mid]) 
        {
            c = 1;
        }
        else if (md < arr1[mid]) 
        {
            return binarySearch(arr1, n, md, low, mid - 1);
        }
        else
            return binarySearch(arr1, n, md, mid + 1, hg);
    }
    else
        return c;
}
