// Your code here...
#include <stdio.h>
int isPrime()
 int isPrime(num) {
    if(num<2) return 0;
    for (int i = 2;i<num;i++){
        if(num % i ==0)
        return 0;
    }
    return 1;
    
}
int main() {
    int num;
    scanf("%d",&num);
    isPrime(num);
    printf("%d\n", isPrime(num));
    return 0;
}