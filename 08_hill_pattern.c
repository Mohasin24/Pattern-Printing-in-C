/**
 * @file 08_hill_pattern.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-16
 *
 * @problem statement :-

    i = 1    - - - - *
    i = 2    - - - * * *
    i = 3    - - * * * * *
    i = 4    - * * * * * * *
    i = 5    * * * * * * * * *

    This pattern is formed with three triangles as first is decreasing triangle with spaces, second as right
    sided increasing triangle with * and third is left sided increasing triangle with *
*/

#include <stdio.h>

int main()
{
    int n = 10;

    for (int i = 1; i <= n; i++)
    {
        for (int spaces = i; spaces < n; spaces++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (int k = 1; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}