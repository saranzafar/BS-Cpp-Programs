#include <iostream>
using namespace std;
int main()
{
    int arr[3];
    float sum = 0, avg;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter arr[" << i << "] value: ";
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / 4;
    cout << endl
         << "Sum = " << sum << endl;
    cout << "Average = " << avg;
    return 0;
}