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

    int resultado = 0, i;

    for (i = 0; i < N; i++) {

        resultado += v[i];

    }

    return resultado;

}

// Exercício 5

void inverteArray (int v[], int N){
    
    int i;
    
    for (i = 0; i < N / 2; i++) {
        
        swapM (&v[i], &v[N - i - 1]);
        
    } 
}

void inverteArray2 (int v[], int N){
    
    int i;
    
    for (i = 0; i < N / 2; i++) {
        
        swap (v, i, N - i - 1);
        
    } 
}

// Exercício 6

int maximum (int v[], int N, int *m) {

    if (N <= 0)
        return 1;

    else {
        
        int i;

        *m = v[0];

        for (i = 0; i < N; i++) {

            if (v[i] > *m)
                *m = v[i];

        return 0;

        }
    }
}

// Exercício 7

void quadrados (int q[], int N) {

    int i;
    
    for (i = 0; i < N; i++) {
        
        q[i] = (i + 1)*(i + 1);

    }

}

// Exercício 8 a)

void pascal(int v[], int N) {

    int i,j;

    for (i = 0; i < N+1; i++) {

        v[i] = 1;

        for (j = 1; j < i; j++) {

            v[i - j] = v[i - j] + v[i - j - 1];

        }

    }

}

// Exercício 8 b)

void desenhaTriangulpP (int N){
    int i,j, v[N];

    for (i = 0; i < N+1; i++) {

        v[i] = 1;

        for (j = 1; j < i; j++) {

            v[i - j] = v[i - j] + v[i - j - 1];

        }

        for (j = 0; j <= i; j++) {
            printf("%6d", v[j]);
        }

        putchar('\n');

    }
}

main () {

}
