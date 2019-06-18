#include <stdio.h>
#include <string.h>

void invertir(char *x, int i, int f);

int main(){
  char a[100];
   printf("Ingrese una cadena de texto:\n");
   gets(a);
   invertir(a, 0, strlen(a)-1);
   printf("La cadena al reves se lee:\n %s\n", a);
   return 0;
          }

void invertir(char *x, int i, int f){
   char c;

   if (i >= f)
      return;
   c = *(x+i);
   *(x+i) = *(x+f);
   *(x+f) = c;
   invertir(x, ++i, --f);
}
