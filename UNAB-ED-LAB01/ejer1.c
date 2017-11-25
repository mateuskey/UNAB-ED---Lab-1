#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr [5] = {22, 43, 55, 8, 1};
    int i, a =0;
    for (i=0; i<5; i++){
        a = arr[i];
        if(a%2==0){
            printf("Los numeros pares del arreglo son : %i \n", a);
        }
    }
    return 0;
}
