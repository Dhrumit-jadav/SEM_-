#include <stdio.h>
void  main()
{
   int row, i, j, num = 1;
   
   printf("Enter the num of row: ");
   scanf("%d", &row);
   
   for (i = 1; i <= row; i++) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("%d ", num);
         num++;
      }
      printf("\n");
   }
}
