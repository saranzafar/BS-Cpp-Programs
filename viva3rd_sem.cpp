
// --------------- Bubble Sorting ---------------
// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n)
// {
//     int i, j, k;
//     for (i = 1; i < n; i++)
//     {
//         k = arr[i]; // val
//         j = i - 1;  // indx

//         while (j >= 0 && arr[j] > k)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = k;

//         // Print the current state of the array
//         cout << "Iteration " << i << ": ";
//         for (int k = 0; k < n; k++)
//         {
//             cout << arr[k] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int arr[] = {13, 12, 11, 5, 6};
//     int n = 5;
//     cout << "Original array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     insertionSort(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }


/*
// --------------- Bubble Sorting ---------------
#include<iostream>
using namespace std;
int main()
{
    int tot, arr[10], i, j, temp, small, chk, index;//tot is a size and arr is a element
    cout<<"Enter the Size of Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    for(i=0; i<(tot-1); i++)
    {
        chk=0;
        small = arr[i];
        for(j=(i+1); j<tot; j++)
        {
            if(small>arr[j])
            {
                small = arr[j];
                chk++;
                index = j;
            }
        }
        cout<<"Step "<<i+1<<": ";
for(j=0; j<tot; j++)
    cout<<arr[j]<<" ";
cout<<endl;

        if(chk!=0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[index] = temp;
        }
    }
    cout<<"\nSorted Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
*/
/*
// --------------- Bubble Sorting ---------------
#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {14, 12, 15, 4, 3};
    int temp, count1 = 0;

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
*/
/*
// --------------- Queue  ---------------
#include <iostream>
using namespace std;
int arr[5] = {0, 0, 0, 0, 0};
int count1 = 0, count2 = 0;
int isfull()
{
    if (count1 == 5)
    {
        cout << "Queue is full...!!!\n\n";
        return 1;
    }
    else
    {
        cout << "Queue is not full...!!!\n\n";
        return 0;
    }
}
int isempty()
{
    if (count1 == 0 || count2 == 5)
    {
        cout << "Queue is empty...!!!\n\n";
        return 1;
    }
    else
    {
        cout << "\nQueue is not empty...!!!\n\n";
        return 0;
    }
}
void enqueue()
{
    if (isfull() == 1)
    {
        cout << "Queue is full..." << endl;
    }
    else
    {
        cout << "Insert Element in Queue: " << endl;
        cin >> arr[count1];
        count1++;
    }
}
void dequeue()
{
    if (isempty() == 1)
    {
        cout << "Queue is Empty..." << endl;
    }
    else
    {
        arr[count2] = 0;
        count2++;
        cout << "element at index " << count2 << " has been deleted..." << endl;
        if (count2 == 5)
        {
            count1 = 0;
        }
    }
}
void display()
{
    cout << "\nQueue: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n";
}
int main()
{
    int val;
    do
    {
        cout << "1. Enqueue()\n";
        cout << "2. dequeue()\n";
        cout << "3. isfull()\n";
        cout << "4. isempty()\n";
        cout << "5. display()\n";
        cout << "6. exit()\n";
        cin >> val;
        switch (val)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
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

        default:
            cout << "Wrong entry...\n";
            break;
        }
    } while (val != 6);
    return 0;
}
*/
/*
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

*/
/*
// ------------------ Linked List Using array ------------------
#include <iostream>
#include <string>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void printlist(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = arr[0];
    head->next = second;

    second->data = arr[1];
    second->next = third;

    third->data = arr[2];
    third->next = NULL;

    printlist(head);
    return 0;
}
*/
/*
// ------------------ Linked List ------------------
#include <iostream>
#include <string>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);
    return 0;
}
*/
/*
// ------------------ Calculate average in array ------------------
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int avg, sum;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / 5;
    cout << "Average = " << avg;
    return 0;
}
*/