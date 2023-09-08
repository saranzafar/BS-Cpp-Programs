#include <iostream> //virtual fuction example
#include <string.h>
#include <cstring>
using namespace std;
class cwh
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
    virtual void display() {}
    //  void display() {cout<<"Hehe"<<endl;}
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
    void display() // if i comment out this function it simply run its own base class function which print "hehe"
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
    // djvideo.display();

    // for code with harry text
    tital = "Django tutorial text";
    words = 433;
    rating = 4.19;
    cwhtext djtext(tital, rating, words);
    // djtext.display();

    cwh *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}
/*
------ Rules for Vertual Function ------
1. They cannot be Static.
2. They are accessed by object Pointers.
3. Virtual functions can be a friend of another class.
4. A function in base class might not be used.
5. if a vertual function dfined in the base class there is no necessety of redefining it in the derived class.
*/