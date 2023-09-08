#include <iostream>
using namespace std;
int main()
{
    int tot, arr[10], i, j, temp, small, chk, index; // tot is a size and arr is a element
    cout << "Enter the Size of Array: ";
    cin >> tot;
    cout << "Enter " << tot << " Array Elements: ";
    for (i = 0; i < tot; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < (tot - 1); i++)