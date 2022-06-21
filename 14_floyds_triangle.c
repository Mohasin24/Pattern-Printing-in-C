/**
 * @file 14_floyds_triangle.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-21
 * 
 * @problem statement :-
 * 
 */

/*
    1
    2  3
    4  5  6
    7  8  9  10
    11 12 13 14 15
*/
#include<stdio.h>

int main()
{

    int n =10;
    int iCnt=1;
    for(int i =1; i<=n; i++)
    {   
        
        for(int j = 1; j<=i; j++)
        {
            printf("%d ",iCnt);
            iCnt++;
        }
        printf("\n");
    }

    return 0;
}