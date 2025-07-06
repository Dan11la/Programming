#include <stdio.h>

int celcius1(int fahr)
{
    int celcius = 0;
    celcius = 5 * (fahr-32) / 9;
    return celcius;  
}

int main()
{
    int step = 20;
    int lower = 0;
    int upper = 300;
    int fahr = lower;
    while(fahr <= upper)
    {
        printf ("%d\t%d \n", fahr, celcius1(fahr));
        fahr = fahr + step;
    }

}
