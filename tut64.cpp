// #include <iostream> //templets in c++ part2
// using namespace std;
// template <class T>
// class vector
// {
// public:
//     T *arr;
//     int size;
//     vector(int m)
//     {
//         size = m;
//         arr = new T[size]; // dynamically initilized
//     }
//     T dotProduct(vector &v) // friend function initilization
//     {
//         T d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };
// int main()
// {
//     vector<float> v1(3); // vector 1
//     v1.arr[0] = 4;
//     v1.arr[1] = 3;
//     v1.arr[2] = 1;
//     vector<float> v2(3); // vector 2
//     v2.arr[0] = 1;
//     v2.arr[1] = 0;
//     v2.arr[2] = 1;
//     int a = v1.dotProduct(v2);
//     cout << a << endl;
//     return 0;
// }

#include <iostream> //Templets in c++ part 1
using namespace std;
class vector
{
public:
    int *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new int[size]; // dynamically initilized
    }
    int dotProduct(vector &v) // friend function initilization
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector v1(3); // vector 1
    v1.arr[0] = 2;
    v1.arr[1] = 1;
    v1.arr[2] = 1;
    vector v2(3); // vector 2
    v2.arr[0] = 2;
    v2.arr[1] = 0;
    v2.arr[2] = 4;
    int a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}