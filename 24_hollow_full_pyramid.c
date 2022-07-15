/**
 * @file 24_hollow_full_pyramid.c
 * @author Mohasin Patel
 * @brief 
 * @version 0.1
 * @date 2022-06-22
 * 
 * @problem statement :-
 * 
 */

/*
             *
            * *
           *   *
          *     *
         *       *
        * * * * * *
*/

/*
         *
        * *
       * * *
      * * * *
     * * * * *
    * * * * * *
*/

#include<stdio.h>

int main()
{

    int n = 6;

    for(int i =1; i<=n; i++)
    {

        for(int j = i; j<=n; j++)
        {
            printf("- ");
        }

        for(int j = 1; j<i; j++)
        {

        }

        printf("\n");
    }

    return 0;
}