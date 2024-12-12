#include <stdio.h>

int main(){
    char str[100];
    printf("Enter a line: ");
    fgets(str, sizeof(str), stdin);
    printf("You enter: %s", str);
    return 0;
}
