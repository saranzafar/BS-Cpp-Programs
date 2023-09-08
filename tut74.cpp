// function objects in c++
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    // function objects(or functor object): a function wrapped in a class so that it is available like an object
    // function work as object
    int arr[] = {1, 11, 4, 12, 5, 7};
    sort(arr, arr + 6);
    // sort(arr, arr + 6,greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
