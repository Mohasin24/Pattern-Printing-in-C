/**
 * @file 25_number_half_pyramid.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-15
 * 
 * @problem statement :-
 * 
 */

/*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

#include<stdio.h>

int main()
{

    int n = 5;

    for(int i = 1; i<=5; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}