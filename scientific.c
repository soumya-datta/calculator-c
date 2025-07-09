// scientific.c
#include <stdio.h>
#include <math.h>
#include "scientific.h"

void calculate_sin() {
    double x;
    printf("Enter value (in radians): ");
    scanf("%lf", &x);
    printf("sin(%.2lf) = %.4lf\n", x, sin(x));
}

void calculate_cos() {
    double x;
    printf("Enter value (in radians): ");
    scanf("%lf", &x);
    printf("cos(%.2lf) = %.4lf\n", x, cos(x));
}

void calculate_tan() {
    double x;
    printf("Enter value (in radians): ");
    scanf("%lf", &x);
    printf("tan(%.2lf) = %.4lf\n", x, tan(x));
}

void calculate_log() {
    double x;
    printf("Enter value (> 0): ");
    scanf("%lf", &x);
    if (x > 0)
        printf("log(%.2lf) = %.4lf\n", x, log(x));
    else
        printf("Error: Logarithm only defined for x > 0\n");
}

void calculate_sqrt() {
    double x;
    printf("Enter value (>= 0): ");
    scanf("%lf", &x);
    if (x >= 0)
        printf("sqrt(%.2lf) = %.4lf\n", x, sqrt(x));
    else
        printf("Error: Square root only defined for x >= 0\n");
}
