#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("Positive");
    }
    elseif(a<0){
        printf("Negative");
    }
    elseif(a=0){
        printf("Zero");
    }
//     printf("%s", welcome());
    return 0;
}