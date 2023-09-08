// --------------- Stack ---------------
#include <iostream>
using namespace std;
int arr[5] = {0, 0, 0, 0, 0};
int count1 = 0;
int isfull()
{
    if (count1 == 5)
    {
        cout << "stack is full...!!!\n\n";
        return 1;
    }
    else
    {
        cout << "stack is not full...!!!\n\n";
        return 0;
    }
}
int isempty()
{
    if (count1 == 0)
    {
        cout << "stack is empty...!!!\n\n";
        return 1;
    }
    else
    {
        cout << "\nstack is not empty...!!!\n\n";
        return 0;
    }
}
void insertion()
{
    if (isfull() == 1)
    {
        cout << "\n";
    }
    else
    {
        int i = count1;
        cout << "Enter data at index " << i << " \n";
        cin >> arr[i];
        count1++;
    }
}
void deletion()
{
    if (isempty() == 1)
    {
        cout << "\n";
    }
    else
    {
        int i = (count1 - 1);
        arr[i] = 0;
        count1--;
        cout << "last element from stack is deleted...!!!\n";
    }
}
void display()
{
    cout << "\nstack: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n";
}
int main()
{
    int num;
    do
    {
        cout << "1. insertion()\n";
        cout << "2. deletion()\n";
        cout << "3. isfull()\n";
        cout << "4. isempty()\n";
        cout << "5. display()\n";
        cout << "6. exit()\n";
        cin >> num;
        switch (num)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            isfull();
            break;
        case 4:
            isempty();
            break;
        case 5:
            display();
            break;
        case 6:
            exit;
            break;
        default:
            cout << "wrong entry...!!!\n";
            break;
        }
    } while (num != 6);

    return 0;
}