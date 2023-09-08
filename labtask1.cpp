#include <iostream>
using namespace std;
int main()
{
    int a[4];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i << " number: ";
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "At index a[" << i << "] you entered: " << a[i];
        cout << endl;
    }

    return 0;
}
