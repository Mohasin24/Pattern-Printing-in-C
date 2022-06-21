/**
 * @file 18_palindromic_number_pyramid.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-21
 *
 * @problem statement :-
 *
 */

/*
            1            i = 1
          2 1 2          i = 2
        3 2 1 2 3        i = 3
      4 3 2 1 2 3 4      i = 4
    5 4 3 2 1 2 3 4 5    i = 5

*/

#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }

        for (int k = 1; k <= i; k++)
        {
            int logic = i - k + 1;
            printf("%d ", logic);
        }

        for (int l = 1; l < i; l++)
        {
            int logic = l + 1;
            printf("%d ", logic);
        }

        printf("\n");
    }

    return 0;
}