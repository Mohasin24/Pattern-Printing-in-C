/**
 * @file 11_rectangle_pattern.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-20
 *
 * @problem statement :-
 *
 */

/*
    * * * * *
    * * * * *
    * * * * *

    no. of rows = 3
    no. of columns = 5
*/

#include <stdio.h>

int main()
{
    int row = 3;
    int col = 5;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
