/**
 * @file 03.pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-15
 * 
 * @problem statement :-
 
    * * * * *
    * * * *
    * * * 
    * * 
    * 
*/

#include<stdio.h>

int main()
{
    // here no. row = 5
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for(int j = i; j <=n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}