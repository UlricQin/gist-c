#include <stdio.h>

int main() {
    int price = 0;
    printf("Enter price: ");
    scanf("%d", &price);
    printf("Change is: %d\n", 100-price);
    return 0;
}
