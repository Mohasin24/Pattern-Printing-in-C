/**
 * @file 15_zero_one_triangle.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-21
 *
 * @problem statement :-
 *
 */

/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/

#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                // prints 1 if sum of (i+j) is even
                printf("1 ");
            }
            else
            {
                // prints 0 if sum of (i+j) is odd
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}