#include <stdio.h>

int main() 
{
    int c;
    int nl = 0;
    int blanks = 0;
    int tab = 0;
    while ((c = getchar()) != EOF)
    {
    if (c == '\n')
    {
        nl++;
    }
      
    else if (c == ' ')
    {
        blanks++;
    }
      
    else if (c == '\t')
    {
        tab++;
    }
}
  
    printf("Here is new lines: %i\n", nl);
    printf("Here is new tabulation: %i\n", tab);
    printf("Here is new blanks: %i\n", blanks);
  
    return 0;
}
