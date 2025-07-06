#include <stdio.h>
#define TAB_SIZE 8
int main()
{
    int c;
    int position = 0;
    while((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            int spaces = TAB_SIZE - (position % TAB_SIZE);
            for(int i = 0; i < spaces; i++)
            {
                putchar(" ");
            }
            position = position + spaces;
        }
        else 
        {
        putchar(c);
        if (c == '\n')
        {
            position = 0;
        }
        else 
        {
        position++;
        }
        }
    }


    return 0;
}   