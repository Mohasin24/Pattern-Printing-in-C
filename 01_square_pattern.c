/**
 * @file pr_01.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-07
 *
 * @problem statement :- print the below pattern in C
 *
 *          * * * * *
 *          * * * * *
 *          * * * * *
 *          * * * * *
 * hint :- use nested loops
 */

#include <stdio.h>

void squarePattern(int, int);

int main()
{
    int rows = 0;
    int coloumn = 0;

    printf("Enter number of rows :- \n");
    scanf("%d", &rows);

    printf("Enter number of coloumns :-\n");
    scanf("%d", &coloumn);

    squarePattern(rows, coloumn);

    return 0;
}

void squarePattern(int r, int c)
{
    for (int i = 0; i < r; i++)
     {
        for (int i = 0; i < c; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}