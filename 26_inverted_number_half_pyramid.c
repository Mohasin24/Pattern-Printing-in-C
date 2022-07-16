/**
 * @file 26_inverted_number_half_pyramid.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-07-15
 * 
 * @problem statement :-
 * 
 */

/*
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1
*/

#include<stdio.h>

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= (n-i+1); j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    

    return 0;
}