// --------------------- Insertion sorting by saran ---------------------
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 11, 13, 4, 6};
    cout << "Original array: ";
    for (int l = 0; l < 5; l++)
    {
        cout << arr[l] << " ";
    }
    cout << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                for (int k = 0; k < 5; k++)
                {
                    cout << arr[k] << " ";
                }
                cout << endl;
                j = 0;
            }
        }
    }
    return 0;
}