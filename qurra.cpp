#include <iostream>
using namespace std;
class library
{
private:
    int x, z;
    void set_book()
    {
        if (z == 1)
        {
            cout << "1. Bio" << endl;
            cout << "2. Physics" << endl;
            cout << "0. Exit" << endl;
            cin >> x;
            switch (x)
            {
            case 1:
                cout << "Book selected..!" << endl;
                break;
            case 2:
                cout << "Book selected..!" << endl;
                break;
            default:
                exit;
                break;
            }
        }
        else if (z == 2)
        {
            cout << "1. Arabic" << endl;
            cout << "2. Arts" << endl;
            cout << "0. Exit" << endl;
            cin >> x;
            switch (x)
            {
            case 1:
                cout << "Book selected..!" << endl;
                break;
            case 2:
                cout << "Book selected..!" << endl;
                break;
            default:
                exit;
                break;
            }
        }
    }

public:
    void choose_book()
    {

        cout << "Which book you want to choose: " << endl;
        cout << "Pres '1' for science: " << endl;
        cout << "Pres '2' for Others: " << endl;
        cout << "Pres '0' exit: " << endl;
        cin >> z;
        set_book();
    }
    library() {}
    ~library() {}
};
class book_shop : public library // inheritance
{
public:
    int x, z;
    void shop()
    {
        choose_book();
    }
};
int main()
{
    library obj1;
    book_shop obj2;
    int a;
    cout << "Where you want to go \n";
    cout << "1. library \n";
    cout << "2. Shop \n";
    cin >> a;
    if (a == 1)
    {
        obj1.choose_book();
    }
    else
    {
        obj2.shop();
    }

    return 0;
}
