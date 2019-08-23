#include <stdio.h>
#include <stdlib.h>

int main() {
    int dimension;
    printf("Escriba la dimension del vector\n");
    scanf("%d",&dimension);
    int arreglo1[dimension];
    int arreglo2[dimension];
    printf("Arreglo 1\n");
    //dando valores aletorios al arreglo 1
    for (int i = 0; i <dimension ; ++i) {
        arreglo1[i]=rand()%11;
        printf("%d\n",arreglo1[i]);
    }
    //copiando arreglo 1 en arreglo 2
    printf("\n");
    printf("Arreglo 2\n");
    for (int j = 0; j <dimension ; ++j) {
        arreglo2[j]=arreglo1[j];
        //imprimiendo el arreglo 2
        printf("%d\n",arreglo2[j]);
    }
}