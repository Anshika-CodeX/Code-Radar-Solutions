#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    if (a>0){
        printf("Positive");
    }
    else if(a<0){
        printf("Negative");


    }
    else{
        prutnf("Zero");
    }
    return 0;
}