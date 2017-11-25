#include <stdio.h>
#include <stdlib.h>

int invertir(int numero);
int main(){
    int n, resp;
    printf("Ingrese un numero: \n");
    scanf("%d", &n);
    resp = invertir(n);
    printf("El numero invertido es %d \n", resp);
    return 0;
}
int invertir(int numero) {
  int invertido=0, Resto;
      while(numero!=0)
      {
          Resto=numero%10;
          numero=numero/10;
          invertido=invertido*10+Resto;
       }
     return invertido;
 }
