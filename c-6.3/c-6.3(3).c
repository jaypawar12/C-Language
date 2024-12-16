#include <stdio.h>

int main() {

    int desimal;

    printf("Enter The Desimal Between 1 to 10");
    scanf("%d", &desimal);

    if (desimal < 1 || desimal > 10) {
        printf("Invalid number! Please enter a number between 1 and 10.\n");
        return 0; 
    }

    for (int a = 1; a <= 10; a++) {
        printf("%d x %d = %d\n", desimal, a, desimal*a);
    }

    return 0;
}