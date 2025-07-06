#include <stdio.h>
 int main()
 {
 float fahr, celsius;
 fahr = 300;
 int i = 0;
 while (fahr >= i) 
 {
 celsius = (5.0/9.0) * (fahr-32.0);
 printf("%3.0f %6.1f\n", fahr, celsius);
 fahr = fahr-20;
 }
  return 0;
 }
