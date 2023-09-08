#include <iostream>
using namespace std;
int main()
{
    int arr[] = {14, 12, 15, 4, 3};
    int temp,  count1 = 0;

    cout << "14 12 15 4 3" << endl;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }

            cout << arr[i] << " ";

        }
        cout << arr[4] << endl;
    }
    return 0;
}