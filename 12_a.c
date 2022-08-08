#include <stdio.h>
void main()
{
    int num,digit;

    printf("Enter number =");
    scanf("%d",&num);

    while(num != 0)
    {
        digit = num % 10;
        num = num / 10;
        printf("%d\n", digit);
    }
  
}
