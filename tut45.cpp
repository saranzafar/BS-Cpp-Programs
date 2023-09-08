/*
---------- vartual base class ----------

            --->> test(a)
student(a)                  --->> result
            --->> sport(a)
*/
#include <iostream> //demonstrating base class
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "your roll no is " << roll_no << endl;
    }
};
// class test: public virtual student
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "your result is here" << endl
             << "Maths: " << maths << endl
             << "physics: " << physics << endl;
    }
};
class sport : virtual public student
{
protected:
    float score;

public:
    void set_sc(float sc)
    {
        score = sc;
    }
    void print_sc()
    {
        cout << "Your PT score is " << score << endl;
    }
};
class result : public test, public sport
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_sc();
        cout << "Your total score is " << total << endl;
    }
};
int main()
{
    result obj1;
    obj1.set_number(302);
    obj1.set_marks(78.5, 99.5);
    obj1.set_sc(9);
    obj1.display();
    return 0;
}
