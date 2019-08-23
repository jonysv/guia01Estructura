#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int dimension;
    printf("Escriba la dimension del vector\n");
    scanf("%d",&dimension);
    int suma=0,media=0;
    int varianza=0;
    int aux=0;
    float desviacion=0.0;

    int arreglo1[dimension];
    for (int i = 0; i <dimension ; ++i) {
        printf("Escriba el valor para la posicion %d del vector\n",i+1);
        scanf("%d",&arreglo1[i]);
        suma=suma+arreglo1[i];
    }
    printf("la suma ha sido: %d\n",suma);
    printf("la dimension ha sido: %d\n",dimension);

    media=suma/dimension;
    printf("la media es : %d\n",media);


    for (int j = 0; j <dimension ; ++j) {
        aux=(arreglo1[j]-media);
        varianza=varianza+pow(aux,2);

    }
    varianza=varianza/dimension;
    printf("la varianza es : %i \n",varianza);
    desviacion=0;
    desviacion=sqrt(varianza);
    printf("la desviacion tipica  es : %f \n",desviacion);
}