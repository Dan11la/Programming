#include <stdio.h>

int main() 
{
    float fahr = 0;
    printf("Celsius\tFahrenheit\n");
    for (int celsius = 0; celsius <= 100; celsius = celsius+10) 
    {
        fahr = (celsius * 9.0 / 5.0) +32 ;
        printf("%d\t%.1f\n", celsius, fahr);
    }
    return 0;
}
