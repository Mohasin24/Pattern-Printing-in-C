/**
 * @file 30_num_hollow_inverted_half_pyramid.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-16
 *
 * @problem statement :-
 *
 */

/*
        1 2 3 4 5
        2     5
        3   5
        4 5
        5
*/

#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (j == i || i == 1 || j == n)
            {
                printf("%d ", j);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}