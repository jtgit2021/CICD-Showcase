#include <stdio.h>
#include "utils.h"

int main() {
    int a = 10;
    int b = 5;

    int sum = add(a, b);
    int difference = subtract(a, b);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("test");

    
    return 0;
}
