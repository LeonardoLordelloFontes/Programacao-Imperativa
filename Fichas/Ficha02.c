// 1

float multInt (int n, float m) {

    int r = 0;

    for (int i = 0; i < n ; i++) {
        r += m;
    }

    return r;
}

// 2

float multInt2 (int n, float m) {

    float soma;

    while (n >= 1) {

        if (n % 2 != 0) {
            soma += m;
        }

        m *= 2;
        n = n/2;

    }

    return soma;

}

// 3

int mdc (int a, int b) {

    int upper, result;

    if (a < b)
        upper = a;
    else
        upper = b;

    for (int i = 1; i <= upper; i++)
        if (a % i == 0 && b % i == 0)
            result = i;

    return result;

}

// 4

int mdc2 (int a, int b) {

    while (!(a == 0 || b == 0)) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    if (a == 0)
        return b;
    else
        return a;
}


// 5

int mdc3 (int a, int b) {

    while (!(a == 0 || b == 0)) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    if (a == 0)
        return b;
    else
        return a;
}

// 6 a)

int fib (int n) {

    if (n == 1 || n == 2)
        return 1;

    else
        return fib(n - 1) + fib(n - 2);

}

// 6 b)

int fib2 (int n) {

    int valor1, valor2, resultado;

    valor1 = 1;
    valor2 = 1;

    if (n <= 2)
        return 1;

    for(int i; i < n - 2; i++) {

        resultado = valor1 + valor2;

        valor1 = valor2;
        valor2 = resultado;
    }

    return resultado;

}

int main () {

    // Para testar as funções definidas acima...

    return 0;

}
