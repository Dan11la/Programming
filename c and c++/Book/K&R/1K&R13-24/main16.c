#include <stdio.h>

#define MAXLINE 50000

int get_line(char s[], int lim);
void copy(char to[], char from[]);

int main(void)
{
    int len;
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) 
        {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("Longest line (%d chars):\n%s", max, longest);
    }

    return 0;
}

int get_line(char s[], int lim)
{
    int i = 0;
    int c;

    while (i < lim - 1 && (c = getchar()) != EOF && c != '\n') {
        s[i++] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}
