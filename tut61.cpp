#include <iostream> //reading and writting same file at same time in file i/o
#include <fstream>
using namespace std;
int main()
{
    // connecting file with hout stream
    ofstream hout("tut61.txt");

    // creating a name string and filling it with the string entered by user
    cout << "Enter your name: " << endl;
    string name;
    cin >> name;

    // writing a string to the file
    hout << "My name is " + name;

    hout.close(); // deal with multiple file

    ifstream hin("tut61.txt");
    string contant;
    hin >> contant;
    cout << "the content of file is " + contant;
    hin.close();
    return 0;
}
