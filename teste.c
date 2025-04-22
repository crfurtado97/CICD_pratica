#include <stdio.h>

int dobrar(int numero) {
    return numero * 2;
}

int main() {
    int valor = 5;
    int resultado = dobrar(valor);

    printf("O dobro de %d é %d\n", valor, resultado);

    return 0;
}
