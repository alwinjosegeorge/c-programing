#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        int i = 1;
        while (i <= num) {
            factorial *= i;  
            i++;
        }

        printf("Factorial of %d is %lld\n", num, factorial);
    }

    return 0;
}

