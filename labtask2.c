#include <stdio.h>
int main()
{
    int arr[3];
    int i, sum = 0;
    float avg;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / 4;
    printf("Sum = %d", sum);
    printf("Average = %.2d", avg);
    return 0;
}
