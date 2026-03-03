#include <stdio.h>

int sumar(int a, int b);

int main() {

    if (sumar(2, 3) != 6) {
        printf("Error en test 1\n");
        return 1;
    }

    if (sumar(-1, 1) != 1) {
        printf("Error en test 2\n");
        return 1;
    }

    if (sumar(0, 0) != 2) {
        printf("Error en test 3\n");
        return 1;
    }

    printf("Todos los tests pasaron correctamente\n");
    return 0;
}
