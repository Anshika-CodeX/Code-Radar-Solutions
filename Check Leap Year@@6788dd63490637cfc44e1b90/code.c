#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int year;
    scanf("%d",&Year);
    if ((Year%4==0 && Year%100!=0) || (Year%400==0))
    {
    printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}