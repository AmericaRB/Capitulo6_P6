#include <stdio.h>

 int suma(int a[],int n,int i);

int main(){

    int a[1000],i,n,s;

    printf("Ingrese el tamaño del arreglo:");
     scanf("%d", &n);
 
    printf("Ingrese los elementos del arreglo: ");
    for(i=0; i<n; i++){
     scanf("%d", &a[i]);
                      }
 
    s=suma(a,n,0);
     printf("La suma del arreglo es :%d \n",s);
    return 0;
          }

 int suma(int a[],int n,int i){
           if(i<n){
        return a[i]+suma(a,n,++i);
                  }
        return 0;
                               }

