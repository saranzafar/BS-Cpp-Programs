
#include <iostream>
using namespace std;

class Node
{
public:
    int data;   // integer
    Node *next; // pointer 1
};

void create(Node *&head, int arr[], int n)
{
    Node *temp; // pointer 3
    head = new Node;
    head->data = arr[0];
    head->next = NULL;
    temp = head;
    for (int i = 1; i < n; i++)
    {
        Node *new_node = new Node; // pointer 4 
        new_node->data = arr[i];
        new_node->next = NULL;
        temp->next = new_node;
        temp = new_node;
    }
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << "Null ";
}

int main()
{
    int a[5] = {3, 4, 5, 6, 7};
    int n = 5;
    Node *head = NULL; // pointer 2
    create(head, a, n);
    display(head);
    return 0;
}
