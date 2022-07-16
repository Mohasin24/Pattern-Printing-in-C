/**
 * @file 28_number_full_pyramid.c
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
         2 3 2
       3 4 5 4 3
     4 5 6 7 6 5 4
   5 6 7 8 9 8 7 6 5

*/

#include <stdio.h>

int main()
{

  int n = 5;
  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j < n; j++)
    {
      printf("  ");
    }

    for (int j = 1; j <= i; j++)
    {
      printf("%d ", (j + i - 1));
    }

    for (int j = 1; j < i; j++)
    {
      printf("%d ", (2 * i - j - 1));
    }
    printf("\n");
  }

  return 0;
}