#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
void ex06();
void ex07();
float cmtom(float);
float cmtokm(float);
float mtocm(float);
float mtokm(float);
float kmtocm(float);
float kmtom(float);
void ex08();
void ex09();
void ex10();

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
        printf("Exercise: Develop an algorithm that asks the user for their weight in kilograms and height in meters. Then, calculate the BMI and display the result.\n\n");
        printf("Script:\n");
        ex01();
        break;
    case 2:
        printf("Exercise: Develop an algorithm that converts a value in Brazilian Reais (BRL) to US Dollars (USD). Ask the user for the value in Brazilian Reais and the current exchange rate. Calculate and display the equivalent value in US Dollars.\n\n");
        printf("Script:\n");
        ex02();
        break;
    case 3:
        printf("Exercise: Create an algorithm that receives the width and length of a rectangular plot of land in meters and displays its area.\n\n");
        printf("Script:\n");
        ex03();
        break;
    case 4:
        printf("Exercise: Create functions to convert temperatures between Celsius, Fahrenheit, and Kelvin. The user must choose the conversion type and enter the value. Use a procedure to display a menu and call the corresponding function.\n\n");
        printf("Script:\n");
        ex04();
        break;
    case 5:
        printf("Exercise: Develop an algorithm that asks the user for their name and current salary. The algorithm must then calculate and display the new salary plus an 8.5%% increase. Finally, display a personalized message based on the user's name, informing them of their new salary.\n\n");
        printf("Script:\n");
        ex05();
        break;
    case 6:
        printf("Exercise: A merchant purchased a product and wants to sell it at a 45%% profit if the purchase price is less than 20.00; otherwise, the profit will be 30%%. Enter the product price and print the sales amount.\n\n");
        printf("Script:\n");
        ex06();
        break;
    case 7:
        printf("Exercise: Develop an algorithm that prompts the user for a unit of measurement (1: meters, 2: kilometers, 3: centimeters) and converts the provided value to another unit, based on their choice.\n\n");
        printf("Script:\n");
        ex07();
        break;
    case 8:
        printf("Exercise: Create an algorithm that receives a person's age and uses switch...case to classify them into sports categories: 1 for children (up to 12 years old), 2 for youth (13 to 18 years old), 3 for adults (19 years old or older).\n\n");
        printf("Script:\n");
        ex08();
        break;
    case 9:
        printf("Exercise: Develop an algorithm that reads an integer and displays its multiplication table.\n\n");
        printf("Script:\n");
        ex09();
        break;
    case 10:
        printf("Exercise: Develop an algorithm that receives information from 100 people. As input, the algorithm will receive their name, age, and gender and should output the percentage of women between 25 and 50 years old and the percentage of men between 50 and 75 years old.\n\n");
        printf("Script:\n");
        ex10();
        break;
    default:
        printf("Error! This exercise isn't available yet. Try another one.\n");
        break;
    }

    end();
    system("pause");

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

    printf("Choose the desired conversion:\n1 - Celsius to Fahrenheit;\n");
    printf("2 - Celsius to Kelvin;\n3 - Fahrenheit to Celsius;\n4 - Fahrenheit to Kelvin;\n");
    printf("5 - Kelvin to Celsius;\n6 - Kelvin to Fahrenheit.\nOption: ");
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

void ex05()
{
    char name[15];
    float salary = 0.0;

    printf("Type your first name: ");
    scanf("%s", name);

    printf("Type your current salary: $");
    scanf("%f", &salary);

    printf("Mr./Ms. %s, your new salary will be $%.2f.", name, salary * 1.085);
}

void ex06()
{
    float price = 0.0;

    printf("Price: $");
    scanf("%f", &price);

    if (price < 20.0)
        price *= 1.45;
    else
        price *= 1.3;

    printf("\nThe product will be sold for $%.2f.", price);
}

void ex07()
{
    float x = 0.0, y = 0.0;
    int option = 0;

    printf("Choose the desired conversion:\n1 - Centimeters to Meters;\n2 - Centimeters to Kilometers;\n3 - Meters to Centimeters;\n4 - Meters to Kilometers;\n5 - Kilometers to Centimeter;\n6 - Kilometers to Meters.\nOption: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("\nType the Centimeters to be converted to Meters: ");
        scanf("%f", &x);
        y = cmtom(x);
        printf("\nResult: %.5fcm = %.5fm\n", x, y);
        break;
    case 2:
        printf("\nType the Centimeters to be converted to Kilometers: ");
        scanf("%f", &x);
        y = cmtokm(x);
        printf("\nResult: %.5fcm = %.5fkm\n", x, y);
        break;
    case 3:
        printf("\nType the Meters to be converted to Centimeters: ");
        scanf("%f", &x);
        y = mtocm(x);
        printf("\nResult: %.5fm = %.5fcm\n", x, y);
        break;
    case 4:
        printf("\nType the Meters to be converted to Kilometers: ");
        scanf("%f", &x);
        y = mtokm(x);
        printf("\nResult: %.5fm = %.5fkm\n", x, y);
        break;
    case 5:
        printf("\nType the Kilometers to be converted to Centimeters: ");
        scanf("%f", &x);
        y = kmtocm(x);
        printf("\nResult: %.5fkm = %.5fcm\n", x, y);
        break;
    case 6:
        printf("\nType the Kilometers to be converted to Meters: ");
        scanf("%f", &x);
        y = kmtom(x);
        printf("\nResult: %.5fkm = %.5fm\n", x, y, grade);
        break;
    default:
        printf("\nError! Option unavailable.\n");
        break;
    }
}
float cmtom(float cm) { return cm / 100; }
float cmtokm(float cm) { return cm / 100000; }
float mtocm(float m) { return m * 100; }
float mtokm(float m) { return m / 1000; }
float kmtocm(float km) { return km * 100000; }
float kmtom(float km) { return km * 1000; }

void ex08()
{
    int age = 0, x = 0;

    do
    {
        printf("Type the age (1-120 years old): ");
        scanf("%d", &age);
    } while (age < 1 || age > 120);

    if (age <= 12)
        x = 1;
    else if (age >= 13 && age <= 18)
        x = 2;
    else
        x = 3;

    switch (x)
    {
    case 1:
        printf("\nSports Category: Kids.");
        break;
    case 2:
        printf("\nSports Category: Teens.");
        break;
    case 3:
        printf("\nSports Category: Adults.");
        break;
    default:
        printf("\nError! Try again.");
        break;
    }
}

void ex09()
{
    int x = 0;

    printf("Type a number to see its math table: ");
    scanf("%d", &x);

    for (int i = 0; i <= 10; i++)
        printf("%d x %d = %d\n", i, x, x * i);
}

void ex10()
{
    char name[15], gender;
    int age = 0, total = 100;
    float female = 0.0, male = 0.0;

    for (int i = 1; i <= total; i++)
    {
        printf("\n%d%c Person's First Name: ", i, grade);
        scanf("%s", name);

        do
        {
            printf("\nGender (F/M): ");
            scanf(" %c", &gender);
            gender = toupper(gender);
        } while (gender != 'F' && gender != 'M');

        do
        {
            printf("\nAge (1-120): ");
            scanf("%d", &age);
        } while (age < 1 || age > 120);

        if (gender == 'F' && age >= 25 && age <= 50)
            female += 1;
        if (gender == 'M' && age >= 50 && age <= 75)
            male += 1;
    }

    printf("\nFrom %d people, %.2f%% are women between the age of 25 and 50 and %.2f%% are men between the age of 50 and 75.", total, female / total * 100, male / total * 100);
}