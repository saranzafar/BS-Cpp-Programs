#include <iostream> //multilevel inheritance
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_rollno(void);
};
void student::set_roll_no(int r)
{
    roll_no = r;
}
void student::get_rollno()
{
    cout << "Roll no is " << roll_no << endl;
}
class exam : public student
{
protected:
    float math;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam::set_marks(float m1, float m2)
{
    math = m1;
    physics = m2;
}
void exam::get_marks()
{
    cout << "The marks of math are " << math << endl;
    cout << "The marks of physics are " << physics << endl;
}
class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_rollno();
        get_marks();
        cout << "Your percentage is " << (math + physics) / 2 << endl;
    }
};
int main()
{
    result saran;
    saran.set_roll_no(5);
    saran.set_marks(16.0, 65.0);
    saran.display();
    return 0;
}
/*
if we are inheriting B from A and C from B:[ A--->B--->C]
1. A is the base class for B and B is the base class for C
2. ABC is called inheritance path
*/