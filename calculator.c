#include <stdio.h>
#include <math.h>

void basicOperations();
void scientificOperations();

int main() {
    int choice;

    do {
        printf("\n=== C Calculator ===\n");
        printf("1. Basic Operations (+ - * /)\n");
        printf("2. Scientific Operations (sin, cos, log, sqrt)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                basicOperations();
                break;
            case 2:
                scientificOperations();
                break;
            case 0:
                printf("Exiting calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}

void basicOperations() {
    double num1, num2, result;
    char op;

    printf("\nEnter expression (e.g. 3 + 4): ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
}

void scientificOperations() {
    int choice;
    double value, result;

    printf("\nScientific Options:\n");
    printf("1. sin(x)\n");
    printf("2. cos(x)\n");
    printf("3. tan(x)\n");
    printf("4. log(x)\n");
    printf("5. sqrt(x)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%lf", &value);

    switch (choice) {
        case 1:
            result = sin(value);
            printf("sin(%.2lf) = %.4lf\n", value, result);
            break;
        case 2:
            result = cos(value);
            printf("cos(%.2lf) = %.4lf\n", value, result);
            break;
        case 3:
            result = tan(value);
            printf("tan(%.2lf) = %.4lf\n", value, result);
            break;
        case 4:
            if (value > 0) {
                result = log(value);
                printf("log(%.2lf) = %.4lf\n", value, result);
            } else {
                printf("Error: log domain must be > 0\n");
            }
            break;
        case 5:
            if (value >= 0) {
                result = sqrt(value);
                printf("sqrt(%.2lf) = %.4lf\n", value, result);
            } else {
                printf("Error: sqrt domain must be >= 0\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
}
