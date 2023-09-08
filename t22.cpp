// check binary & nesting of member function or how to privat a function
#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;
    void ch_bin(void);
public:
    void read(void);
    void ons_com(void);
    void display(void);
};
void binary::read(void)
{
    cout << "Enter a binary number:" << endl;
    cin >> s;
}
void binary::ch_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "invalid binary number..." << endl;
            exit(0);
        }
    }
}
void binary::ons_com(void)
{
    ch_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    // b.ch_bin();
    b.ons_com();
    b.display();
    return 0;
}
