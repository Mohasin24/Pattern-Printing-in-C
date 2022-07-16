/**
 * @file 27_hallow-number-half-pyramid.c
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
    1   3
    1     4
    1 2 3 4 5
*/ 

#include<stdio.h>

int main()
{

    int n = 5;

    for(int i =1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            if(j==1||j==i||i==n)
            {
                printf("%d ",j);
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