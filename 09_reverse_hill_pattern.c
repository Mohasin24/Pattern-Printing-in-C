/**
 * @file 09_reverse_hill_pattern.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-16
 *
 * @problem statement :-
 *


        i = 1    * * * * * * * * *
        i = 2    - * * * * * * *
        i = 3    - - * * * * *
        i = 4    - - - * * *
        i = 5    - - - - *

    This pattern is formed with three triangles as first is increasing triangle with spaces,
    second is inverted right sided decreasing triangle with * and
    third is inverted left sided decreasing triangle with *

 */

#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int spaces = 1; spaces < i; spaces++)
        {
            printf("  ");
        }

        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }

        for (int k = i; k < n; k++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
