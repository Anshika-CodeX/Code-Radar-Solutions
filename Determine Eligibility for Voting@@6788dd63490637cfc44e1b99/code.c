#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}