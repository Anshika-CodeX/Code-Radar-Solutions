#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int year;
    scanf("%d",&year);
    if ((year%4==0 && year%100!=0) || (year%400==0))
    {

    
    printf("Leap year");
    }
    else{
        printf("Not a Leap year");
    }

    // printf("%s", welcome());
    return 0;
}