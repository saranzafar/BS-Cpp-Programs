#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, k;
    for (i = 1; i < n; i++)
    {
        k = arr[i]; // val
        j = i - 1;  // indx

        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;

        // Print the current state of the array
        cout << "Iteration " << i << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {13, 12, 11, 5, 6};
    int n = 5;
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}