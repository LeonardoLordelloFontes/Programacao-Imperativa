#include <stdio.h>
#include <stdlib.h>

// Exercício 2

void swapM (int *x, int *y) {

    int temp = *x;
    *x = *y;
    *y = temp;

}

// Exercício 3

void swap (int v[], int i, int j) {

    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

// Exercício 4

int soma (int v[], int N) {

    int resultado = 0;

    for (int i = 0; i < N; i++) {

        resultado += v[i];

    }

    return resultado;

}

// Exercício 5

void inverteArray (int v[], int N){
    
    for (int i = 0; i < N / 2; i++) {
        
        swapM (&v[i], &v[N - i - 1]);
        
    } 
}

void inverteArray2 (int v[], int N){
    
    for (int i = 0; i < N / 2; i++) {
        
        swap (v, i, N - i - 1);
        
    } 
}

// Exercício 6

int maximum (int v[], int N, int *m) {

    if (N <= 0)
        return 1;

    else {

        *m = v[0];

        for (int i = 0; i < N; i++) {

            if (v[i] > *m)
                *m = v[i];

        return 0;

        }
    }
}

// Exercício 7

void quadrados (int q[], int N) {

    for (int i = 0; i < N; i++) {
        
        q[i] = (i + 1)*(i + 1);

    }

}

// Exercício 8



main () {

}
