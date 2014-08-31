#include <stdio.h>

int main() {
    double foot, inch;
    printf("Enter foot and inch: ");
    scanf("%lf %lf", &foot, &inch);
    double result = (foot + inch / 12) * 0.3048;
    printf("Result height: %f\n", result);
    return 0;
}
