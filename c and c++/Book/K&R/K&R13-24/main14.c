#include <stdio.h>

int main()
{
    char enter[1000];
    char ascii[128] = {0};
    int len = 0;
    fgets(enter, sizeof(enter), stdin);
    int b = 0;
    while (enter[b] != '\n')
        {
            b++;
            len++;
        }   
        if (enter[b] == '\n')
        {
            enter[b] = '\0';
        }
    for (int i = 0; i <= len; i++)
    {
            ascii[enter[i]]++; 
    }
    int l = 0;
    for (int j = 32; j <= 127; j++)
    {
        printf("%c: %d ", j, ascii[j]);
        while (ascii[j] > l)
        {
            printf("#");
            l++;
        }
        l = 0;
        printf("\n");
    }

        return 0;
}
