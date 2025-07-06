#include <stdio.h>
#include <limits.h>

// finds best solution from distance array
unsigned int return_shortest(unsigned int array[]);
// output the solution in string format with names of cities
void print_output(char cities[][50], unsigned int ways_to_return[][6], unsigned int result_way);


int main()
{
    char cities[6][50] = {{"Los Santos"}, {"Vice City"}, {"San Fierra"}, {"Mangomery"}, {"Bloomery"}, {"Las Venturas"}};
    unsigned int distances[6][6] = {
        {0, 5, 10, 6, 15, 13}, // from Los Santos
        {5, 0, 17, 10, 7, 6},   // for, Vice CIty
        {10, 17, 0, 30, 14, 9}, // from San Fierra
        {6, 10, 30, 0, 13, 11}, // from Mangomery
        {15, 7, 14, 13, 0, 3},  // from Bloomery
        {13, 6, 9, 11, 3, 0}};  // from Las Venturas
    unsigned int ways_to_return[120][6];
    unsigned int distances_to_return[120];
    unsigned int iterrator = 0;
    unsigned int return_index = 0;

    /*
        to do: algorithm of ways find
    */
    
    for (size_t i = 1; i < 6; i++)
    {
        for (size_t j = 1; j < 6; j++)
        {
            if (j == i || distances[i][j] == 0)
            {
                continue;
            }      

            for (size_t k = 1; k < 6; k++)
            {
                if (k == i || k == j || distances[j][k] == 0)
                {
                    continue;
                }

                for (size_t m = 1; m < 6; m++)
                {
                    if (m == i || m == j || m == k || distances[k][m] == 0)
                    {
                        continue;
                    }
                    
                    for (size_t n = 1; n < 6; n++)
                    {
                        if (n == i || n == j || n == k || n == m || distances[m][n] == 0)
                        {
                            continue;
                        }
                        
                        ways_to_return[iterrator][0] = 0;
                        ways_to_return[iterrator][1] = i;
                        ways_to_return[iterrator][2] = j;
                        ways_to_return[iterrator][3] = k;
                        ways_to_return[iterrator][4] = m;
                        ways_to_return[iterrator][5] = n;
                        distances_to_return[iterrator] = 0;
                        distances_to_return[iterrator] += distances[0][i];
                        distances_to_return[iterrator] += distances[i][j];
                        distances_to_return[iterrator] += distances[j][k];
                        distances_to_return[iterrator] += distances[k][m];
                        distances_to_return[iterrator] += distances[m][n];
                        iterrator++;
                    }
                }
            } 
        }
    }
    return_index = return_shortest(distances_to_return);
    print_output(cities, ways_to_return, return_index);
    printf("With a distance of %dkm\n\n", distances_to_return[return_index]);

    return 0;
}

unsigned int return_shortest(unsigned int array[])
{
    unsigned int min_index = 0;
    unsigned int min_distance = INT_MAX;

    for (size_t i = 0; i < 120; i++)
    {
        if (min_distance > array[i])
        {
            min_distance = array[i];
            min_index = i;
        }
    }

    return min_index;
}

void print_output(char cities[][50], unsigned int ways_to_return[][6], unsigned int result_way)
{
    for (size_t i = 0; i < 6; i++)
    {
        printf("%s -> ", cities[ways_to_return[result_way][i]]);
    }
    printf("END\n\n");
}