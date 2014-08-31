#include <stdio.h>

int main() {
    int foot, inch;
    printf("Enter foot and inch: ");
    scanf("%d %d", &foot, &inch);
    double result = (foot + inch / 12.0) * 0.3048;
    printf("Result height: %f\n", result);
    return 0;
}
