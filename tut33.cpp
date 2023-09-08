#include <iostream> //Dynamic initialization of objects
// dynamically means during or after run time
using namespace std; // compound & simpal intrest
class bankdeposit
{
private:
    int principal, years;
    float intrestRate, returnValue;

public:
    bankdeposit(){};
    bankdeposit(int p, int y, float r); // r canbe value like 0.04
    bankdeposit(int p, int y, int r);   // r canbe value like 14
    void show();
};
bankdeposit::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    intrestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        // returnValue = returnValue * (1 + r);//for float
        returnValue = returnValue * (1 + intrestRate);
    }
}
bankdeposit::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    intrestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}
void bankdeposit::show()
{
    cout << "Principal amount was " << principal << endl
         << "Return value after " << years << " is " << returnValue << endl;
}
int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y, R;
    float r;
    cout << "Enter value of p \n";
    cin >> p;
    cout << "Enter value of y \n";
    cin >> y;
    cout << "Enter value of r \n";
    cin >> r;

    bd1 = bankdeposit(p, y, r);
    bd1.show();
    cout << "Enter value of p \n";
    cin >> p;
    cout << "Enter value of y \n";
    cin >> y;
    cout << "Enter value of r \n";
    cin >> R;

    bd2 = bankdeposit(p, y, R);
    bd2.show();
    return 0;
}
