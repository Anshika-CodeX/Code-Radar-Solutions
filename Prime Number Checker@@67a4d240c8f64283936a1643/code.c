#include <stdio.h>

int isPrime(int num) {  // Correct function declaration
    if (num < 2) return 0;  // 0 and 1 are not prime

    for (int i = 2; i < num; i++) {  // Check divisibility
        if (num % i == 0)
            return 0;  // Not prime
    }
    return 1;  // Prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime Number\n", num);
    else
        printf("%d is Not a Prime Number\n", num);

    return 0;
}
