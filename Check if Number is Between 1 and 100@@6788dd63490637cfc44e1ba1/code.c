#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int num;
    scanf("%d",&num);
    if(num<=100 && num>=1){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    // printf("%s", welcome());
    return 0;
}