#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        printf("getchar() != EOF: %d\n", c != EOF); 
    }
    printf("getchar() != EOF: %d\n", c != EOF); 
    return 0;
}
