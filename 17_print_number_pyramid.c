/**
 * @file 17_print_number_pyramid.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-21
 *
 * @problem statement :-
 *
 */

/*
            1       i = 1
           2 2      i = 2
          3 3 3     i = 3
         4 4 4 4    i = 4
        5 5 5 5 5   i = 5
*/

#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf(" 0");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}