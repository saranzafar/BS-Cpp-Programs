/*
------------------- Abstract Base class & pure Virtual function -------------------

-->> Abstract base class is made for inheritance and adding more feature in inherited class.
-->> Abstract base class means that we made other classes from it and work on that classes not on it.
-->> Abstract base class is, which has at least one pure virtual function.
-->> Pure virtual function is made for making abstact base class.

------------------- virtual fuction example -------------------
*/
#include <iostream>
#include <cstring>
using namespace std;
class cwh // this class is only made for purpose of making derived class from it.
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // do nothing function or pure virtual function.
};
class cwhvideo : public cwh
{
    float videolength;

public:
    cwhvideo(string s, float r, float vl) : cwh(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with tital " << title << endl;
        cout << "Rating " << rating << " Out of five stars" << endl;
        cout << "Length of this video is " << videolength << " minuts" << endl;
    }
};
class cwhtext : public cwh
{
    int words;

public:
    cwhtext(string s, float r, int wc) : cwh(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing tutorial with tital " << title << endl;
        cout << "Rating of this text tutorial " << rating << " Out of five stars" << endl;
        cout << "Number of words in this text tutorial is " << words << " words" << endl;
    }
};
int main()
{
    string tital;
    float rating, vlen;
    int words;

    // for code with harry videos
    tital = {"Django tutorial"};
    vlen = 4.56;
    rating = 4.89;
    cwhvideo djvideo(tital, rating, vlen);

    // for code with harry text
    tital = "Django tutorial text";
    words = 433;
    rating = 4.19;
    cwhtext djtext(tital, rating, words);

    cwh *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}