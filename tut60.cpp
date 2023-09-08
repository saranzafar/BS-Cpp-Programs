/*
 --------------- Reading and writing in File I/O ---------------
The useful classes for working with file in c++ are:
-->> fstreambaase
-->> ifstream -->> derived from fstreambaase
-->> ofstream -->> derived from fstreambaase
-->> these three classes from <fstream>
In order to work with c++ Files, you will have to open it.
There are two ways to open a file
1. using a constructor
2. using the member function open() of class
*/
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    // opening a file using a constructor and writing it
    // ofstream is a class
    string st = "harry bhai";
    ofstream out("tut60samplefile.txt"); // write operation
    out << st;

    // opening a file using a constructor and reading it
    // ifstream is a class
    string st2;
    ifstream in("tut60samplefile2.txt"); // read operation
    // in >> st2;//only for one character
    getline(in, st2);
    cout << st2;
    return 0;
}