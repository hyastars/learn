#include <stdio.h>

int main(){
    int x = 10;
    float y = 3.14;
    char z = 'g';
    char* s  = "hello";
    int q = 16;

    printf("x = %d, y = %.2f\n", x, y);
    printf("z = %c\n", z);
    printf("s = %s\n", s);
    printf("q (hex) = %x\n", q);
    printf("q (binary) = ");
    for(int i = 2 * sizeof(int) - 1; i >= 0; --i){
        printf("%d", (q >> i) & 1);
    }

    printf("\n");
    return 0;
}
