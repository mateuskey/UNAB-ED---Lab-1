#include <stdio.h>
#include <stdlib.h>

int main (){
	int M [3][3] = {{22, 55, 39},{99, 13, 46},{98, 42, 19}};
	int i = 0,j=0;
	int a;
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			a = M[i][j];
       		if(a%2!=0){
			printf("Los numeros impares del arreglo son : %i \n", a);
        	}
    	}
    }
    return 0;
}
