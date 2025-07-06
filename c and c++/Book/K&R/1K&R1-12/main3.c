#include <stdio.h>

int main() {
    int fahr;
    printf("Fahrenheit\tCelsius\n");
    for (fahr = 0; fahr <= 300; fahr += 20) {
        printf("%d\t\t%d\n", fahr, (5 * (fahr - 32) / 9));
    }
    return 0;
}
