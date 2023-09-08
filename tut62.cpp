#include <iostream>// open() and close() functions in File i/o
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ofstream obj1;
    obj1.open("tut62.txt");
    obj1 << "this is me\n";
    obj1 << "this is me\n";
    obj1 << "this is me\n";
    obj1 << "this is me\n";
    obj1.close();

    ifstream obj2;
    string str;
    obj2.open("tut62.txt");
    // obj2 >> str;//for printing only one character
    while (obj2.eof() == 0)
    {
        getline(obj2, str);
        cout << str;
        cout << "\n";
    }
    return 0;
}
