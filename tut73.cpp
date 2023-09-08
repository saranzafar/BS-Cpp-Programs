#include <iostream> //maps in c++
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksmap;
    marksmap["harry"] = 98;
    marksmap["saran"] = 32;
    marksmap["jack"] = 98;

    // map<string, int>::iterator iter;
    // for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    // {
    //     cout << (*iter).first << " " << (*iter).second << "\n";
    // }

    marksmap.insert({{"Kozume", 169}, {"kuroo", 187.7}});
    map<string, int>::iterator iter;
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout << "this size is: " << marksmap.size() << endl;
    cout << "this max size is: " << marksmap.max_size() << endl;
    cout << "this empty is: " << marksmap.empty() << endl;
    return 0;
}
// maps are use to store key value paires (marks of student)
//  map is an associtative array