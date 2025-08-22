#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void start();
void end();

void ex01();
void ex02();
void ex03();
void ex04();
float ctof(float);
float ctok(float);
float ftoc(float);
float ftok(float);
float ktoc(float);
float ktof(float);
void ex05();

char grade = 248;

int main()
{
    int x = 0;

    printf("\nType the exercise to be executed (1-28): ");
    scanf("%d", &x);

    start();

    switch (x)
    {
    case 1:
        ex01();
        break;
    case 2:
        ex02();
        break;
    case 3:
        ex03();
        break;
    case 4:
        ex04();
        break;
    case 5:
        ex05();
        break;
    default:
        printf("Error! This exercise isn't available yet. Try another one.\n");
        break;
    }

    system("pause");
    end();

    return 0;
}

void start() { printf("\n==================================================================================================== START ====================================================================================================\n\n"); }
void end() { printf("\n\n===================================================================================================== END =====================================================================================================\n"); }

void ex01()
{
    float kg = 0.0, m = 0.0;

    printf("\nType your weight in kilograms: ");
    scanf("%f", &kg);

    printf("\nType your height in meters: ");
    scanf("%f", &m);

    printf("\nYour BMI is: %.2f\n", kg / (m * m));
}

void ex02()
{
    float brl = 0.0, usd = 0.0;

    printf("\nType the BRL ammount to be converted: R$");
    scanf("%f", &brl);

    printf("\nType the current exchange rate: US$");
    scanf("%f", &usd);

    printf("\nR$%.2f in USD is US$%.2f.\n", brl, brl * usd);
}

void ex03()
{
    int length = 0, width = 0;

    printf("\nType the land length in meters: ");
    scanf("%d", &length);

    printf("\nType the land width in meters: ");
    scanf("%d", &width);

    printf("\nThe land area is %d square meters.\n", length * width);
}

void ex04()
{
    float x = 0.0, y = 0.0;
    int option = 0;

    printf("Choose the desired conversion:\n1 - Celsius to Fahrenheit;\n2 - Celsius to Kelvin;\n3 - Fahrenheit to Celsius;\n4 - Fahrenheit to Kelvin;\n5 - Kelvin to Celsius;\n6 - Kelvin to Fahrenheit.\nOption: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("\nType the Celsius temp to be converted to Fahrenheit: ");
        scanf("%f", &x);
        y = ctof(x);
        printf("\nResult: %.2f%cC = %.2f%cF\n", x, grade, y, grade);
        break;
    case 2:
        printf("\nType the Celsius temp to be converted to Kelvin: ");
        scanf("%f", &x);
        y = ctok(x);
        printf("\nResult: %.2f%cC = %.2fK\n", x, grade, y);
        break;
    case 3:
        printf("\nType the Fahrenheit temp to be converted to Celsius: ");
        scanf("%f", &x);
        y = ftoc(x);
        printf("\nResult: %.2f%cF = %.2f%cC\n", x, grade, y, grade);
        break;
    case 4:
        printf("\nType the Fahrenheit temp to be converted to Kelvin: ");
        scanf("%f", &x);
        y = ftok(x);
        printf("\nResult: %.2f%cF = %.2fK\n", x, grade, y);
        break;
    case 5:
        printf("\nType the Kelvin temp to be converted to Celsius: ");
        scanf("%f", &x);
        y = ktoc(x);
        printf("\nResult: %.2fK = %.2f%cC\n", x, y, grade);
        break;
    case 6:
        printf("\nType the Kelvin temp to be converted to Fahrenheit: ");
        scanf("%f", &x);
        y = ktof(x);
        printf("\nResult: %.2fK = %.2f%cF\n", x, y, grade);
        break;
    default:
        printf("\nError! Option unavailable.\n");
        break;
    }
}
float ctof(float c) { return (c * 9 / 5) + 32; }
float ctok(float c) { return c + 273.15; }
float ftoc(float f) { return (f - 32) * 5 / 9; }
float ftok(float f) { return (f - 32) * 5 / 9 + 273.15; }
float ktoc(float k) { return k - 273.15; }
float ktof(float k) { return (k - 273.15) * 9 / 5 + 32; }

void ex05() {}