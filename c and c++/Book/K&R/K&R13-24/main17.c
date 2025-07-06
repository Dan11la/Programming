#include <stdio.h>
#define LS 1000 // maximal thousand symbols in one array(line)
int main()
{
    int i = 0;
    int c;
    char line[LS]; // our line that can get only 1000 symbols
    while ((c = getchar()) != EOF) 
    {
        line[i] = c; // copy every symbol that wrote the user to array
        i++;
        if (c == '\n' ) // if we find new line
        {
            
            for(int j = 0; j < i && i >= 80; j++) // we printing every symbol.
        {
            printf("%c", line[j]);
        }
        i = 0;
        }
    }
    return 0;
}
