#include <iostream>
using namespace std;
int a[5], price[5], password[5];

void start()
{
    cout << " \n\t ------------ Hotel Managment System ------------ \n\n";
    cout << " \tSubmitted by:	 Ali Naqvi 04\n\n";
    cout << " \t            	 Husnain Naqvi 05\n\n";
    cout << " \t            	 Muhammad Riqaz 21\n\n";
    cout << " \tSubmitted To: 	 Ma'am Sadia";
    cout << " \n\n\t------------ Semester project ------------------- \n\n";
    system("pause");
    system("cls");
}
void customer()
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
void admin()
{
    cout << "\n------------------Only Admin Allowed...!!!------------------\n";
    cout << "Enter Password to continue: \n";
    cin >> password[0];
    if (password[0] == 786)
    {
        cout << "Total Earning: " << price[0] << endl;
    }
    else
    {
        cout << "Error...!!!" << endl;
    }
    system("pause");
    system("cls");
}

int main()
{
    int var1;
    start();
start1:
    cout << "\nAdmin '1'\t";
    cout << "Customer '2'\t";
    cout << "Exit '3'\t";
    cin >> var1;
    switch (var1)
    {
    case 1:
    {
        admin();
        goto start1;
        break;
    }
    case 2:
    {
        customer();
        goto start1;
        break;
    }
    default:
    {
        break;
    }
    }
    cout << "\nProgram terminated :)\n\n";
    return 0;
}
