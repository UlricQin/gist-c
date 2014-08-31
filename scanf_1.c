#include <stdio.h>

int main() {
    int price = 0;
    const int AMOUNT = 100;
    printf("Enter price: ");
    scanf("%d", &price);
    printf("Change is: %d\n", AMOUNT - price);
    return 0;
}
