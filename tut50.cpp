// revisiting pointers: new and delete keywords
#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *ptr = &a;
    *ptr = 99;
    cout << "The value of a is " << *(ptr) << endl; // dereference
    // new keyword
    int *p = new int(55);
    cout << "The value  at adress p is " << *(p) << endl; // dereference

    int *arr = new int[3];
    arr[0] = 11;
    // arr[1] = 12;
    *(arr + 1) = 12;
    arr[2] = 13;
    // delete[] arr;
    cout << "The value  of arr[0] is " << arr[0] << endl;
    cout << "The value  of arr[1] is " << arr[1] << endl;
    cout << "The value  of arr[2] is " << arr[2] << endl;
    // delete operator

    return 0;
}