#include <stdio.h>

int main()
{
    int c;
    char line[1000];
    int cur_in = 0;
    int cur_row_in = 0;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c!= '\n')
        {
            line[cur_in] = c;
            cur_in++;
            cur_row_in++;
            continue;
        }
        if (c == ' ')
        {
        if (line[cur_in-1] != ' ' && line[cur_in-1] != '\t' && line[cur_in-1] != '\n')
        {
            line[cur_in] = c;
            cur_in++;
            cur_row_in++;
        }
            

        continue;
        }

        if (c == '\t')
        {
            if (line[cur_in-1] != ' ' && line[cur_in-1] != '\t' && line[cur_in-1] != '\n')
            {
                line[cur_in] = ' ';
                cur_in++;
                cur_row_in++;
            }


            continue;
        }

        if (c == '\n')
        {
            if (line[cur_in-1] != ' ' && line[cur_in-1] != '\t' && line[cur_in-1] != '\n')
            {
                line[cur_in] = c;
                cur_in++;
                cur_row_in = 0;
                continue;
            }
            if (line [cur_in-1] == ' ' && cur_row_in == 0)
            {
                cur_in = cur_in-1;
            }
        }
    }
    for(int i = 0; i < cur_in; i++)
    {
        printf("%c", line[i]);
    }
    return 0;
}
