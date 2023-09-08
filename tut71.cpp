#include <iostream> //vactor in c++
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v) 
// void display(vector<int> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    // ---------- unlimited array ----------
    vector<int> vec1; // zero length vector
    int element, size = 5;
    // cout << "Enter Size of vector: " << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add to this vector: ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // display(vec1);

    // ---------- adding element to array ----------
    // vec1.pop_back();
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter, 566);
    // vec1.insert(iter + 1, 566);
    // vec1.insert(iter + 1, 5, 566);
    // display(vec1);

    // ---------- ways to create a vector ----------
    vector<int> vec1; // zero length vector

    vector<char> vec2(4); // 4-element character vector
    vec2.push_back('5');  // displaying vec2
    display(vec2);

    vector<char> vec3(vec2); // 4-element character vector from vec2
    display(vec3);

    vector<int> vec4(4, 13); // 4-->> length, 13-->> printed 4th time on screen

    display(vec4);
    cout << vec4.size();
    return 0;
}
