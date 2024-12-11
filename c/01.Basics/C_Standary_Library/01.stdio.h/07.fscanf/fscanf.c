#include <stdio.h>

int main(){
    FIFL *file = fopen("input.txt", "r");
    int x;
    if(file == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    fscanf(file, "%d", &x);
}
