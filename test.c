#include <stdio.h>
#include <string.h>

int main() {
    int age;
    double gpa;
    char grade;
    char name[25];
    int day, month, year;
    double num1, num2;
    float soma;
    char color[30];
    char pluralNoun[30];
    char celebrity[30];
    /*
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("You are %d years old.\n\n", age);

    printf("Enter your gpa \n");
    scanf("%lf", &gpa);
    printf("Your gpa is: %f\n\n", gpa);

    printf("Enter your grade: \n");
    scanf(" %c", &grade);
    printf("Your grade is: %c\n\n", grade);


    printf("Enter your name: \n");
    fgets(name, 25, stdin);
    printf("Your name is: %s", name);

    printf("Enter your name: \n");
    scanf("%s", name);
    printf("Your name is: %s", name);

    printf("\nEnter your name: \n");
    fgets(name, 25, stdin);
    printf("Your name is: %s", name);

    printf("Enter your date birth in the format: (yyyy/mm/dd)\n");
    scanf("%d/%d/%d", &year, &month, &day);
printf("Your birthday date is: %d/%d/%d\n", year, month, day);

    printf("Basic Calculator...\n");
    printf("Enter first number:\n");
    scanf("%lf", &num1);
    printf("Enter second number:\n");
    scanf("%lf", &num2);
    soma = (num1 + num2);
    printf("Answer: %f", soma);
    */

    printf("MadLibs Game...\n\n");
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural-noun: ");
    scanf("%s", pluralNoun);
    getchar();
    printf("Enter a celebrity:\n");
    fgets(celebrity, 30, stdin);
    celebrity[strcspn(celebrity, "\n")] = 0;

    printf("Roses are %s\n", color);
    printf("%s are blue\n",pluralNoun);
    printf("I love %s\n", celebrity);
    return 0;
}
