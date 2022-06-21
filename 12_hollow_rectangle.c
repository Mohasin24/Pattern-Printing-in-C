/**
 * @file 12_hollow_rectangle.c
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
    *       *
    * * * * *

    rows = 3
    col = 5
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
            
            if(i==1||j==1||i==row||j==col)
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