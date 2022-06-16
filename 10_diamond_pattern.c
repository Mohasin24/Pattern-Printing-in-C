/**
 * @file 10_diamond_pattern.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-17
 *
 * @problem statement :-
 *


   i=1  - - - - *
   i=2  - - - * * *
   i=3  - - * * * * *
   i=4  - * * * * * * *
   i=5  * * * * * * * * *
        - * * * * * * *
        - - * * * * *
        - - - * * *
        - - - - *
 */

#include <stdio.h>

int main()
{

    int n = 10;
    printf("\n");
    for (int i = 1; i < n; i++)
    {
        printf("\t");
        for (int spaces = i; spaces < n; spaces++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (int k = 1; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        printf("\t");
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