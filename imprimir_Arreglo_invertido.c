#include<stdio.h>

void invertir(int a[], int i, int f);
void Elementos(int a[], int st, int l);

int main(){
   int a[100], i, n;

    printf("Ingrese el numero de elementos del arreglo:");
     scanf("%d",&n);

    printf("Ingrese los %d elementos del arreglo:\n",n);
    for(i=0;i<n;i++){
	      printf(" elemento %d: ",i);
	      scanf("%d",&a[i]);
	            }

    invertir(a, 0, n-1);
    printf("El arreglo invertido es: \n");
    Elementos(a,0, n);
    return 0;
          }


void invertir(int a[], int i, int f){
   int c;
   if (i < f){
      c = a[i];
      a[i] = a[f];
      a[f] = c;
      invertir(a, ++i, --f);
             }
                                    }

void Elementos(int a[], int st, int l){
   if(st >= l){
      return;
              }
      printf("%d \n", a[st]);
    Elementos(a, st+1, l);
}
