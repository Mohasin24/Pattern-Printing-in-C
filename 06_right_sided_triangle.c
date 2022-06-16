/**
 * @file 06_right_sided_triangle.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @problem statement :-

    i = 1            - - - - *  
    i = 2            - - - * *
    i = 3            - - * * *
    i = 4            - * * * *
    i = 5            * * * * *

    This triangle is formed with two patterns one is decreasing traiangle with spaces and another
     is increasing triangle

 */

#include<stdio.h>

int main()
{
    int n = 5;
    
    for(int i =1; i<=5; i++)
    {   
        // prints triangle with decreasing number of spaces
        for(int j = i; j<n; j++)
        {
            printf("  ");
        }

        // prints increasing triangle with pattern 
        for(int k = 1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}