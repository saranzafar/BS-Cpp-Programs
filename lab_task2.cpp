#include <iostream>
using namespace std;
float Eng, math, OOP, Acc, SE, GP1[5];
int i = 0, semester;
string Name;
class GPA
{
private:
    float T_GPA, GP, QP, T_CGPA, Wt_Avrg1[9], Crd_hr, WA;
    void Calculation()
    {
        for (int i = 0; i < 5; i++)
        {
            GP = GP + GP1[i];
        }
        QP = GP * 3;
        T_GPA = QP / 15;
    }
    void Cal_CGPA()
    {
        for (int j = 0; j < semester; j++)
        {
            cout << "Enter GPA of semester-" << (j + 1)<<": -->> ";
            cin >> GP1[j];
            cout << endl;
            Wt_Avrg1[j] = GP1[j] * 15;
            WA = WA + Wt_Avrg1[j];
            i++;
        }
        Crd_hr = (15 * i);
        T_CGPA = WA / Crd_hr;
    }

public:
    void Grades(int);
    void Display();
    void Dsp_CGPA();
};
void GPA::Dsp_CGPA()
{
    cout << "\n";
    Cal_CGPA();
    cout << ">------------------------------------------< \n\n";
    cout << " -->> Total weight average = " << WA << endl;
    cout << "-->> Total Credit hour = " << Crd_hr << endl;
    cout << "\n -->> CGPA = " << T_CGPA << endl
         << endl;
}
void GPA::Display()
{
    Calculation();
    cout << "\n -->> GPA = " << T_GPA << endl
         << endl;
}
void GPA::Grades(int take1)
{
    if (take1 >= 85 && take1 <= 100)
    {
        cout << Name << "\t\t " << take1 << "\t A+\t     4\n"
             << endl;
        GP1[i] = 4;
        i++;
    }
    else if (take1 >= 77)
    {
        cout << Name << "\t\t " << take1 << "\t A\t    3.6\n"
             << endl;
        GP1[i] = 3.6;
        i++;
    }
    else if (take1 >= 67)
    {
        cout << Name << "\t\t " << take1 << "\t B+\t    3.3\n"
             << endl;
        GP1[i] = 3.3;
        i++;
    }
    else if (take1 >= 60)
    {
        cout << Name << "\t\t " << take1 << "\t B\t     3\n"
             << endl;
        GP1[i] = 3;
        i++;
    }
    else if (take1 >= 50)
    {
        cout << Name << "\t\t " << take1 << "\t C\t    2.5\n"
             << endl;
        GP1[i] = 2.5;
        i++;
    }
    else
    {
        cout << Name << "\t\t N/L\t F\t    N/L\n"
             << endl;
        GP1[i] = 1;
        i++;
    }
}
class Inherited : private GPA
{
private:
public:
    void Input()
    {
        cout << ">------------------------------------------< \n";
        cout << ">-------------- Enter Marks ---------------< \n";
        cout << ">------------------------------------------< \n";
        cout << "    -->> English\t    ";
        cin >> Eng;
        cout << "\n    -->> Math\t\t    ";
        cin >> math;
        cout << "\n    -->> OOP\t\t    ";
        cin >> OOP;
        cout << "\n    -->> SE\t\t    ";
        cin >> SE;
        cout << "\n    -->> Accounting\t    ";
        cin >> Acc;
        cout << ">------------------------------------------< \n";
        cout << ">----------------- Marks ------------------< \n";
        cout << ">------------------------------------------< \n\n";
        system("pause");
        system("cls");
        cout << ">--------------------------------------------< \n";
        cout << " Subject\tMarks\tGrade\tGrade-points\n";
        cout << ">--------------------------------------------< \n";
        Name = "English";
        Grades(Eng);
        Name = "Math";
        Grades(math);
        Name = "OOP";
        Grades(OOP);
        Name = "SE";
        Grades(SE);
        Name = "Acc";
        Grades(Acc);
        cout << ">--------------------------------------------< \n\n";
        system("pause");
        Display();
    }
    void inpt_GPA2()
    {
        cout << ">------------------------------------------< \n";
        cout << ">|-------------- Semesters ---------------|< \n";
        cout << ">------------------------------------------< \n";
        cout << "Enter No of Semesters: ";
        cin >> semester;
        if (semester >= 2 && semester <= 8)
        {
            Dsp_CGPA();
        }
        else
        {
            cout << "Wrong entry...!!!\n";
        }
    }
};
int main()
{
    cout << "In constructor\n\n";
    cout << " \n\t------------ Lab Task 2 ------------ \n\n";
    cout << " \tSubmitted by:	 Saran Zafar\n\n";
    cout << " \tRoll no:	 05\n\n";
    cout << " \tSubmitted To: 	 Sir Amji Hussain\n";
    cout << " \n\t------------ Lab task 2 ------------ \n\n";
    system("pause");
    system("cls");
    Inherited obj1;
    int z;
    cout << ">--------------------------------------------<\n";
    cout << ">|          What you want to do?            |<\n";
    cout << ">--------------------------------------------<\n";
    cout << " -->> 1. Calculate GPA: \n";
    cout << " -->> 2. Calculate CGPA: \n";
    cout << " -->> 3. Exit: \n";
    cin >> z;
    if (z == 1)
    {
        obj1.Input();
    }
    else if (z == 2)
    {
        obj1.inpt_GPA2();
    }
    else
    {
        exit;
    }

    return 0;
}