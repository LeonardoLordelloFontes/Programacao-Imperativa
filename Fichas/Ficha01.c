#include <stdio.h>
#include <stdlib.h>

// Exercício 3;

// 3.1;

void quadrado (int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            putchar('#');
        }
        putchar('\n');
    }

}

// 3.2

void quadrado2 (int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (((i + j) % 2) == 0)
                putchar('#');
            else
                putchar('_');
        }
        putchar('\n');
    }

}

// 3.3

void triangulo (int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            putchar('#');
        }

        putchar('\n');
    }

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            putchar('#');
        }
        putchar('\n');
    }

} 

// 3.3

void triangulo2(int n) {

    for (int i = 0; i < n; i++) {

        for (int j = n - 1; j > i ; j--) {
            putchar(' ');
        }

        for (int k = 1; k < 2 * (i + 1); k++) {
            putchar('#');
        }

        putchar('\n');

    }

}


int main() {

    return 0;
}
