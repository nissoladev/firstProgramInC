#include <stdio.h>
#include <math.h>

int main(void) {
    int num = 6;
    int num2 = 9;
    int favNumber = 99;
    int age = 40;
    int characterAge = 67;
    char letter = 'A';
    char grade = 'S';
    char phrase[] = "Giraffe Academy";
    char characterName[] = "Tom";
    double salary = 99.9;
    const int num3 = 55;

    printf("Olá, mundo!\n");
    printf("Hello\"World\n");
    printf("Estou aprendendo C.\n");
    printf("E isso é incrível!\n\n\n");

    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n\n\n");

    printf("The letter is %c \n", letter);
    characterAge = 39;
    printf("There once was a man name %s\n", characterName);
    printf("He was %d years old.\n", characterAge);
    printf("He really liked the name %s\n", characterName);
    printf("but didn't like being %d.\n", characterAge);
    printf("My favorite %s is %d:\n\n\n", "number", favNumber);

    puts("Meu nome é Guilherme");
    puts("Meu sobrenome é Nissola\n\n\n");

    printf("%d\n", 5 / 4);
    printf("%f\n", 5 + 4.5);
    printf("%f\n", num);
    printf("%d\n", num);
    printf("%f\n", pow(num, 5));
    printf("%f\n", sqrt(num2));
    printf("%f\n", ceil(99.099));
    printf("%f\n\n\n", floor(99.999));

    /* My program is awesome! */
    printf("Comments are fun!\n\n\n");

    printf("%d\n", num3);
    printf("%d\n", num3);
    return 0;
}