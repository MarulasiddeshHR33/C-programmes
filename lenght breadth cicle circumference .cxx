#include <stdio.h>

void main()
{
    float length, breadth, base, height, r, ar, at, ac, cc;

    printf("Enter length\n");
    scanf("%f", &length);

    printf("Enter breadth\n");
    scanf("%f", &breadth);

    printf("Enter base\n");
    scanf("%f", &base);

    printf("Enter height\n");
    scanf("%f", &height);

    printf("Enter radius\n");
    scanf("%f", &r);

    ar = length * breadth;           // Area of rectangle
    at = 0.5 * base * height;        // Area of triangle
    ac = 3.142 * r * r;              // Area of circle
    cc = 2 * 3.142 * r;              // Circumference of circle

    printf("Area of rectangle = %f\n", ar);
    printf("Area of triangle = %f\n", at);
    printf("Area of circle = %f\n", ac);
    printf("Circumference of circle = %f\n", cc);
}