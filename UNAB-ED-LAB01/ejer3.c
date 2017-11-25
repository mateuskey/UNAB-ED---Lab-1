#include<stdio.h>
#include <stdlib.h>
int main(){

    int n,m,o,p,i,j,k,a[10][10],b[10][10],c[10][10];
    /*Captura de la matriz "a" y "b"*/
    printf("\n///////////////////////  Programa que multiplica 2 matrices  ///////////////////////");
    printf("\n\nCuantas filas tendra la matriz A?: ");
    scanf("%i", &m);
    printf("\nCuantas columnas tendra la matriz A?: ");
    scanf("%i", &n);
    printf("\nCuantas filas tiene la matriz B?: ");
    scanf("%i", &o);
    printf("\nCuantas columnas tendra la matriz B?: ");
    scanf("%d", &p);

/*Reconoce si se puede realizar la multiplicacion*/
    if(m!=p){
    printf("\n\nEL NUMERO DE COLUMNAS DE LA MATRIZ  \"A\" ES DIFERENTE AL NUMERO DE FILAS DE LA MATRIZ \"B\"");
    printf("\nEL PRODUCTO MATRICIAL NO ES POSIBLE DE REALIZAR\n\n");
    return(1);
    }

/*Ciclo anidado que captura la matriz A*/
    for (i=1;i<=m;i++){
        for (j=1;j<=n;j++){
            printf("\nDame el elemento A(%i,%i)(fila/columna): ", i,j);
            scanf("%i", &a[i][j]);
        }
    }


/*Ciclo anidado que captura la matriz B*/
    for (i=1;i<=o;i++){
        for (j=1;j<=p;j++){
            printf("\nDame el elemento B(%i,%i)(fila/columna): ", i,j);
        scanf("%i", &b[i][j]);
        }
    }

/*Ciclo anidado que multiplica las 2 matrices*/
    for (i=1;i<=m;i++){
        for (j=1;j<=p;j++){
            c[i][j]=0; /*Limpia la variable para entrar de nuevo al for*/
            for (k=1;k<=n;k++);
                c[i][j]=(c[i][j]+a[i][k])*b[k][j];
        }
    }


    printf("\n\nLa matriz resultante de la multiplicacion es: \n");

/*Ciclo que imprime la matriz resultante*/
    for (i=1;i<=m;i++);{
        printf("\n");
        for(j=1;j<=p;j++);
            printf(" %i ",c[i][j]);
    }

printf("\n\nEnter para salir\n\n");


}
