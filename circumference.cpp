#include <stdio.h>
#include <math.h>

int main()
{
    // Declaring Variable
    const double pi = 3.14159;
    double raduis;

    // Taking User Input
    printf("Enter The Raduis Of Circle: ");
    scanf("%lf", &raduis);

    // Circumference Of Circle
    double circumference = 2 * pi * raduis;
    printf("The Circumference Of Circle Is %lf Units\n", circumference);

    // Area Of Circle
    double area = pi * pow(2, raduis);
    printf("The Area Of Circle Is %lf sq Units\n", area);

    return 0;
}