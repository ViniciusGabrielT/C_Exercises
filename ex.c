#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void start();
void end();

void ex01();
void ex02();

int main()
{
    int x = 0;

    printf("\nHello, type the exercise to be executed (1-x): ");
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
    default:
        printf("Error! This exercise isn't available. Try again.");
        break;
    }

    end();

    return 0;
}

void start() { printf("\n==================================================================================================== START ====================================================================================================\n\n"); }
void end() { printf("\n\n===================================================================================================== END =====================================================================================================\n"); }

void ex01()
{
    float kg = 0.0, m = 0.0;

    printf("Welcome to the BMI calculator!");

    printf("\n\nType your weight in kilograms: ");
    scanf("%f", &kg);

    printf("\nType your height in meters: ");
    scanf("%f", &m);

    printf("\nYour BMI is: %.2f", kg / (m * m));
}

void ex02() {}