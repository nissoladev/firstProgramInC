#include <stdio.h>

// Função que lê dois números e retorna a soma
int sum() {
    int num1, num2;
    /*printf("Digite o primeiro número: ");*/
    scanf("%d", &num1);
    /*printf("Digite o segundo número: ");*/
    scanf("%d", &num2);
    return num1 + num2;
}

int main() {
    int resultado = sum();
    printf("A soma é: %d\n", resultado);
    return 0;
}
