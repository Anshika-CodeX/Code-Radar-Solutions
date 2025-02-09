#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a ,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a-b>0){
        printf("Profit");
    }
    else if(a-b<0){
        printf("Loss");
    }
    else{
       printf("No profit no loss");
    }
    
    return 0;
}