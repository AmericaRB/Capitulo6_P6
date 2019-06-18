#include <stdio.h>
#include <string.h>

int Palindromo(char *a, int i, int f);

int main() {
    char a[100];
    int n,r;
    printf("Ingrese una cadena para ver si es palindroma o no:\n");
     scanf("%s", &a);

    n = strlen(a);
    r = Palindromo(a, 0, n-1);

    if (r) {
        printf("'%s' es palindroma\n", a);
           }
    else{
        printf("'%s' NO es palindroma\n", a);
        }
           }

int Palindromo(char *a, int i, int f){
    if (i>= f){
       return 1;
              } 
    
    if (a[i] == a[f]) {
        return Palindromo(a, ++i, --f);
                      }
    else {
        return 0;
         }
                               }
