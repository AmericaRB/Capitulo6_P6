#include <stdio.h>
#define MAX 100

void Elementos(int a[], int st, int l);

int main(){
    int a[MAX];
    int n, i;

    printf("Ingrese el numero de elementos del arreglo:");
     scanf("%d",&n);

    printf("Ingrese los %d elementos del arreglo:\n",n);
    for(i=0;i<n;i++){
	      printf(" elemento %d: ",i);
	      scanf("%d",&a[i]);
	            }

    printf("Los elementos en el arreglo son: ");
    Elementos(a, 0, n);

    return 0;
          }

void Elementos(int a[], int st, int l){
    if(st >= l){
        return;
               }
    printf("%d  ", a[st]);
    Elementos(a, st+1, l);
                                         }
