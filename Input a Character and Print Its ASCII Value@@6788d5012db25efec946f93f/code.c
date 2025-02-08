#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",c);
    printf("ASCII Value: %d",c);
    // printf("%s", welcome());
    return 0;
}