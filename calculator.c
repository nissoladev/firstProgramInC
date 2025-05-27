#include <stdio.h>





double num1, num2;
char op;

double calcular(double num1, char op, double num2) {
    double result = (num1 && "op" && num2);
    return result;
};

int main() {

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a second number: ");
    scanf("%lf", &num2);

    printf("\n");

    calcular(num1, op, num2);

    printf("The result is: %lf \n");
    return 0;
}