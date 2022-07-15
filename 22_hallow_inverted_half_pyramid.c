/**
 * @file 22_hallow_inverted_half_pyramid.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-22
 * 
 * @problem statement :-
 * 
 */

/*
    * * * * * *    i = 1
    *       *      i = 2        
    *     *        i = 3 
    *   *          i = 4 
    * *            i = 5 
    *              i = 6 
*/

#include<stdio.h>

int main()
{
    int n = 6;

    for(int i = 1; i<= n; i++)
    {
        for(int j = i; j<=n; j++)
        {
            if(i==1||i==n||j==n||i==j)
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