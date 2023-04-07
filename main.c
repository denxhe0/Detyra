//dlala22
#include <stdio.h>
#include <math.h>

double sum(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if (num2 == 0) {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    return num1 / num2;
}

double square_root(double num) {
    if (num < 0) {
        printf("Error: Cannot calculate square root of a negative number\n");
        return 0;
    }
    return sqrt(num);
}

double power(double num, int m) {
    return pow(num, m);
}

int main() {
    double num1, num2, result;
    int m, choice;

    printf("Enter your choice:\n");
    printf("1. Sum of 2 numbers\n");
    printf("2. Subtraction of 2 numbers\n");
    printf("3. Multiplication of 2 numbers\n");
    printf("4. Division of 2 numbers\n");
    printf("5. Square root of a number\n");
    printf("6. Power m of a number\n");
    
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers:\n");
            scanf("%lf %lf", &num1, &num2);
            result = sum(num1, num2);
            printf("Result = %lf\n", result);
            break;
        case 2:
            printf("Enter two numbers:\n");
            scanf("%lf %lf", &num1, &num2);
            result = subtract(num1, num2);
            printf("Result = %lf\n", result);
            break;
        case 3:
            printf("Enter two numbers:\n");
            scanf("%lf %lf", &num1, &num2);
            result = multiply(num1, num2);
            printf("Result = %lf\n", result);
            break;
        case 4:
            printf("Enter two numbers:\n");
            scanf("%lf %lf", &num1, &num2);
            result = divide(num1, num2);
            printf("Result = %lf\n", result);
            break;
        case 5:
            printf("Enter a number:\n");
            scanf("%lf", &num1);
            result = square_root(num1);
            printf("Result = %lf\n", result);
            break;
        case 6:
            printf("Enter a number and power:\n");
            scanf("%lf %d", &num1, &m);
            result = power(num1, m);
            printf("Result = %lf\n", result);
            break;
        default:
            printf("Invalid choice!!!\n");
    }

    return 0;
}

#include <stdio.h>

const float PI = 3.14159;

float calculate_area(float r)
{
    float area = PI * r * r;
    return area;
}

float calculate_perimeter(float r)
{
    float perimeter = 2 * PI * r;
    return perimeter;
}

int main()
{
    float radius = 5.0;

    float area = calculate_area(radius);
    float perimeter = calculate_perimeter(radius);

    printf("Radius: %f\n", radius);
    printf("Area: %f\n", area);
    printf("Perimeter: %f\n", perimeter);

    return 0;
}
