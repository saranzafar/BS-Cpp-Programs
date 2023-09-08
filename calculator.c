/*
---------- C program using an array ----------
#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 3, 4, 5 };
    for (int i = 0; i <= 7; i++)
    {
        printf("the value at index %d is %d\n", i, arr[i]);
    }

    return 0;
}
*/

/*
---------- C program for calculator ----------
#include <stdio.h>
int main()
{
    int num, num1, num2;
    printf("1. Sum\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Enter first number\n");
        scanf("%d", &num1);
        printf("Enter second number\n");
        scanf("%d", &num2);

        printf("Sum = %d\n", num1 + num2);
        break;
    case 2:
        printf("Enter first number\n");
        scanf("%d", &num1);
        printf("Enter second number\n");
        scanf("%d", &num2);

        printf("Subtraction = %d\n", num1 - num2);
        break;
    case 3:
        printf("Enter first number\n");
        scanf("%d", &num1);
        printf("Enter second number\n");
        scanf("%d", &num2);

        printf("Multiplication = %d\n", num1 * num2);
        break;
    case 4:
        printf("Enter first number\n");
        scanf("%d", &num1);
        printf("Enter second number\n");
        scanf("%d", &num2);

        printf("Division = %d\n", num1/ num2);
        break;

    default:
        printf("you selected wrong input\n");
        break;
    }
    return 0;
}
*/

/*
---------- C program to print a table ----------
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number you want to make calculator: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", num, i, num * i);
    }

    return 0;
}
*/