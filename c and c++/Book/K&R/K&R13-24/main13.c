//Write a program to print a histogram of the lengths of words in its input. It is
//easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging
#include <stdio.h>
#include <string.h>
int main()
{
    char enter[1000];
    fgets(enter, sizeof(enter), stdin);
    //1 split and write every lenth to index
    int len = strlen(enter);
    if (enter[len - 1] == '\n') {
        enter[len - 1] = '\0';
    }
    //2
    int histograms[1000];
    int word_countP = 0;

    int current_symbolP = 0;
    int current_word_lenP = 0;
    while(enter[current_symbolP] != '\0')
    {
        char c = enter[current_symbolP];
        if (c != ' ' && c != '.' && c != ',' && c != '!' && c != '?' && c != '\n')
        {
            current_word_lenP++;
        }

        if((enter[current_symbolP] == ' ' || enter[current_symbolP + 1] == '\0') && current_word_lenP > 0)
        {
            histograms[word_countP] = current_word_lenP;
            word_countP++;
            current_word_lenP = 0;
        }
        current_symbolP++;
    }
    printf("==========HORIZONTAL=========\n");
    for(int i = 0 ; i < word_countP; ++i )
    {
        for(int j = 0 ; j < histograms[i];  ++j)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("==========VERTICAL=========\n");
    //             #
    //           # #
    // # #   #   # #
    // # # # # # # #
    // # # # # # # #
    // # # # # # # #
    //--------------
    // # # # # # # #
    // # # # # # # #
    // # # # # # # #
    // # #   #   # #
    //           # #
    //             #
    int max_heightP = 0;
    for(int num = 0; num < word_countP; num++)
    {
        if (histograms[num] > max_heightP)
        {
            max_heightP = histograms[num];
        }

    }
    for (int level = max_heightP; level >= 1; level--)
    {
        for (int i = 0; i < word_countP; i++)
        {
            if (histograms[i] >= level) {
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int j = 0; j < word_countP; j++) {
        printf("— ");
    }
    printf("\n");
    for (int j = 0; j < word_countP; j++) {
        printf("%d ", j + 1);
    }
    printf("\n");
    return 0;
}
