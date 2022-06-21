/**
 * @file 13_inverted_half_pyramid_numbers.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-21
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

    int n =5;
     
    for(int i = 1; i<=5; i++)
    {
        for(int j = 1; j<=(n-i+1); j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}