#include <stdio.h>
#include <string.h>
#include <tgmath.h>

int max(int num1, int num2, int num3) {
    int result;
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3)
        result = num2;
    else {
        result = num3;
    }

    return result;
}


/*int max(int num1, int num2) {
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}*/
/*
double cubes(double number) {
    double result = number * number * number;
    return result;
}
*/

/*
double cubes2(double number2) {
    double result2 = (number2 * number2 * number2);
    return result2;
    printf("Here");
}
*/

/*double cubes3(double number3);*/

/*
double num;
double cube(double num) {
    printf("Enter a number:");
    scanf("%lf", &num);
    printf("%lf", pow(num, 3));
}
*/

int main() {

    if (3 < 2 || 2 > 5) {
        printf("True");
    } else {
        printf("False\n");
    };

    if (!(3 < 2)) {
        printf("True");
    };


    /*printf("%d", max(10, 2, 3));*/
    /*printf("%d", max(39, 39));*/
    /*
        double cubes3(double number3); {
        double result3 = (number3 * number3 * number3);
        return result3;
    }

    printf("cubes3: %f\n", cubes3(8));
    */
    /*
    printf("%f", cubes2(6));
    */
/*
    printf("Answer: %f", cubes(3));
*/
    /*
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

    /*
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

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    luckyNumbers[2] = 99;
    printf("%d", luckyNumbers[2]);

    int luckyNumber[1];
    luckyNumber[0] = 99;
    luckyNumber[1] = 200;
    printf("%d", luckyNumber[0]);

    char phrase[] = "Giraffe Academy";
    printf("%s", phrase);
    printf("Top\n");
    sayHello();
    printf("Bottom");
    */

    /*
    sayHi("Max Verstappen", 25);
    sayHi("Jenson Button", 40);
    sayHi("Charles Leclerc", 23);
    */

    return 0;
}

/*
void sayHello() {
    printf("Hello User\n");
}

void sayHi(char name[], int age) {
    printf("Hello %s, you are %d\n", name, age);
}*/