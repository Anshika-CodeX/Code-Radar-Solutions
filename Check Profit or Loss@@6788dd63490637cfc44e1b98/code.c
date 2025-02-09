#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a ,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(b-a>0){
        printf("Profit");
    }
    else if(b-a<0){
        printf("Loss");
    }
    else{
       printf("No profit no loss");
    }
    
    return 0;
}