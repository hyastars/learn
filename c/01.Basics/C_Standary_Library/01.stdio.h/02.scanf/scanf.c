#include <stdio.h>

int main(){
    int x;
    float y;
    printf("Enter an integer and a float: ");
    scanf("%d %f", &x, &y);
    printf("You entered: x = %d, y = %.2f\n", x, y);
    return 0;
}
