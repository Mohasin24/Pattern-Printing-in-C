/**
 * @file 19_butterfly_pattern.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-22
 *
 * @problem statement :-
 *
 */

/*
 *             *
 * *         * *
 * * *     * * *
 * * * * * * * *
 * * * * * * * *
 * * *     * * *
 * *         * *
 *             *
 */

#include <stdio.h>

int main()
{

    int n = 4;

    // upper half
    for (int i = 1; i <= n; i++)
    {
        printf("\t");

        // first triangle with *
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        // spaces
        for (int k = i; k < n; k++)
        {
            printf("  ");
            printf("  ");
        }

        // second triangle with *
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // lower half
    for (int i = 1; i <= n; i++)
    {
        printf("\t");

        // first triangle with *
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }

        // spaces
        for(int k = 1; k<i; k++)
        {
            printf("  ");
            printf("  ");
        }
        

        // second triangle with *
        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}