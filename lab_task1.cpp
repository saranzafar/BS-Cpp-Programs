#include <iostream>
#include <conio.h>
using namespace std;
class Base
{
private:
    int a[4];
    int price[2] = {0, 0};
    int earning = 0;
    int Total = 0;
    int password = 0;
    void security()
    {
        cout << "Enter Password to continue: ";
        cin >> password;
        if (password == 786)
        {
            cout << "Todays earning = " << earning << endl;
        }
    }

public:
    void Set_Earning();
    void get_earning();
    void Base1(void);
    // Base1();
    void todays_earning();
};
void Base::Base1(void)
{
    cout << "\n >------------------------------------------< \n";
    cout << " >--------- Welcom to Kashmir View ---------< \n";
    cout << " >------------------------------------------< \n";
    cout << " >-------------- Order please --------------< \n\n\n";
    {
    menu1:
        cout << " --->>>\t   press '1' for Breakfast     <<<---\n";
        cout << " --->>>\t   press '2' for lunch\t       <<<---\n";
        cout << " --->>>\t   press '3' for Dinner\t       <<<---\n";
        cout << " --->>>\t   press '0' for exit\t       <<<---\n";
        cin >> a[0];
        switch (a[0])
        {
        case 1:
        {
        menu2:
            cout << "\t1. Tea '1'\n";
            cout << "\t2. Tea + Bakers '2'\n";
            cout << "\t3. exit '0'\n";
            cin >> a[1];
            switch (a[1])
            {
            case 1:
                cout << "\tOrder\tPrice\n";
                cout << "\tTea\tRs.50\n\n";
                cout << "Do You Want to order?\n";
                cout << "Yes press '1'\tNo Press '2'\n";
                cin >> a[2];
                if (a[2] == 1)
                {
                    cout << "Order placed...!\n";
                    price[0] = price[0] + 50;
                }
                else if (a[2] == 2)
                {
                    goto menu2;
                }
                else
                {
                    cout << "Wrong Entry...!!!\n";
                }
                goto menu2;
                break;
            case 2:
            {
                cout << "\tOrder\t\tPrice\n";
                cout << "\tTea+bakers\tRs.100\n\n";
                cout << "Do You Want to order?\n";
                cout << "Yes press '1'\tNo Press '2'\n";
                cin >> a[2];
                if (a[2] == 1)
                {
                    cout << "Order placed...!\n";
                    price[0] = price[0] + 100;
                }
                else if (a[2] == 2)
                {
                    goto menu2;
                }
                else
                {
                    cout << "Wrong Entry...!!!\n";
                }
                goto menu2;
                break;
            }
            case 0:
            {
                goto menu1;
                break;
            }
            default:
                cout << "Wrong entry...!!!\n";
                goto menu2;
                break;
            }
            break;
        }
        case 2:
        {
        menu3:
            cout << "\t1. Biryani '1'\n";
            cout << "\t2. Normal  '2'\n";
            cout << "\t3. exit '0'\n";
            cin >> a[1];
            switch (a[1])
            {
            case 1:
                cout << "\tOrder\tPrice\n";
                cout << "\tBiryani\tRs.200\n\n";
                cout << "Do You Want to order?\n";
                cout << "Yes press '1'\tNo Press '2'\n";
                cin >> a[2];
                if (a[2] == 1)
                {
                    cout << "Order placed...!\n";
                    price[0] = price[0] + 200;
                }
                else if (a[2] == 2)
                {
                    goto menu3;
                }
                else
                {
                    cout << "Wrong Entry...!!!\n";
                }
                goto menu3;
                break;
            case 2:
            {
                cout << "\tOrder\tPrice\n";
                cout << "\tNormal\tRs.150\n\n";
                cout << "Do You Want to order?\n";
                cout << "Yes press '1'\tNo Press '2'\n";
                cin >> a[2];
                if (a[2] == 1)
                {
                    cout << "Order placed...!\n";
                    price[0] = price[0] + 150;
                }
                else if (a[2] == 2)
                {
                    goto menu3;
                }
                else
                {
                    cout << "Wrong Entry...!!!\n";
                }
                goto menu3;
                break;
            }
            case 0:
            {
                goto menu1;
                break;
            }
            default:
                cout << "Wrong entry...!!!\n";
                goto menu3;
                break;
            }
            break;
        }
        case 3:
        {
        menu4:
            cout << "\t1. Biryani + cold drink'1'\n";
            cout << "\t2. Normal Dinner  '2'\n";
            cout << "\t3. exit '0'\n";
            cin >> a[1];
            switch (a[1])
            {
            case 1:
            {
                cout << "\tOrder\t\tPrice\n";
                cout << "\tBiryani + CD\tRs.400\n\n";
                cout << "Do You Want to order?\n";
                cout << "Yes press '1'\tNo Press '2'\n";
                cin >> a[2];
                if (a[2] == 1)
                {
                    cout << "Order placed...!\n";
                    price[0] = price[0] + 400;
                }
                else if (a[2] == 2)
                {
                    goto menu4;
                }
                else
                {
                    cout << "Wrong Entry...!!!\n";
                }
                goto menu4;
                break;
            }
            case 2:
            {
                cout << "\tOrder\t\tPrice\n";
                cout << "\tNormal D\tRs.250\n\n";
                cout << "Do You Want to order?\n";
                cout << "Yes press '1'\tNo Press '2'\n";
                cin >> a[2];
                if (a[2] == 1)
                {
                    cout << "Order placed...!\n";
                    price[0] = price[0] + 250;
                }
                else if (a[2] == 2)
                {
                    goto menu4;
                }
                else
                {
                    cout << "Wrong Entry...!!!\n";
                }
                goto menu4;
                break;
            }
            case 0:
            {
                goto menu1;
                break;
            }
            default:
            {

                cout << "Wrong entry...!!!\n";
                goto menu4;
                break;
            }
            }
            break;
        }
        case 0:
        {
            cout << "Your Bill = " << price[0] << endl;
            cout << "Thanks for comming...\n";
            Set_Earning();
            system("pause");
            system("cls");
            break;
        }
        default:
        {
            cout << "Wrong entry...!!!\n";
            goto menu1;
            break;
        }
        }
    }
}
// Base::~Base() {}
void Base::Set_Earning()
{
    earning = earning + price[0];
}
void Base::get_earning()
{
    cout << "This is only access by Admin\n";
    cout << "Admin '1'\t\t";
    cout << "exit '0'\n";
    cin >> Total;
    if (Total == 1)
    {
        security();
    }
    else if (Total == 0)
    {
        exit;
    }
    else
    {
        exit;
    }
}
class inheritance : public Base
{
private:
    int Var1;

public:
    inheritance()
    {
        {
            cout << "In constructor\n\n";
            cout << " \n\t------------ Lab task ------------ \n\n";

            cout << " \tSubmitted by:	 Saran zafar\n\n";
            cout << " \tRoll no:	 05\n\n";
            cout << " \tSubmitted To: 	 Sir Amji Hussain\n";
            cout << " \n\t------------ Lab task ------------ \n\n";
            system("pause");
            system("cls");
        }
    }
    ~inheritance()
    {
        cout << "\n\nIn Distructor\n";
        system("pause");
        system("cls");
    }
    void Set_data()
    {
    start1:
        cout << "\nAdmin '1'\t";
        cout << "Customer '2'\t";
        cout << "exit '0'\n";
        cin >> Var1;
        switch (Var1)
        {
        case 1:
        {
            get_earning();
            goto start1;
            break;
        }
        case 2:
        {
            Base obj;
            Base1();
            goto start1;
            break;
        }
        default:
        {
            exit;
            break;
        }
        }
    }
};
int main()
{
    inheritance obj3;
    obj3.Set_data();
    return 0;
}
