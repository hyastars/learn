#include <stdio.h>

int main(){
    char buffer[100];
    int x = 10;
    float y = 3.14159265;
    sprintf(buffer, "x = %d, y = %.3f", x , y);
    printf("Formatted string: %s\n", buffer);
    return 0;
}
