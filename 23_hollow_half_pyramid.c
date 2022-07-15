/**
 * @file 23_hollow_half_pyramid.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-22
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
    * * * * * *
*/
#include<stdio.h>

int main()
{

    int n = 6;

    for(int i = 1; i<=n; i++)
    {
        for(int j= 1; j<=i; j++)
        {
            if(i==1||j==1||i==n||j==i)
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