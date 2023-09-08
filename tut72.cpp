#include <iostream> //list in c++
#include <list>
using namespace std;
void display(list<int> &lis)
{
    list<int>::iterator iter;
    for (iter = lis.begin(); iter != lis.end(); iter++)
    {
        cout << *iter << " "; // move next element
    }
    cout << endl;
}
int main()
{
    list<int> list1; // list of zero length
    list1.push_back(13);
    list1.push_back(17);
    list1.push_back(73);
    list1.push_back(1);
    display(list1);

    // list1.sort(); // sorting the list
    // display(list1);

    // list1.reverse(); // reversing the list
    // display(list1);

    // list1.remove(7);// remove element from the list
    // display(list1);

    // list1.pop_back(); // reduce 1 element at back
    // display(list1);

    // list1.pop_front(); // reduce 1 element at front
    // display(list1);

    list<int> list2(3);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 67;
    iter++;
    *iter = 9;
    iter++;

    list1.sort();
    list2.sort();
    list1.merge(list2); // merging list
    display(list1);

    display(list2);
    return 0;
}
/*
-->> list is another container to store data
-->> it is bidirectional(two direction) linear data list that perfome insertion and deletion operation
-->> slow access fast deletion
-->> it does not store data sequencely it store data where it find space
*/