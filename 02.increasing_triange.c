/**
 * @file 02.pr.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-15
 * 
 * @problem statement :-
 *                  
 *                  *
 *                  * *
 *                  * * *
 *                  * * * *
 * 
 */

#include<stdio.h>

int main()
{   
    int n = 4;

    // outer loop no. rows = 4

    for(int i = 1; i<=n; i++ )
    {
        // inner loop no. col = no. row

        for (int i = 1; i <= i; i++)
        {
            printf("* ");  // what do you want to print
        }
        printf("\n");
        
    }

    return 0;
}