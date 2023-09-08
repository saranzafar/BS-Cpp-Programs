#include <iostream>
using namespace std;
class patientmanagmentsystem // firsst class
{
private:
    string name, id, age;
    void display_data2() // this function is private and can't acccesable out side as well as by other class
    {
        cout << ">---------------------------------------<\n";
        cout << ">-------------- Hospital ---------------<\n";
        cout << ">---------------------------------------<\n";
        cout << "Name of Patient is: " << name << endl
             << endl;
        cout << "ID of Patient is: " << id << endl
             << endl;
        cout << "Age of Patient is: " << age << endl
             << endl;
        cout << ">-----------------------------------------<\n";
        cout << ">--------------- Hospital ----------------<\n";
        cout << ">-----------------------------------------<\n"
             << endl;
        system("pause");
        system("cls");
    }

public:
    void setdata1()
    {
        cout << ">-----------------------------------------<\n";
        cout << ">-----------------------------------------<\n";
        cout << "Enter the Name : ";
        fflush(stdin);
        getline(cin, name);
        cout << "\nEnter the Id : ";
        fflush(stdin);
        cin >> id;
        cout << "\nEnter the patient age : ";
        fflush(stdin);
        cin >> age;
        cout << "\n>-----------------------------------------<\n";
        cout << ">-----------------------------------------<\n\n";
        system("pause");
        system("cls");
        display_data2(); // Here we access display_data2() function indirectly
    }
};
class scholarship // 2nd class
{
private:
    string name, Department, marks, intermediate;
    void display_data3() // this function is private and can't acccesable out side as well as by other class
    {
        cout << ">-----------------------------------------<" << endl;
        cout << ">-------------- Scholarship --------------<" << endl;
        cout << ">-----------------------------------------<" << endl;
        cout << "Name of studen is: " << name << endl
             << endl;
        cout << "Department of student is: " << Department << endl
             << endl;
        cout << "O/M in matric: " << marks << endl
             << endl;
        cout << "O/M in intermediate: " << intermediate << endl
             << endl;
        cout << ">-----------------------------------------<" << endl;
        cout << ">------- Scholarship form submitted ------<" << endl;
        cout << ">-----------------------------------------<" << endl
             << endl
             << endl;
        system("pause");
        system("cls");
    }

public:
    void setdata2()
    {
        cout << ">-----------------------------------------<" << endl;
        cout << ">-----------------------------------------<" << endl;
        cout << "Enter the Name of studen: ";
        fflush(stdin);
        getline(cin, name);
        cout << "\nEnter the Department : ";
        fflush(stdin);
        cin >> Department;
        cout << "\nEnter the obtained marks in matric : ";
        fflush(stdin);
        cin >> marks;
        cout << "\nEnter the obtained marks in intermediate : ";
        fflush(stdin);
        cin >> intermediate;
        cout << "\n>-----------------------------------------<" << endl;
        cout << ">-----------------------------------------<" << endl
             << endl;
        system("pause");
        system("cls");
        display_data3(); // Here we access display_data3() function indirectly
    }
};
class inherited : public patientmanagmentsystem, public scholarship
// This is 3rd class, 1st and 2nd classes are inherited from here
{
    int num; // declare and initialize a variable

public:
    inherited() // constuctor
    {
        {
            cout << "In constructor\n\n";
            cout << " \n\t------------ Lab task ------------ \n\n";
            cout << " \tSubmitted by:	 Aalia Idrees\n\n";
            cout << " \tRoll no:	 29\n\n";
            cout << " \tSubmitted To: 	 Sir Amji Hussain\n";
            cout << " \n\t------------ Lab task ------------ \n\n";
            system("pause");
            system("cls");
        }
    }
    ~inherited() // Distuctor
    {
        cout << "\n\nIn Distructor\n";
        system("pause");
        system("cls");
    }
    void setdata3()
    {
        cout << "Where you want to go...? \n"
             << endl;
    start:
        cout << "press '1' for Admit a Patient: \n"
             << endl;
        cout << "press '2' for Apply for scholarship: \n"
             << endl;
        cout << "press '3' for exit: \n"
             << endl;
        cin >> num;
        if (num == 1)
        {
            setdata1();
            goto start;
        }
        else if (num == 2)
        {
            setdata2();
            goto start;
        }
        else if (num == 3)
        {
            exit;
        }
        else
        {
            cout << "Wrong entry....!!!\n";
            goto start;
        }
    }
};
int main()
{
    inherited obj; // declare an object
    obj.setdata3();
    return 0;
}
