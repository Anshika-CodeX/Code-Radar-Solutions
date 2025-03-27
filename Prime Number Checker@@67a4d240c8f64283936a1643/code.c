#include <stdio.h>

int isPrime(int num) {  // Define only this function
    if (num < 2) return 0;  // 0 and 1 are not prime

    for (int i = 2; i < num; i++) {  // Check divisibility
        if (num % i == 0)
            return 0;  // Not prime
    }
    return 1;  // Prime
}

