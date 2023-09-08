#include <stdio.h>
void assendingtable(int a)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }
}
void decendingtable(int a)
{
    for (int i = 10; i >= 1; i--)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }
}
int main()
{
    int a, b, c, d;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Acending table\n");
    assendingtable(a);
    printf("\nDecending table\n");
    decendingtable(a);
}
