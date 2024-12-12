#include <stdio.h>

int main(){
    FILE *file = fopen("output.txt", "w");
    if(file == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    fputs("Hello, file!\n", file);
    fclose(file);
    return 0;
}
