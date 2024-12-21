// Autor: Patricia Zaragoza Palma
// 3701
// Ingenieria en sistemas computacionales

#include <stdio.h>

int main() {
    int tabla, i;

    // Solicitar al usuario qué tabla de multiplicar desea ver
    printf("¿Qué tabla de multiplicar deseas ver? ");
    scanf("%d", &tabla);

    // Imprimir la tabla de multiplicar seleccionada
    printf("\nTabla del %d\n", tabla);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", tabla, i, tabla * i);
    }

    return 0;
}
