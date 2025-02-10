#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int a;
    scanf("%d",&a);
    if((a/2)*2==a){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    // printf("%s", welcome());
    return 0;
}