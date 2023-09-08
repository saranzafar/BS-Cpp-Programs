#include <iostream>
using namespace std;
class shop
{
private:
    int itemid[10];
    int itemprice[10];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void)
{
    cout << "enter id of item no " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of item " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop dukan;
    dukan.initcounter();
    int a;
    for (int i = 0; i <=i; i++)
    {
    cout<<"press zero to exit"<<endl;
    cin>>a;
        if (a == 0)
        {
            break;;
        }
        dukan.setprice();
    }
    dukan.displayprice();
}