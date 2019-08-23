#include <stdio.h>
#include <stdlib.h>

int main() {

    int dimension;
    printf("escoja la dimension del vector\n");
    scanf("%d",&dimension);
    int eliminado;
    int arreglo1[dimension];
    //rellenando el vector y mostrandolo
    for (int i = 0; i <dimension ; ++i) {

        arreglo1[i]=rand()%11;
        printf("Posicion:%d Valor: %d \n",i+1,arreglo1[i]);
    }
    printf("Escoja una posicion a eliminar\n");
    scanf("%d",&eliminado);
    //eliminando el elemento del vector
    while (eliminado-1<dimension){
        arreglo1[eliminado-1]=arreglo1[eliminado];
        eliminado++;
    }
    //mostrando el vector resultante
    for (int j = 0; j <dimension-1 ; ++j) {
        printf("Posicion:%d Valor: %d \n",j+1,arreglo1[j]);
    }

}