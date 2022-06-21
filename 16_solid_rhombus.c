/**
 * @file 16_solid_rhombus.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-21
 *
 * @problem statement :-
 *
 */

/*
    i = 1            * * * * *
    i = 2          * * * * *
    i = 3        * * * * *
    i = 4      * * * * *
    i = 5    * * * * *

*/

#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= n; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}