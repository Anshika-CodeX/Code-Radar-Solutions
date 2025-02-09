#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int year;
    scanf("%d",&year);
    if ((year %= 4) && (year %=100))
    printf("Leap year")
    // printf("%s", welcome());
    return 0;
}