//                   BOOK SHOP INVENTORY SYSTEM

//  Included headerfiles in Cpp program

#include <iostream> //Basic standard I\O library in c++
#include <string.h> //Cpp library to perform string operations
#include <stdlib.h> //General Utilities library for dynamic memory allocation, searching,and sorting etc..
#include <fstream>  // To read and write information from filies
#include <conio.h>
using namespace std;                  // In order to user Cpp identefiers like cout & cin
fstream file;                         // declared a global variable for filing
class book                            // class name
{                                     // class is a user defined data type with its own data members and member functions.
private:                              // private data members cant be accessed outside the class
    char *author, *title, *publisher; //  *using pointers                                                                   //0*fc..... adress
    float price;                      // asteric is used to declare a pointer
    int stock;

public: // public members can be accessed anywhere
    // Constructor has the same name as that of class which is used to allocated memory when ever an instance is called
    int bookID;
    book() // Multi-Argument constructor declared and defined
    {
        author = new char[30]; // new is keyword in Cpp to allocate memory
        title = new char[30];
        publisher = new char[30];
    }
    // member functions deceleration
    void mainMenu();            // Displaying the options available
    void feeddata();            // Take data from user
    void editdata();            // edit user data when required
    void showdata();            // Display data entered by user
    int search(char[], char[]); // search if the required book in inventory
    void buybook();             // take data from user and compare with inventory
    void showData();
}; // ; denote the end of class
// function defined
//  " :: " Its called scope resoluton operator and is used to access class member functions outside the class
void book::mainMenu()
{
    system("color 4");
    cout << "\n    -------------------------------------------------------------------------------------------" << endl;
    cout << "\n   |                           <<<    Welcome to Book Shop:        >>>                        |" << endl;
    cout << "\n   |                          <<<    please select a Option:    >>>                           |" << endl;
    cout << "\n   |                  (1).  Enter Password and add a new Book :                               |" << endl;
    cout << "\n   |                  (2).  Buy Book:                                                         |" << endl;
    cout << "\n   |                  (3).  Search data:                                                      |" << endl;
    cout << "\n   |                  (4).  Edit Data:                  	     								|" << endl;
    cout << "   |                  (5).  Show Details:                                                     |" << endl;
    cout << "\n   |                  (6).  Exit:                                                             |" << endl;
    cout << "      -------------------------------------------------------------------------------------------" << endl;
}
void book::feeddata()
{
    cin.ignore(); // ignore or clear one or more characters from input buffer
    cout << "\n Enter Book ID: ";
    cin >> bookID;
    cin.ignore();
    cout << "\n Enter Title Name: ";
    cin.getline(title, 30);
    cout << "\n Enter Author Name: ";
    cin.getline(author, 30);
    cout << "\n Enter Publisher Name: ";
    cin.getline(publisher, 30);
    cout << "\n Enter Price in Ruppes: ";
    cin >> price;
    cout << "\n Enter total books: ";
    cin >> stock;
    // Cpp file Handling
    // To write data on file in memory
    file.open("shop.txt", ios::out | ios::app); // ios::in | ios::out fstream enables both input and output for the stream.
    file << " " << title << " " << author << " " << publisher << " " << price << " " << stock << endl;
    file.close(); // To close file after writing
}
void book::editdata()
{
    cin.ignore();
    system("color D");
    cout << "\n Enter Book id:";
    cin >> bookID;
    cin.ignore();
    cout << "Enter Title Name: ";
    cin.getline(title, 30);
    cout << "\nEnter Author Name: ";
    cin.getline(author, 30);
    cout << "Enter Publisher Name: ";
    cin.getline(publisher, 30);
    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter Stock Position: ";
    cin >> stock;
}
void book::showdata()
{
    system("color 5");
    cout << "\n Book Id= " << bookID << "\n Title =" << title << "\n Author name=" << author << "\n Publisher =" << publisher << "\n Price of book=" << price << "\n Total Books in stock=" << stock;
}
void book::showData()
{
    system("cls"); // clear screen to avoid screen buffer
    system("color 0A");
    file.open("shop.txt", ios::in);
    if (!file)
        mainMenu();
    else
    {
        file >> title >> author >> publisher >> price >> stock;
        while (!file.eof())
        {
            cout << "\n " << bookID << "\n " << title << "\n"
                 << author << publisher << price << stock;
            file >> title >> author >> publisher >> price >> stock;
        }
        file.close();
    }
}
int book::search(char tbuy[30], char abuy[30])
{
    system("color 7");
    if (strcmp(tbuy, title) == 0 && strcmp(abuy, author) == 0) // strcmp is used to compare two strings char by char
        return 1;
    else
        return 0;
}
void book::buybook()
{
    int count;
    cout << "\n Enter Number Of Books to buy: ";
    cin >> count;
    if (count <= stock)
    {
        stock = stock - count;
        cout << "\n Books Bought Sucessfully";
        cout << "\n Amount: Rs. " << (price)*count;
    }
    else
        cout << "\n Required Copies not in Stock";
}
int main()
{
    string username;
    string password;
    int ch;
    book *B[20]; // declared a pointer array to the instance of class book
    int i = 0;   // initiliaze i with 0
    int stock;   // Total Number of books in shop
    int choice;
    char titlebuy[30], authorbuy[30];
start1:
    cout << "\t\t\t\t\t________Please Login______";
    cout << "\n\nEnter User Name : ";
    cin >> username;
    cout << "Enter Password : ";
    cin >> password;
    // ch = getch();
    // while (ch != 13)
    // {
    //     password.push_back(ch);
    //     cout << '*';
    //     ch = getch();
    // }
    if (username == "user" && password == "123")
        while (1)
        {
            B[i]->mainMenu();
            cout << "\n\n<<<   Enter your Choice please. >>> " << endl;
            cin >> choice;
            // else{

            // cout <<"Invalid password: ";
            // }
            switch (choice)
            {
            case 1:
                // If password is correct allow user to enter data
                {
                    B[i] = new book;
                    B[i]->feeddata(); //  -> aerrow operator   //insted of * & . operator combination
                    i++;
                }

                break;
            case 2:
                cin.ignore();
                cout << "\n Enter Title Of Book: ";
                cin.getline(titlebuy, 20);
                cout << "\n Enter Author Of Book: ";
                cin.getline(authorbuy, 20);
                for (stock = 0; stock < i; stock++)
                {
                    if (B[stock]->search(titlebuy, authorbuy))
                    {
                        B[stock]->buybook();
                        break;
                    }
                }
                if (stock == 1)
                    cout << "\n This Book is Not in Stock";

                break;
            case 3:
                cin.ignore();
                int bookID;
                cout << "\n Enter Book id:";
                cin >> bookID;
                cin.ignore();
                cout << "\n Enter Title Of Book: ";
                cin.getline(titlebuy, 30);
                cout << "\n Enter Author Of Book: ";
                cin.getline(authorbuy, 30);

                for (stock = 0; stock < i; stock++)
                {
                    if (B[stock]->search(titlebuy, authorbuy))
                    {
                        cout << "\n Book Found Successfully";
                        B[stock]->showdata();
                        break;
                    }
                }
                if (stock == i)
                    cout << "\n This Book is Not in Stock";
                break;

            case 4:
                cin.ignore();
                {
                    cin.ignore();
                    cout << "\n Enter Title Of Book: ";
                    cin.getline(titlebuy, 30);
                    cout << "\n Enter Author Of Book: ";
                    cin.getline(authorbuy, 30);

                    for (stock = 0; stock < i; stock++)
                    {
                        if (B[stock]->search(titlebuy, authorbuy))
                        {
                            cout << "\n Book Found Successfully" << endl;
                            B[stock]->editdata();
                            break;
                        }
                    }
                    if (stock == i)
                        cout << "\n This Book is Not in Stock";
                    break;
                }
                break;

            case 5:
                B[i] = new book;
                for (stock = 0; stock < i; stock++)
                    B[stock]->showdata();
                break;

            case 6:
                exit(0); // Library function to exit or quit application

            default:
                cout << "\n Invalid Choice Entered";
            }
        }
    else
    {
        cout << "\nWrong Password...!\n";
        cout << "\nPress '0' to Exit\n";
        int i;
        cin >> i;
        if (i == 0)
        {
            cout << "\nProgram Terminated...!!!\n\a\a";
            exit;
        }
        else
        {
            cout << "\nPlease ReEnter password...!!!\n";
            system("pause");
            system("cls");
            goto start1;
        }
    }
}