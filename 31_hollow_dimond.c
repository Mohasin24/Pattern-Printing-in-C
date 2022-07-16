/**
 * @file 31_hollow_dimond.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-07-16
 *
 * @problem statement :-
 *
 */

/*
    *
   * *
  *   *
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *
 */

#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == n || j == i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int j = i; j <= n; j++)
        {
            if (j == 1 || j == n || j == i)
            {
                printf("* ");
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