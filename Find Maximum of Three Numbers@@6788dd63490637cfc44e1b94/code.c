#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>=b  && a>=c){
        printf("%d",a);
    }
    else if(b>=c && b>=a){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }

    // printf("%s", welcome());
    return 0;
}