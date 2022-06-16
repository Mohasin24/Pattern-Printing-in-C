/**
 * @file 05.pr.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-15
 *
 * @problem statement :-
 *
 */
/*
        i= 1   *
        i= 2   * *
        i= 3   * * *
        i= 4   * * * *
        i= 5   * * * * *
        i= 6   * * * *
        i= 7   * * *
        i= 8   * *
        i= 9   *
 */

#include <stdio.h>

int main()
{
    int n = 9;

    for (int i = 1; i <= n; i++)
    {
        if (i <= 5)
        {   // Increasing triangle
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {   //Dereasing triangle
            for (int j = i; j <= n; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}