// #include <stdio.h> 
// #include<stdlib.h> 
// #include<unistd.h>
// void main(int argc, char *arg[])
// {
//     int pid;
//     pid = fork();
//     if (pid < 0)
//     {

//         printf("fork failed");
//         exit(1);
//     }

//     else if (pid == 0)

//     {

//         execlp("whoami", "ls", NULL);
//         exit(0);
//     }

//     else

//     {

//         printf("\n Process id is -%d\n", getpid());
//         wait(NULL);
//         exit(0);
//     }
// }

// // --------- selection sorting easy self---------
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {15, 13, 10, 7, 4, 3}, chk, index, small;
//     for (int i = 0; i < 5; i++)
//     {
//         chk = 0;
//         small = arr[i];
//         for (int j = i + 1; j < 6; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 small = arr[j];
//                 chk++;
//                 index = j;
//             }
//         }

//         cout << "Step " << i + 1 << ": ";
//         for (int j = 0; j < 6; j++)
//             cout << arr[j] << " ";
//         cout << endl;

//         if (chk != 0)
//         {
//             int temp = small;
//             arr[index] = arr[i];
//             arr[i] = temp;
//         }
//     }

//     return 0;
// }

// // --------- insertion sorting self ---------

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {12, 11, 13, 4, 6};
//     cout << "Original array: ";
//     for (int l = 0; l < 5; l++)
//     {
//         cout << arr[l] << " ";
//     }
//     cout << endl;
//     for (int i = 1; i < 5; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 for (int k = 0; k < 5; k++)
//                 {
//                     cout << arr[k] << " ";
//                 }
//                 cout << endl;
//                 j = 0;
//             }
//         }
//     }
//     return 0;
// }

// // --------- insertion sorting ---------
// #include<iostream>
// using namespace std;
// int main()
// {
//     int tot, arr[10], i, j, temp, small, chk, index;//tot is a size and arr is a element
//     cout<<"Enter the Size of Array: ";
//     cin>>tot;
//     cout<<"Enter "<<tot<<" Array Elements: ";
//     for(i=0; i<tot; i++)
//         cin>>arr[i];
//     for(i=0; i<(tot-1); i++)
//     {
//         chk=0;
//         small = arr[i];
//         for(j=(i+1); j<tot; j++)
//         {
//             if(small>arr[j])
//             {
//                 small = arr[j];
//                 chk++;
//                 index = j;
//             }
//         }
//         cout<<"Step "<<i+1<<": ";
// for(j=0; j<tot; j++)
//     cout<<arr[j]<<" ";
// cout<<endl;

//         if(chk!=0)
//         {
//             temp = arr[i];
//             arr[i] = small;
//             arr[index] = temp;
//         }
//     }
//     cout<<"\nSorted Array is:\n";
//     for(i=0; i<tot; i++)
//         cout<<arr[i]<<" ";
//     cout<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// // 8 4 2 1 3
// void Sort(int array[], int length)
// {
//     for (int i = 1; i < length; i++)
//     {
//         int current = array[i]; // index[1] = 4
//         int j = i - 1;          // 1 - 1 = 0

//         while (j >= 0 && array[j] > current)
//         { // 8 > 4
//             array[j + 1] = array[j];
//             j--;
//         }

//         array[j + 1] = current;
//     }
// }

// void print(int array[], int length)
// {
//     for (int i = 0; i < length; i++)
//         cerr << array[i] << " ";

//     cout << endl;
// }

// int main()
// {

//     int arr[] = {-2, -99, -100, 100, 0, 6, 3, 5, 45};
//     int length = sizeof(arr) / sizeof(arr[0]);

//     clog << "Before sorting : ";
//     print(arr, length);

//     Sort(arr, length);

//     clog << "After sorting : ";
//     print(arr, length);
// }

// #include <iostream>
// #include <windows.h>

// using namespace std;

// int main()
// {
//     // Get current process handle
//     HANDLE processHandle = GetCurrentProcess();

//     // Get process memory information
//     PROCESS_MEMORY_COUNTERS_EX pmc;
//     GetProcessMemoryInfo(processHandle, (PROCESS_MEMORY_COUNTERS *)&pmc, sizeof(pmc));

//     // Display memory consumption information
//     cout << "Memory consumption: " << pmc.WorkingSetSize / 1024 << " KB" << endl;

//     return 0;
// }

// #include <iostream>
// #include <sys/resource.h>

// using namespace std;

// int main() {
//     struct rusage usage;

//     // Get resource usage information
//     getrusage(RUSAGE_SELF, &usage);

//     // Display memory consumption information
//     cout << "Memory consumption: " << usage.ru_maxrss << " bytes" << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[4] = {7, 6, 5, 1};
//     int temp;
//     cout << "Original\n"
//          << "7 6 5 1\n"
//          << endl;
//     for (int j = 0; j < 3; j++)
//     {
//         for (int i = 0; i < 4; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// --------------- bubble sorting ---------------

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     const int size = 5;
//     int arr[size] = {3, 6, 1, 8, 2};

//     // Sort the array in ascending order
//     sort(arr, arr + size);
//     // Print the sorted array
//     cout << "Array in ascending order: ";
//     for (int i = 0; i < size; ++i)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// // --------------- bubble sorting ---------------

// #include <iostream>
// #include <algorithm>

// using namespace std;
// int main()
// {
//     int arr[] = {5, 2, 9, 11, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Size of arr is " << sizeof(arr) << endl;
//     cout << "Size of arr[0] is " << sizeof(arr[0]) << endl;

//     sort(arr, arr + n);
//     cout << "Sorted array in ascending order: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// // --------------- Stack ---------------
// #include <iostream>
// using namespace std;
// int arr[5] = {0, 0, 0, 0, 0};
// int count1 = 0;
// int isfull()
// {
//     if (count1 == 5)
//     {
//         cout << "stack is full...!!!\n\n";
//         return 1;
//     }
//     else
//     {
//         cout << "stack is not full...!!!\n\n";
//         return 0;
//     }
// }
// int isempty()
// {
//     if (count1 == 0)
//     {
//         cout << "stack is empty...!!!\n\n";
//         return 1;
//     }
//     else
//     {
//         cout << "\nstack is not empty...!!!\n\n";
//         return 0;
//     }
// }
// void insertion()
// {
//     if (isfull() == 1)
//     {
//         cout << "\n";
//     }
//     else
//     {
//         int i = count1;
//         cout << "Enter data at index " << i << " \n";
//         cin >> arr[i];
//         count1++;
//     }
// }
// void deletion()
// {
//     if (isempty() == 1)
//     {
//         cout << "\n";
//     }
//     else
//     {
//         int i = (count1 - 1);
//         arr[i] = 0;
//         count1--;
//         cout << "last element from stack is deleted...!!!\n";
//     }
// }
// void display()
// {
//     cout << "\nstack: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n\n";
// }
// int main()
// {
//     int num;
//     do
//     {
//         cout << "1. insertion()\n";
//         cout << "2. deletion()\n";
//         cout << "3. isfull()\n";
//         cout << "4. isempty()\n";
//         cout << "5. display()\n";
//         cout << "6. exit()\n";
//         cin >> num;
//         switch (num)
//         {
//         case 1:
//             insertion();
//             break;
//         case 2:
//             deletion();
//             break;
//         case 3:
//             isfull();
//             break;
//         case 4:
//             isempty();
//             break;
//         case 5:
//             display();
//             break;
//         case 6:
//             exit;
//             break;
//         default:
//             cout << "wrong entry...!!!\n";
//             break;
//         }
//     } while (num != 6);

//     return 0;
// }

// #include <iostream>// calculate
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int a = 2, b = 2, c = 3, z = 0;
//     z = a + b + c;
//     cout << "size =  " << sizeof(z) << endl;
//     cout << "value =  " << z;
//     return 0;
// }

// // list in cpp
// #include <iostream> //list in c++
// #include <list>
// using namespace std;
// void display(list<int> &lis)
// {
//     list<int>::iterator iter;
//     for (iter = lis.begin(); iter != lis.end(); iter++)
//     {
//         cout << *iter << " "; // move next element
//     }
//     cout << endl;
// }
// int main()
// {
//     list<int> list1; // list of 0 length
//     list1.push_back(5);
//     list1.push_back(6);
//     list1.push_back(7);
//     list1.push_back(8);
//     display(list1);

//     list<int> list2(3);
//     list<int>::iterator iter;
//     iter = list2.begin();
//     *iter = 45;
//     iter++;
//     *iter = 67;
//     iter++;
//     *iter = 9;
//     iter++;

//     list1.sort();
//     list2.sort();
//     list1.merge(list2); // merging list
//     display(list1);

//     display(list2);
//     return 0;
// }

// #include <iostream> //vector in cpp
// #include <vector>
// // must check "cpp website"
// using namespace std;
// template <class T>
// void display(vector<T> &v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//         // cout << v.at(i) << " ";
//     }
//     cout << endl;
//     cout << endl;
// }
// int main()
// {
//     vector<int> vec1;
//     vector<char> vec1(4);// 4 length character vector
//     int element, size = 5;
//     cout << "Enter of size of your vector: " << endl;
//     // cin >> size;
//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout << "Enter an element to add in vector: ";
//     //     cin >> element;
//     //     vec1.push_back(element);
//     // }
//     // vec1.pop_back();
//     display(vec1);
//     vector<int>::iterator iter = vec1.begin();
//     // vec1.insert(iter, 566);
//     // vec1.insert(iter + 2, 5, 566);
//     // iter + 1 means add element which is at 1 index
//     //  '5' means to add 5 copies of "566"
//     display(vec1);
//     return 0;
// }

// #include <iostream>

// int main() {
//     std::cout << "          *               *" << std::endl;
//     std::cout << "       *     *         *     *" << std::endl;
//     std::cout << "     *         *     *         *" << std::endl;
//     std::cout << "    *            *  *            *" << std::endl;
//     std::cout << "   *               *               *" << std::endl;
//     std::cout << "   *               F                *" << std::endl;
//     std::cout << "    *              A               *" << std::endl;
//     std::cout << "     *             R              *" << std::endl;
//     std::cout << "       *           H            *" << std::endl;
//     std::cout << "         *         A          *" << std::endl;
//     std::cout << "           *       D        *" << std::endl;
//     std::cout << "             *            *" << std::endl;
//     std::cout << "               *        *" << std::endl;
//     std::cout << "                 *    *" << std::endl;
//     std::cout << "                   *" << std::endl;

//     return 0;
// }

// #include <iostream> //Templets in c++ part 1
// using namespace std;
// class vector
// {
// public:
//     int *arr;
//     int size;
//     vector(int m)
//     {
//         size = m;
//         arr = new int[size];
//     }
//     int dotProduct(vector &v) // friend function initilization
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d = this->arr[i] * v.arr[i];
//         }

//         return d;
//     }
// };
// int main()
// {
//     vector v1(3);
//     v1.arr[0] = 3;
//     v1.arr[1] = 3;
//     v1.arr[2] = 3;
//     vector v2(3);
//     v2.arr[0] = 3;
//     v2.arr[1] = 3;
//     v1.arr[2] = 3;

//     int a = v1.dotProduct(v2);
//     cout << a << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1, b = 2, c = 3;
//     int *ptr1;
//     ptr1 = (&c);
//     cout << "adress of a  = " << int(ptr1) << endl;
//     cout << "adress of a  = " << int(&a) << endl;
//     cout << "adress of b  = " << int(&b) << endl;
//     cout << int(*ptr1) << endl;

//     return 0;
// }

/*Linked list by ifrahim*/

// #include <iostream>
// using namespace std;
// class Node // class
// {
// public:
//     int data;
//     Node *next;
// };
// void create(Node *&Head, int a[], int n) // function1
// {
//     Node *temp;
//     Head = new Node; // access class
//     Head->data = a[0];
//     Head->next = NULL;
//     temp = Head;
//     for (int i = 1; i < n; i++)
//     {
//         Node *new_node = new Node;
//         new_node->data = a[i];
//         new_node->next = NULL;
//         temp->next = new_node;
//         temp = new_node;
//     }
// }
// void display(Node *Head) // function2
// {
//     Node *temp = Head;
//     while (temp != NULL)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }
//     cout << "Null ";
// }
// int main()
// {
//     int arr[5] = {4, 6, 8, 9, 11};
//     int n = 5;
//     Node *Head = NULL; // pointer
//     create(Head, arr, n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[4]  = {12,23,34,3};
//     float sum = 0.0;
//     float average ;
//     cout << "Sum = " << (arr[0] + arr[1] + arr[2] + arr[3]) << endl;
//     sum = arr[0] + arr[1] + arr[2] + arr[3];
//     average = sum / 4;
//     cout << "Average = " << average;
//     return 0;
// }

// #include <iostream> //list in c++
// #include <list>
// using namespace std;
// void diaplay(list<int> &v)
// {
//     list<int>::iterator iter;
//     for (iter = v.begin(); iter != v.end(); iter++)
//     {
//         cout << *iter << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     // ---------- List of Zero length ----------
//     list<int> list1;
//     list1.push_back(13);
//     list1.push_back(80);
//     list1.push_back(67);
//     list1.push_back(1);
//     list1.push_back(40);
//     diaplay(list1);

//     // cout << "\n";
//     // cout << "Before Sorting: ";
//     // diaplay(list1);
//     // cout << "\n";
//     // cout << "After Sorting: ";
//     // list1.sort(); // sorting the list
//     // diaplay(list1);
//     // cout << "\n";
//     // cout << "After Reversing: ";
//     // list1.reverse();
//     // diaplay(list1);
//     // cout << "\n";
//     // cout << "After Removing 1st element from list: ";
//     // list1.pop_front();
//     // diaplay(list1);
//     // cout << "\n";
//     // cout << "After Removing last element from list: ";
//     // list1.pop_back();
//     // diaplay(list1);
//     // cout << "\n";
//     // cout << "After Removing 67  from list: ";
//     // list1.remove(67);
//     // diaplay(list1);

//     // int num1 = 13, num2 = 4, num3 = 5;
//     // cout << "\nEnter number: ";
//     // cin >> num1;
//     // cout << "\nEnter number: ";
//     // cin >> num2;
//     // cout << "\nEnter number: ";
//     // cin >> num3;
//     // list<int> list2;
//     // list2.push_back(num1);
//     // list2.push_back(num2);
//     // list2.push_back(num3);
//     // list2.sort();
//     // diaplay(list2);

//     list<int> list3(4); // list with fixed length
//     list<int>::iterator iter;
//     iter = list3.begin();
//     *iter = 45;
//     iter++;
//     *iter = 67;
//     iter++;
//     *iter = 9;
//     iter++;
//     *iter = 31;
//     iter++;
//     // *iter = 3;//cannot added to list
//     // iter++;
//     cout << "Merging list1 in list3: " << endl;
//     list1.sort();
//     list3.sort();
//     list1.merge(list3);
//     diaplay(list1);
//     diaplay(list3);
//     return 0;
// }

// #include <iostream> //Vactor, unlimited array
// #include <vector>
// using namespace std;
// template <class T>
// void display(vector<T> &v)
// {
//     cout << "\nDisplaying this vector: " << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     float size, element;
//     vector<float> vec1;
//     // ---------- unlimited array ----------
//     // cout << "Enter size of vector: ";
//     // cin >> size;
//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout << "Enter an element to this vector: ";
//     //     cin >> element;
//     //     vec1.push_back(element);
//     // }
//     // display(vec1);

//     // ---------- adding element to array ----------
//     // vector<float>::iterator iter = vec1.begin();
//     // // vec1.insert(iter, 56);
//     // vec1.insert(iter + 1, 56);
//     // vec1.insert(iter + 1, 5, 56);
//     // display(vec1);

//     // ---------- Types of creating vactor ----------
//     // vector<int> vec1;     // vector of zero element
//     // vector<char> vec2(10); // creating vector of 4-element character
//     // vec2.push_back('s');
//     // display(vec2);

//     // vector<char> vec3(vec2); // creating vector from another vector
//     // display(vec3);

//     vector<string> vec4(4, "saran\n"); // 4-->>length  and  13 number printed 4th time on screen
//     display(vec4);
//     return 0;
// }

// #include <iostream> //Templets with Multiple Parameters
// using namespace std;
// template <class T1, class T2, class T3>
// class practice
// {
// public:
//     T1 name;
//     T2 Rollno;
//     T3 Fav_char;
//     practice(T1 a, T2 b, T3 c)
//     {
//         name = a;
//         Rollno = b;
//         Fav_char = c;
//     }
//     void display()
//     {
//         cout << "\nYour name is :" << name << endl;
//         cout << "Your Rollno is :" << Rollno << endl;
//         cout << "Your Fav_char is :" << Fav_char << endl;
//     }
//     ~practice() {}
// };
// int main()
// {
//     string x;
//     int y;
//     char z;
//     cout << "Enter your name: ";
//     cin >> x;
//     cout << "\nEnter your Rollno: ";
//     cin >> y;
//     cout << "\nEnter your Fav_char: ";
//     cin >> z;
//     practice<string, int, char> obj(x, y, z);
//     obj.display();
//     return 0;
// }

// #include <iostream> // templet in c++ part 2
// using namespace std;
// template <class T>
// class vector
// {
// public:
//     int size;
//     T *ptr;
//     vector(int a)
//     {
//         size = a;
//         ptr = new T[size];
//     }
//     T dotproduct(vector &v)
//     {
//         T d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += +this->ptr[i] * v.ptr[i];
//         }
//         return d;
//     }
// };
// int main()
// {
//     vector<float> obj(3);
//     obj.ptr[0] = 1.2;
//     obj.ptr[1] = 0.2;
//     obj.ptr[2] = 3.1;

//     vector<float> obj1(3);
//     obj1.ptr[0] = 1.4;
//     obj1.ptr[1] = 3.9;
//     obj1.ptr[2] = 2.8;

//     int a = obj.dotproduct(obj1);
//     cout << a;
//     return 0;
// }

// #include <iostream> // templet in c++ prat 1
// using namespace std;
// class vector
// {
// public:
//     int size;
//     int *ptr;
//     vector(int a)
//     {
//         size = a;
//         ptr = new int[size];
//     }
//     int dotproduct(vector &v)
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += +this->ptr[i] * v.ptr[i];
//         }
//         return d;
//     }
// };
// int main()
// {
//     vector obj(3);
//     obj.ptr[0] = 1;
//     obj.ptr[1] = 0;
//     obj.ptr[2] = 3;

//     vector obj1(3);
//     obj1.ptr[0] = 1;
//     obj1.ptr[1] = 3;
//     obj1.ptr[2] = 2;

//     int a = obj.dotproduct(obj1);
//     cout << a;
//     return 0;
// }

// #include <iostream> // open anf close()
// #include <fstream>
// #include <string>
// using namespace std;
// int main()
// {
//     // writting and reading a file using open() function.
//     ofstream obj1;
//     ifstream obj2;
//     string str;
//     // writting
//     obj1.open("practice.txt");
//     obj1 << "This is a boy\nhe is good in programing";
//     obj1.close();

//     // reading
//     obj2.open("practice.txt");
//     while (obj2.eof() == 0)
//     {
//         getline(obj2, str);
//         cout << str;
//         cout << "\n";
//     }

//     return 0;
// }

// #include <iostream> //rading and writting file at same time
// #include <string>
// #include <fstream>
// using namespace std;
// int main()
// {
//     // writting in a file
//     string str;
//     cout << "enter your name: ";
//     // cin >> str;
//     getline(cin, str); // input function that also take blank spaces
//     ofstream obj("practice.txt");
//     obj << str;
//     obj.close(); // closing a file so that other can use it

//     // writting in a file
//     string str1;
//     ifstream obj1("practice.txt");
//     // puts("practice.txt");//just print same thing on screen
//     while (getline(obj1, str1))
//     {
//         cout << str1;
//     }
//     obj1.close();
//     return 0;
// }

// #include <iostream> // Reading and writing in File I/O
// #include <fstream>
// using namespace std;
// int main()
// {
//     string var = "hey what is going on "; // for writing something
//     ofstream obj("practice.txt");
//     obj << var;

//     string var1;
//     ifstream obj1("practice.txt"); // for reading somethig
//     while (getline(obj1, var1))
//     {
//         cout << var1 << "\n";
//     }
//     return 0;
// }

// #include <fstream> // Reading and writing in File I/O
// #include <iostream>
// using namespace std;
// int main()
// {
//     // // we want to write something in file
//     // string var1 = "saran is a good boy\nthis is book";
//     // ofstream obj1("practice.txt");
//     // obj1 << var1;

//     // we want to read something from file
//     string var2;
//     ifstream obj2("practice.txt");
//     // obj2 >> var2;// this line is use just for printing one character
//     getline(obj2, var2);
//     cout << var2;
//     getline(obj2, var2);
//     cout << "\n"
//          << var2;
//     return 0;
// }

// #include <iostream> //virtual function
// using namespace std;
// class computer
// {
// protected:
//     int RAM;
//     string color;

// public:
//     computer(int r, string c)
//     {
//         RAM = r;
//         color = c;
//     }
//     // void display()//if i uncomment it, this function will execute 2 time
//     virtual void display() // playing with virtual function
//     {
//         cout << "The RAM of computer is " << RAM << endl;
//         cout << "The color of computer is " << color << endl;
//     }
// };
// class mobile : public computer
// {
// protected:
//     string brand;

// public:
//     mobile(int r, string c, string b) : computer(r, c)
//     {
//         RAM = r;
//         color = c;
//         brand = b;
//     }
//     void display()
//     {
//         cout << "The RAM of mobile is " << RAM << endl;
//         cout << "The color of mobile is " << color << endl;
//         cout << "The brand of mobile is " << brand << endl;
//     }
// };
// class Smartwatch : public computer
// {
// protected:
//     int battery;

// public:
//     Smartwatch(int bat, string c, int r) : computer(r, c)
//     {
//         RAM = r;
//         battery = bat;
//         color = c;
//     }
//     void display()
//     {
//         cout << "The RAM of Smart Watch is " << RAM << endl;
//         cout << "The battery of Smart Watch is " << battery << endl;
//         cout << "The color of Smart Watch is " << color << endl;
//     }
// };
// int main()
// {
//     string brand, color;
//     int RAM, battery;
//     cout << "How much RAM you required in your Mobile: " << endl;
//     cin >> RAM;
//     cout << "Which Color you Want in your Mobile: " << endl;
//     cin >> color;
//     cout << "Which brand you Want in your Mobile: " << endl;
//     cin >> brand;
//     mobile obj1(RAM, color, brand);

//     cout << "How much RAM you required in your Smart watch: " << endl;
//     cin >> RAM;
//     cout << "Which Color you Want in your Smart watch: " << endl;
//     cin >> color;
//     cout << "How much mah battery you required in your Smart watch: " << endl;
//     cin >> battery;
//     Smartwatch obj2(battery, color, RAM);

//     computer *ptr[2];
//     ptr[0] = &obj1;
//     ptr[1] = &obj2;

//     ptr[0]->display();
//     ptr[1]->display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     int marks;
//     void displaydata();
// };
// class B : public A
// {
// public:
//     void setdata()
//     {
//         cout << "Enter marks of student" << endl;
//         cin >> marks;
//     }
// };
// int main()
// {
//     int marks;

//     if (marks <= 100 && marks > 90)
//     {
//         cout << "your grade is A+" << endl;
//     }
//     else if (marks > 80)
//     {
//         cout << "your grade is A" << endl;
//     }
//     else if (marks > 70)
//     {
//         cout << "your grade is B+" << endl;
//     }
//     else if (marks > 60)
//     {
//         cout << "your grade is B" << endl;
//     }
//     else if (marks > 49)
//     {
//         cout << "your grade is C" << endl;
//     }
//     else
//     {
//         cout << "you are legend" << endl;
//     }

//     return 0;
// }

// #include <iostream> //encapsulation
// using namespace std;
// class encap
// {
// private:
//     int a = 3, b = 3, c = 4, d;

// public:
//     // void setdata(int x, int y, int z)
//     // {
//     //     a = x;
//     //     b = y;
//     //     c = z;
//     // }
//     int perfomefunc()
//     {
//         d = a + b + c;
//         return d;
//     }
// };
// int main()
// {
//     encap obj;
//     // int x, y, z;
//     // cout << "enter value: " << endl;
//     // cin >> x;
//     // cout << "enter value: " << endl;
//     // cin >> y;
//     // cout << "enter value: " << endl;
//     // cin >> z;
//     // obj.setdata(x, y, z);
//     cout << "Value is " << obj.perfomefunc() << endl;
//     return 0;
// }

// #include <iostream>//operator overloading
// using namespace std;
// int main()
// {
//     int a = 12, b = 13;
//     float c;
//     c = a + b;
//     cout << "c =" << a;
//     return 0;
// }

// #include <iostream> //encapsulaton
// using namespace std;
// class A
// {
// private:
//     int x;

// public:
//     void func(int num)
//     {
//         x = num;
//     }
//     int func1()
//     {
//         return x;
//     }
// };
// int main()
// {
//     A obj;
//     obj.func(5);
//     cout << "The value of x is " << obj.func1() << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class base
// {
// private:
//     int a, b;

// public:
//     int c;
//     void setdata(int x, int y, int z)
//     {
//         a = x;
//         b = y;
//         c = z;
//     }
//     void displaydata1()
//     {
//         cout << "Value of a is " << a;
//         cout << "Value of b is " << b;
//     }
// };
// class derived : public base
// {
// public:
//     int d;
//     void displaydata2()
//     {
//         cout << "Value of c is " << c; // Here a and b is inaccessable
//     }
// };
// int main()
// {
//     base obj1; // declration of object of base class
//     obj1.setdata(12, 13, 14);
//     obj1.displaydata1();
//     derived obj2; // declration of object of derived class
//     obj2.displaydata2();
//     return 0;
// }

// #include <iostream> //virtual function
// using namespace std;
// class A
// {
// public:
//     int a, b;
//     // void setdata(int x, int y)
//     virtual void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     // void displaydata()
//     virtual void displaydata()
//     {
//         cout << "Value of a in base class is " << a << endl;
//         cout << "Value of b in base class is " << b << endl;
//     }
// };
// class B : public A
// {
// public:
//     int c, d;
//     void setdata(int i, int j)
//     // void setdata1(int i, int j)
//     {
//         c = i;
//         d = j;
//     }
//     void displaydata()
//     // void displaydata1()
//     {
//         cout << "Value of c in derived class is " << c << endl;
//         cout << "Value of d in derived class is " << d << endl;
//     }
// };
// int main()
// {
//     A *ptr1;
//     A obj1;
//     B obj2;
//     //  ptr1 = &obj1;
//     ptr1 = &obj2;
//     ptr1->setdata(44, 55);
//     ptr1->displaydata();
//     return 0;
// }

// #include <iostream> //Pointers to derived class
// using namespace std;
// class Base
// {
// public:
//     int a;
//     void func()
//     {
//         cout << "Base class function is running: " << a << endl;
//     }
// };
// class Derived : public Base
// {
// public:
//     int b;
//     void func()
//     {
//         cout << "Derived class function is running: " << a << endl;
//         cout << "Derived class function is running: " << b << endl;
//     }
// };
// int main()
// {
//     Base b_obj;
//     Base *b_ptr;
//     Derived d_obj;
//     Derived *d_ptr;
//     b_ptr = &d_obj;
//     b_ptr->a = 55;
//     b_ptr->func();
//     b_ptr->a = 56;
//     b_ptr->func();
//     d_ptr = &d_obj;
//     d_ptr->a = 8;
//     d_ptr->b = 9;
//     d_ptr->func();
//     return 0;
// }

// #include <iostream>//array of object using pointer
// using namespace std;
// class student
// {
//     int id;
//     string name;

// public:
//     void set_name()
//     {
//         cout << "Enter your id: " << endl;
//         cin >> id;
//         cout << "Enter your name: " << endl;
//         fflush(stdin);
//         getline(cin, name);
//     }
//     void display_name()
//     {
//         cout << "Your ID is: " << id << endl;
//         cout << "Your name is: " << name << endl;
//     }
// };
// int main()
// {
//     student *ptr = new student[3];
//     student *ptr1 = ptr;
//     for (int i = 0; i < 3; i++)
//     {
//         ptr->set_name();
//         ptr++;
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         ptr1->display_name();
//         ptr1++;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// float Eng, math, OOP, Acc, SE, GP1[5];
// int i = 0, semester;
// string Name;
// class GPA
// {
// private:
//     float T_GPA, GP, QP, T_CGPA, Wt_Avrg1[9], Crd_hr, WA;
//     void Calculation()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             GP = GP + GP1[i];
//         }
//         QP = GP * 3;
//         T_GPA = QP / 15;
//     }
//     void Cal_CGPA()
//     {
//         for (int j = 0; j < semester; j++)
//         {
//             cout << "Enter GPA of semester-" << (j + 1) << endl;
//             cin >> GP1[j];
//             Wt_Avrg1[j] = GP1[j] * 15;
//             WA = WA + Wt_Avrg1[j];
//             i++;
//         }
//         Crd_hr = (15 * i);
//         T_CGPA = WA / Crd_hr;
//         cout << "Total weight average = " << WA << endl;
//         cout << "Total Credit hour = " << Crd_hr << endl;
//     }

// public:
//     void Grades(int);
//     void Display();
//     void Dsp_CGPA();
// };
// void GPA::Dsp_CGPA()
// {
//     Cal_CGPA();
//     cout << "\n -->> CGPA = " << T_CGPA << endl;
// }
// void GPA::Display()
// {
//     Calculation();
//     cout << "\n -->> GPA = " << T_GPA << endl;
// }
// void GPA::Grades(int take1)
// {
//     if (take1 >= 85 && take1 <= 100)
//     {
//         cout << Name << "\t\t " << take1 << "\t A+\t     4\n"
//              << endl;
//         GP1[i] = 4;
//         i++;
//     }
//     else if (take1 >= 77)
//     {
//         cout << Name << "\t\t " << take1 << "\t A\t    3.6\n"
//              << endl;
//         GP1[i] = 3.6;
//         i++;
//     }
//     else if (take1 >= 67)
//     {
//         cout << Name << "\t\t " << take1 << "\t B+\t    3.3\n"
//              << endl;
//         GP1[i] = 3.3;
//         i++;
//     }
//     else if (take1 >= 60)
//     {
//         cout << Name << "\t\t " << take1 << "\t B\t     3\n"
//              << endl;
//         GP1[i] = 3;
//         i++;
//     }
//     else if (take1 >= 50)
//     {
//         cout << Name << "\t\t " << take1 << "\t C\t    2.5\n"
//              << endl;
//         GP1[i] = 2.5;
//         i++;
//     }
//     else
//     {
//         cout << Name << "\t\t N/L\t F\t    N/L\n"
//              << endl;
//         GP1[i] = 1;
//         i++;
//     }
// }
// class Inherited : private GPA
// {
// private:
// public:
//     void Input()
//     {
//         cout << ">------------------------------------------< \n";
//         cout << ">-------------- Enter Marks ---------------< \n";
//         cout << ">------------------------------------------< \n";
//         cout << "    -->> English\t    ";
//         cin >> Eng;
//         cout << "\n    -->> Math\t\t    ";
//         cin >> math;
//         cout << "\n    -->> OOP\t\t    ";
//         cin >> OOP;
//         cout << "\n    -->> SE\t\t    ";
//         cin >> SE;
//         cout << "\n    -->> Accounting\t    ";
//         cin >> Acc;
//         cout << ">------------------------------------------< \n";
//         cout << ">----------------- Marks ------------------< \n";
//         cout << ">------------------------------------------< \n\n";
//         system("pause");
//         system("cls");
//         cout << ">--------------------------------------------< \n";
//         cout << " Subject\tMarks\tGrade\tGrade-points\n";
//         cout << ">--------------------------------------------< \n";
//         Name = "English";
//         Grades(Eng);
//         Name = "Math";
//         Grades(math);
//         Name = "OOP";
//         Grades(OOP);
//         Name = "SE";
//         Grades(SE);
//         Name = "Acc";
//         Grades(Acc);
//         cout << ">--------------------------------------------< \n\n";
//         system("pause");
//         Display();
//     }
//     void inpt_GPA2()
//     {
//         cout << "Enter No of Semesters: ";
//         cin >> semester;
//         if (semester >= 2 && semester <= 8)
//         {
//             Dsp_CGPA();
//         }
//         else
//         {
//             cout << "Wrong entry...!!!\n";
//         }
//     }
// };
// int main()
// {
//     cout << "In constructor\n\n";
//     cout << " \n\t------------ Lab Task 2 ------------ \n\n";
//     cout << " \tSubmitted by:	 Saran Zafar\n\n";
//     cout << " \tRoll no:	 05\n\n";
//     cout << " \tSubmitted To: 	 Sir Amji Hussain\n";
//     cout << " \n\t------------ Lab task 2 ------------ \n\n";
//     system("pause");
//     system("cls");
//     Inherited obj1;
//     obj1.inpt_GPA2();
//     return 0;
// }

// // C++ program to calculate the CGPA
// // and CGPA percentage of a student
// #include <bits/stdc++.h>
// using namespace std;
// double CgpaCalc(double marks[], int n)
// {
//     double grade[n];
//     double cgpa, sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         grade[i] = (marks[i] / 10);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         sum += grade[i];
//     }
//     cgpa = sum / n;
//     return cgpa;
// }
// int main()
// {
//     int n = 5;
//     double marks[] = {90, 90, 90, 90, 90};

//     double cgpa = CgpaCalc(marks, n);

//     cout << "CGPA = ";
//     printf("%.1f\n", cgpa);
//     cout << "CGPA Percentage = ";
//     printf("%.2f", cgpa * 9.5);
// }

// This code is contributed by Bhupendra_Singh

// #include <iostream> //canteen
// #include <conio.h>
// using namespace std;
// class Base
// {
// private:
//     int a[4];
//     int price[2] = {0, 0};
//     int earning = 0;
//     int Total = 0;
//     int password = 0;
//     void security()
//     {
//         cout << "Todays earning = " << earning << endl;
//     }

// public:
//     void Set_Earning();
//     void get_earning();
//     void Base1(void);
//     // Base1();
//     void todays_earning();
// };
// void Base::Base1(void)
// {
//     cout << "\n >------------------------------------------< \n";
//     cout << " >--------- Welcom to Canteen ---------< \n";
//     cout << " >------------------------------------------< \n";
//     cout << " >-------------- Order please --------------< \n\n\n";
//     {
//     menu1:
//         cout << " --->>>\t   press '1' for Tea           <<<---\n";
//         cout << " --->>>\t   press '2' for Snack's       <<<---\n";
//         cout << " --->>>\t   press '3' for Drink's       <<<---\n";
//         cout << " --->>>\t   press '0' for exit\t       <<<---\n";
//         cin >> a[0];
//         switch (a[0])
//         {
//         case 1:
//         {
//         menu2:
//             cout << "\t1. Tea '1'\n";
//             cout << "\t2. Tea + Bakers '2'\n";
//             cout << "\t3. exit '0'\n";
//             cin >> a[1];
//             switch (a[1])
//             {
//             case 1:
//                 cout << "\tOrder\tPrice\n";
//                 cout << "\tTea\tRs.50\n\n";
//                 cout << "Do You Want to order?\n";
//                 cout << "Yes press '1'\tNo Press '2'\n";
//                 cin >> a[2];
//                 if (a[2] == 1)
//                 {
//                     cout << "Order placed...!\n";
//                     price[0] = price[0] + 50;
//                 }
//                 else if (a[2] == 2)
//                 {
//                     goto menu2;
//                 }
//                 else
//                 {
//                     cout << "Wrong Entry...!!!\n";
//                 }
//                 goto menu2;
//                 break;
//             case 2:
//             {
//                 cout << "\tOrder\t\tPrice\n";
//                 cout << "\tTea+bakers\tRs.100\n\n";
//                 cout << "Do You Want to order?\n";
//                 cout << "Yes press '1'\tNo Press '2'\n";
//                 cin >> a[2];
//                 if (a[2] == 1)
//                 {
//                     cout << "Order placed...!\n";
//                     price[0] = price[0] + 100;
//                 }
//                 else if (a[2] == 2)
//                 {
//                     goto menu2;
//                 }
//                 else
//                 {
//                     cout << "Wrong Entry...!!!\n";
//                 }
//                 goto menu2;
//                 break;
//             }
//             case 0:
//             {
//                 goto menu1;
//                 break;
//             }
//             default:
//                 cout << "Wrong entry...!!!\n";
//                 goto menu2;
//                 break;
//             }
//             break;
//         }
//         case 2:
//         {
//         menu3:
//             cout << "\t1. Kurkuray '1'\n";
//             cout << "\t2. Lays  '2'\n";
//             cout << "\t3. exit '0'\n";
//             cin >> a[1];
//             switch (a[1])
//             {
//             case 1:
//                 cout << "\tOrder\tPrice\n";
//                 cout << "\tKurkuray\tRs.200\n\n";
//                 cout << "Do You Want to order?\n";
//                 cout << "Yes press '1'\tNo Press '2'\n";
//                 cin >> a[2];
//                 if (a[2] == 1)
//                 {
//                     cout << "Order placed...!\n";
//                     price[0] = price[0] + 200;
//                 }
//                 else if (a[2] == 2)
//                 {
//                     goto menu3;
//                 }
//                 else
//                 {
//                     cout << "Wrong Entry...!!!\n";
//                 }
//                 goto menu3;
//                 break;
//             case 2:
//             {
//                 cout << "\tOrder\tPrice\n";
//                 cout << "\tLays\tRs.150\n\n";
//                 cout << "Do You Want to order?\n";
//                 cout << "Yes press '1'\tNo Press '2'\n";
//                 cin >> a[2];
//                 if (a[2] == 1)
//                 {
//                     cout << "Order placed...!\n";
//                     price[0] = price[0] + 150;
//                 }
//                 else if (a[2] == 2)
//                 {
//                     goto menu3;
//                 }
//                 else
//                 {
//                     cout << "Wrong Entry...!!!\n";
//                 }
//                 goto menu3;
//                 break;
//             }
//             case 0:
//             {
//                 goto menu1;
//                 break;
//             }
//             default:
//                 cout << "Wrong entry...!!!\n";
//                 goto menu3;
//                 break;
//             }
//             break;
//         }
//         case 3:
//         {
//         menu4:
//             cout << "\t1. Sting '1'\n";
//             cout << "\t2. Redbull  '2'\n";
//             cout << "\t3. exit '0'\n";
//             cin >> a[1];
//             switch (a[1])
//             {
//             case 1:
//             {
//                 cout << "\tOrder\t\tPrice\n";
//                 cout << "\tSting\tRs.100\n\n";
//                 cout << "Do You Want to order?\n";
//                 cout << "Yes press '1'\tNo Press '2'\n";
//                 cin >> a[2];
//                 if (a[2] == 1)
//                 {
//                     cout << "Order placed...!\n";
//                     price[0] = price[0] + 400;
//                 }
//                 else if (a[2] == 2)
//                 {
//                     goto menu4;
//                 }
//                 else
//                 {
//                     cout << "Wrong Entry...!!!\n";
//                 }
//                 goto menu4;
//                 break;
//             }
//             case 2:
//             {
//                 cout << "\tOrder\t\tPrice\n";
//                 cout << "\tRedbull\tRs.150\n\n";
//                 cout << "Do You Want to order?\n";
//                 cout << "Yes press '1'\tNo Press '2'\n";
//                 cin >> a[2];
//                 if (a[2] == 1)
//                 {
//                     cout << "Order placed...!\n";
//                     price[0] = price[0] + 250;
//                 }
//                 else if (a[2] == 2)
//                 {
//                     goto menu4;
//                 }
//                 else
//                 {
//                     cout << "Wrong Entry...!!!\n";
//                 }
//                 goto menu4;
//                 break;
//             }
//             case 0:
//             {
//                 goto menu1;
//                 break;
//             }
//             default:
//             {

//                 cout << "Wrong entry...!!!\n";
//                 goto menu4;
//                 break;
//             }
//             }
//             break;
//         }
//         case 0:
//         {
//             cout << "Your Bill = " << price[0] << endl;
//             cout << "Thanks for comming...\n";
//             Set_Earning();
//             system("pause");
//             system("cls");
//             break;
//         }
//         default:
//         {
//             cout << "Wrong entry...!!!\n";
//             goto menu1;
//             break;
//         }
//         }
//     }
// }
// void Base::Set_Earning()
// {
//     earning = earning + price[0];
// }
// void Base::get_earning()
// {
//     security();
// }
// class inheritance : public Base
// {
// private:
//     int Var1;

// public:
//     inheritance()
//     {
//         {
//             cout << "In constructor\n\n";
//             cout << " \n\t------------ Assignment ------------ \n\n";

//             cout << " \tSubmitted by:	 Saran zafar\n\n";
//             cout << " \tRoll no:	 05\n\n";
//             cout << " \tSubmitted To: 	 ABC\n";
//             cout << " \n\t------------ Assignment ------------ \n\n";
//             system("pause");
//             system("cls");
//         }
//     }
//     ~inheritance()
//     {
//         cout << "\n\nIn Distructor\n";
//         system("pause");
//         system("cls");
//     }
//     void Set_data()
//     {
//     start1:
//         cout << "\n Check today's Earning '1'\t";
//         cout << "Customer '2'\t";
//         cout << "exit '0'\n";
//         cin >> Var1;
//         switch (Var1)
//         {
//         case 1:
//         {
//             get_earning();
//             goto start1;
//             break;
//         }
//         case 2:
//         {
//             Base obj;
//             Base1();
//             goto start1;
//             break;
//         }
//         default:
//         {
//             exit;
//             break;
//         }
//         }
//     }
// };
// int main()
// {
//     inheritance obj3;
//     obj3.Set_data();
//     return 0;
// }

// #include <iostream> //pointers to object and arrow operator
// using namespace std;
// class A
// {
// private:
//     int x, y;

// public:
//     void set_data(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     void display_data()
//     {
//         cout << "The value of x is: " << x << endl;
//         cout << "The value of y is: " << y << endl;
//     }
// };

// int main()
// {
//     A obj;
//     obj.set_data(1, 2);
//     obj.display_data();
//     A *ptr = &obj; // this line is same as
//     (*ptr).set_data(3, 4);
//     (*ptr).display_data();
//     ptr->set_data(5, 6);
//     ptr->display_data();
//     A *ptr1 = new A; // this line
//     ptr1->set_data(7, 8);
//     ptr1->display_data();

//     // Arrays in class
//     A *ptr2 = new A[2]; // and this line also A[2] it means make 2 objects.
//     ptr2->set_data(9, 0);
//     ptr2->display_data();
//     return 0;
// }

// #include <iostream> //CGPA calculator
// #include <string.h>
// using namespace std;
// class gpa
// {
// private:
//     unsigned int marks;
//     double gpa12;
//     char subject[70];
//     int total;
//     float per;

// public:
//     gpa(int totl, int mrks, float gp, char sub[]) : total(totl), marks(mrks), gpa12(gp)
//     {
//         strcpy(subject, sub);
//     }
//     gpa() : marks(0), total(0)
//     {
//         strcpy(subject, "n/a");
//     }
//     void getmarks()
//     {
//         cin >> marks;
//     }
//     double calgpa()
//     {
//         if (marks >= 85 && marks <= 100)
//         {
//             return gpa12 = 4.0;
//         }
//         else if (marks >= 80 && marks < 85)
//         {
//             return gpa12 = 3.7;
//         }
//         else if (marks >= 75 && marks < 80)
//         {
//             return gpa12 = 3.3;
//         }
//         else if (marks >= 70 && marks < 75)
//         {
//             return gpa12 = 3.0;
//         }
//         else if (marks >= 65 && marks < 70)
//         {
//             return gpa12 = 2.7;
//         }
//         else if (marks >= 61 && marks < 65)
//         {
//             return gpa12 = 2.3;
//         }
//         else if (marks >= 58 && marks < 61)
//         {
//             return gpa12 = 2.0;
//         }
//         else if (marks >= 50 && marks < 5)
//         {
//             return gpa12 = 1.0;
//         }
//         else if (marks <= 0)
//         {
//             return gpa12 = 0;
//         }
//     }
//     void showgpa()
//     {
//         cout << subject;
//         cout << " ", cout << total;
//         cout << " ";
//     }
//     void add(gpa dld, gpa oop, gpa discrete, gpa comskills, gpa calcls, gpa stats)
//     {
//         float gpa12;
//         gpa12 = (dld.gpa12 * 3 + oop.gpa12 * 4 + discrete.gpa12 * 3 + comskills.gpa12 * 3 + calcls.gpa12 * 3 + stats.gpa12 * 3) / 19.0;
//         cout << " "
//              << "Result:" << endl;
//         cout << " "
//              << "GPA = " << gpa12 << endl;
//     }
//     void percentage()
//     {
//         per = marks / 100;
//     }
//     void grade()
//     {
//         if (marks >= 85 && marks <= 100)
//             cout << "A+";
//         else if (marks >= 80 && marks < 85)
//             cout << "A";
//         else if (marks >= 75 && marks < 80)
//             cout << "B+";
//         else if (marks >= 70 && marks < 75)
//             cout << "B";
//         else if (marks >= 65 && marks < 70)
//             cout << "B-";
//         else if (marks >= 61 && marks < 65)
//             cout << "C+";
//         else if (marks >= 58 && marks < 61)
//             cout << "C";
//         else if (marks >= 50 && marks < 5)
//             cout << "D";
//         else if (marks < 50)
//             cout << "F";
//     }
//     void presentation()
//     {
//         cout << subject << " "
//              << "100 " << marks << " " << gpa12 << " ",
//             grade(), cout << endl;
//     }
//     void total1(gpa ict, gpa C, gpa physics, gpa islmicstudies, gpa pakstudy, gpa english)
//     {
//         int total1 = (ict.marks + C.marks + physics.marks + islmicstudies.marks + pakstudy.marks + english.marks);
//         cout << "\nTotal 600 " << total1 << " _ _ " << endl;
//     }
// }; // endclass
// int main()
// {
//     gpa ict(100, 0, 0.0, "ICT marks: "), C(100, 0, 0.0, "C "), physics(100, 0, 0.0, "Physics marks: "), islmicstudies(100, 0, 0.0, "Islamic Studies marks:"), pakstudy(100, 0, 0.0, "Pakistan Studes marks: "), english(100, 0, 0.0, "English comprehension marks"), sum, total1;
//     cout << "Welcome to GPA calculator by Labiqa islam" << endl;
//     cout << "-------------------------------------------------------------------------------" << endl;
//     cout << "" << endl;
//     cout << "------------------------------------------------------------------------------" << endl;
//     ict.showgpa();
//     ict.getmarks();
//     C.showgpa();
//     C.getmarks();
//     physics.showgpa();
//     physics.getmarks();
//     islmicstudies.showgpa();
//     islmicstudies.getmarks();
//     pakstudy.showgpa();
//     pakstudy.getmarks();
//     english.showgpa();
//     english.getmarks();
//     cout << "-------------------------------------------------------------------------------" << endl;
//     ict.calgpa();
//     C.calgpa();
//     physics.calgpa();
//     islmicstudies.calgpa();
//     pakstudy.calgpa();
//     english.calgpa();
//     sum.add(ict, C, physics, islmicstudies, pakstudy, english);
//     cout << " "
//          << "DETAIL:" << endl;
//     cout << "--------------------------------------------------------------------------------" << endl;
//     cout << "Subject T_marks O_marks GP Grade" << endl;
//     cout << "-------------------------------------------------------------------------------" << endl;
//     ict.presentation();
//     C.presentation();
//     physics.presentation();
//     islmicstudies.presentation();
//     pakstudy.presentation();
//     english.presentation();
//     cout << "--------------------------------------------------------------------------------";
//     total1.total1(ict, C, physics, islmicstudies, pakstudy, english);
//     cout << "--------------------------------------------------------------------------------";
//     cout << endl
//          << endl
//          << "DEVELOPED BY : Labiqa islam" << endl;
//     return 0;
// }
// #include <iostream> // data ambiguity or ambiguous
// using namespace std;
// class A
// {
// protected:
//     int a;

// public:
//     void setdata1()
//     {
//         cout << "Enter a number of Class A: \n";
//         cin >> a;
//     }
//     void displaydata1()
//     {
//         cout << "You entered: " << a << endl;
//     }
// };
// class B : virtual public A
// {
// protected:
//     int b;

// public:
//     void setdata2()
//     {
//         cout << "Enter a number of Class B: \n";
//         cin >> b;
//     }
//     void displaydata2()
//     {
//         cout << "You entered: " << b << endl;
//     }
// };
// // class C : public A//'a' is ambiguous
// class C : virtual public A
// {
// protected:
//     int c;

// public:
//     void setdata3()
//     {
//         cout << "Enter a number of Class C: \n";
//         cin >> c;
//     }
//     void displaydata3()
//     {
//         cout << "You entered: " << c << endl;
//     }
// };
// class D : public B, public C
// {
// protected:
//     int d;

// public:
//     void setdata4()
//     {
//         cout << "Enter a number of Class C: \n";
//         cin >> d;
//     }
//     void displaydata4()
//     {
//         setdata1(); //'a' is ambiguous
//         setdata2();
//         setdata3();
//         setdata4();
//         displaydata1(); //'a' is ambiguous
//         displaydata2();
//         displaydata3();
//         cout << "You entered: " << a << endl; //'a' is ambiguous
//     }
// };
// int main()
// {
//     D obj;
//     obj.displaydata4();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class base
// {
// private:
//     int salary;

// protected:
//     string nick_name;

// public:
//     string name;
//     void setdata(int, string, string);
//     void display();
// };
// void base::setdata(int x, string y, string z)
// {
//     salary = x;
//     nick_name = y;
//     name = z;
// }
// void base::display()
// {
//     cout << "Salary is " << salary << endl;
//     cout << "ninick_name is " << nick_name << endl;
//     cout << "name is " << name << endl;
// }
// class derived : public base
// {
// public:
//     void func(string r)
//     {
//         name = r;
//         cout << "name is deriver class is " << name << endl;
//     }
// };
// int main()
// {
//     base obj1;
//     obj1.setdata(12, "bubblu", "ayaz");
//     obj1.display();
//     derived obj2;
//     obj2.func("saran");
// }
// #include <iostream> //multi level inheritance
// using namespace std;
// class student
// {
// protected:
//     int rollno;

// public:
//     void set_rollno(int r) //
//     {
//         rollno = r;
//         display_rollno();
//     }
//     void display_rollno() //
//     {
//         cout << "Roll no of student is " << rollno << endl;
//     }
// };
// class exam : public student
// {
// protected:
//     float math;
//     float physics;
//     float OOP;

// public:
//     void set_marks(float m1, float m2, float m3) //
//     {
//         math = m1;
//         physics = m2;
//         OOP = m3;
//         set_rollno(5);   //
//         display_marks(); //
//     }
//     void display_marks() //
//     {
//         cout << "Marks of the student in math is " << math << endl;
//         cout << "Marks of the student in physics is " << physics << endl;
//         cout << "Marks of the student in OOP is " << OOP << endl;
//     }
// };
// class result : public exam
// {
// public:
//     void display_percentage()
//     {
//         set_marks(65, 93, 82);

//         cout << "Percentage of the student is " << (math + physics + OOP) / 300 * 100 << endl;
//     }
// };

// int main()
// {
//     result b;
//     b.display_percentage();
// }

// #include <iostream> // single inheritance or base and derived class
// using namespace std;
// class base
// {
// private:
//     int data1;

// public:
//     int data2;
//     void setdata();
//     int getdata1();
// };
// void base::setdata()
// {
//     data1 = 10;
//     data2 = 20;
// }
// int base::getdata1()
// {
//     return data1;
// }
// class derived : private base
// // class derived : public base
// {
// public:
//     int data3;
//     void process();
//     void display();
// };
// void derived::process()
// {
//     setdata(); //uncomment it if visibility mode is private
//     data3 = data2 * getdata1();
// }
// void derived::display()
// {
//     cout << "Value of data 1 is " << getdata1() << endl;
//     cout << "Value of data 2 is " << data2 << endl;
//     cout << "Value of data 3 is " << data3 << endl;
// }
// int main()
// {
//     derived obj1;
//     // obj1.setdata(); //uncomment it if visibility mode is public
//     obj1.process();
//     obj1.display();
//     return 0;
// }

// #include <iostream> //inheritance
// using namespace std;
// class base
// {
// public:
//     int a, b;
//     base(int setdata)
//     {
//         a = setdata;
//         b = 20;
//     }
//     base(){};
// };
// class derived : public base
// {
// public:
//     int c;
//     derived(int setdata1)
//     {
//         a = setdata1;
//         c = 30;
//     }
// };
// int main(int argc, char const *argv[])
// {
//     base obj1(10);
//     cout << "Value of a in base class is " << obj1.a << endl;
//     cout << "Value of b is " << obj1.b << endl;
//     derived obj2(15);
//     cout << "Value of a in derived classis " << obj2.a << endl;
//     cout << "Value of c is " << obj2.c << endl;
//     return 0;
// }

// #include <iostream> //inheritance in OOP
// using namespace std;
// class Employee
// {
// private:
// public:
//     int id;
//     int salary;
//     Employee(int serdata)
//     {
//         id = serdata;
//         salary = 50;
//     }
//     Employee(){};
// };
// class programmer : public Employee
// {
// public:
//     int salary1;
//     programmer(int serdata)
//     {
//         id = serdata;
//         salary1 = 51;
//     }
// };
// int main()
// {
//     Employee obj1(25), obj2(26);
//     cout << obj1.salary << endl;
//     cout << obj1.id << endl;
//     cout << obj2.salary << endl;
//     cout << obj2.id << endl;

//     programmer obj3(27);
//     cout << obj3.salary1 << endl;
//     cout << obj3.id << endl;
//     return 0;
// }

// #include <iostream> // lab task
// using namespace std;
// double b[10000000];
// class num1
// {
// public:
//     num1()
//     {
//         cout << "Constructor called\n";
//     }
//     ~num1()
//     {
//         cout << "Distructor called\n";
//     }
// };
// int main()
// {
//     num1 obj1;
//     int a;
//     cout << "Enter a number\n";
//     cin >> a;
//     cout << "Numbet is: "
//          << a;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class num1
// {
// private:
// public:
//     num1()
//     {
//         cout << "Constructor called\n";
//     }
//     ~num1()
//     {
//         cout << "Distructor called\n";
//     }
// };
// int main()
// {
//     num1 obj1;
//     cout << "Entering block\n";
//     {
//         cout << "creating two more objects\n";
//         num1 obj2, obj3;
//         cout << "Exiting block\n";
//     }
//     cout << "Back to main & main end's\n";
//     return 0;
// }

// #include <iostream> //friend class
// using namespace std;
// class y;
// class x
// {
// private:
//     int a;

// public:s
//     void setdata(int var1) { a = var1; }
//     friend void add(x, y);
// };
// class y
// {
// private:
//     int b;

// public:
//     void setdata(int var2) { b = var2; }
//     friend void add(x, y);
// };
// void add(x o1, y o2)
// {
//     cout << "Sum of abjects of two classes is " << o1.a + o2.b;
// }
// int main()
// {
//     x obj1;
//     y obj2;
//     int a1, a2;
//     cout << "Enter 1st number for sum: ";
//     cin >> a1;
//     cout << "Enter 2nd number for sum: ";
//     cin >> a2;
//     obj1.setdata(a1);
//     obj2.setdata(a2);
//     add(obj1, obj2);
//     return 0;
// }

// #include <iostream> //copy constructor
// using namespace std;
// class number
// {
// private:
//     int a;

// public:
//     number() { a = 0; };
//     number(int num) { a = num; };
//     number(number &obj)
//     {
//         cout << "Copy Constructor called: \n";
//         obj.a = a;
//         // cout << "Copy Constructor called: \n"
//         //      << a;
//     };
//     void display()
//     {
//         cout << "the value of a is " << a << endl;
//     }
// };
// int main()
// {
//     number x(12);
//     x.display();
//     number y(x);
//     number z = x;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     /* ********** refrence variable ********** */
//     int a = 3;
//     int &b = a;
//     cout << "Tha Value of a is " << a << " And value of b is " << b << endl;
//     b++;
//     cout << "Tha Value of a is " << a << " And value of b is " << b << endl;

//     /* ********** Sizeof operator ********** */
//     cout << "Size of a is " << sizeof(a) << endl;

//     /* ********** Type casting ********** */
//     a = 3.14;
//     cout << "the value of a is " << float(a);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class number
// {
// private:
//     int a;

// public:
//     number() { a = 0; };
//     number(int num) { a = num; };
//     number(number &obj)
//     {
//         cout << "Copy constructor call: \n";
//         a = obj.a;
//     }
//     void display()
//     {
//         cout << "This is function: " << a << endl;
//     }
// };
// int main()
// {
//     number x, y(10), z(12), z1;
//     x.display();
//     y.display();
//     z.display();
//     number z2(x);  // copy constructor called
//     number z3 = z; // copy constructor called
//     x.display();
//     y.display();
//     z.display();
//     return 0;
// }

// #include <iostream> //Dynamic initialization of objects
// using namespace std;
// class bankDeposit
// {
// private:
//     int principal, years;
//     float intrestRate, returnValue;

// public:
//     bankDeposit(){};
//     bankDeposit(int p, int y, int r);
//     bankDeposit(int p, int y, float R);
//     void show(void);
// };
// bankDeposit ::bankDeposit(int p, int y, int r)
// {
//     principal = p;
//     years = y;
//     intrestRate = float(r) / 100;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1 + intrestRate);
//     }
// }
// bankDeposit ::bankDeposit(int p, int y, float R)
// {
//     principal = p;
//     years = y;
//     intrestRate = R;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1 + intrestRate);
//     }
// }
// void bankDeposit::show()
// {
//     cout << "The Principal amount was " << principal
//          << "\nAfter " << years << " Amount is "
//          << returnValue << endl;
// }
// int main()
// {
//     bankDeposit obj1, obj2, obj3;
//     int p, y, r;
//     float R;
//     cout << "Enter Principal amount: ";
//     cin >> p;
//     cout << "Enter years: ";
//     cin >> y;
//     cout << "Enter Intrest rate as integer: ";
//     cin >> r;
//     obj1 = bankDeposit(p, y, r);
//     obj1.show();

//     cout << "Enter Principal amount: ";
//     cin >> p;
//     cout << "Enter years: ";
//     cin >> y;
//     cout << "Enter Intrest rate as Floating value: ";
//     cin >> R;
//     obj1 = bankDeposit(p, y, R);
//     obj1.show();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class class1
// {
// private:
//     int feet;
//     float inches;

// public:
//     void setdata(int ft, float in)
//     {
//         feet = ft;
//         inches = in;
//     }
//     void getdis()
//     {
//         cout << "\nEnter feet: ";
//         cin >> feet;
//         cout << "\nEnter inches: ";
//         cin >> inches;
//     }
// };
// int main()
// {
// class1 dist1,dist2;

// dist1.setdata(23,45);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class counter
// {
// private:
//     int count;

// public:
//     counter()
//     {
//         cout << "i am constructor " << endl;
//     }
// };
// int main()
// {
//     counter c1, c2;
//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// class football
// {
// private:
//     char name[10];
//     int rank;

// public:
//     void setdata()
//     {
//         cout << "Enter name of player: \n";
//         cin >> name;
//         cout << "Enter rank of player: \n";
//         cin >> rank;
//         displaydata();
//     }
//     void displaydata()
//     {
//         cout << "Name of player: "
//              << name;
//         cout << "\nRank of player: "
//              << rank;
//     }
// };
// int main()
// {
//     football f;
//     f.setdata();
//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// class myclass
// {
// public:
//     int mynum;
//     string mystring;
// };
// int main()
// {
//     myclass myobj;
//     myobj.mynum;
//     // myobj.mynum = NULL;
//     cout << myobj.mynum << "\n";
//     return 0;
// }
// #include <iostream>
// #include <string.h>
// using namespace std;
// class myclass
// {
// public:
//     int mynum;
//     string mystring;
// };
// int main()
// {
//     myclass myobj;
//     myobj.mynum;
//     // myobj.mynum = NULL;
//     cout << myobj.mynum << "\n";
//     return 0;
// }

// #include <iostream> // Default value of costructor
// #include<string.h>
// using namespace std;
// class simple
// {
// private:
//     char data1, data2, data3;

// public:
//     void setdata(char x = 'a', char y = 'b', char z = 'c') // Default value of costructor
//     {
//         data1 = x;
//         data2 = y;
//         data3 = z;
//     }
//     void printdata()
//     {
//         cout << "The value of data1 is: " << data1 << endl;
//         cout << "The value of data2 is: " << data2 << endl;
//         cout << "The value of data3 is: " << data3 << endl;
//     }
// };
// int main()
// {
//     simple obj;
//     // obj.setdata();
//     obj.setdata('x');
//     // obj.setdata(11, 12);
//     // obj.setdata(11, 12, 13);
//     obj.printdata();
//     return 0;
// }

// #include <iostream> // constructor
// using namespace std;
// class complex
// {
// private:
//     int a, b;

// public:
//     complex(void); // constructor
//     void print(void)
//     {
//         cout << "your number is " << a << " + " << b << "i\n";
//     }
// };
// complex::complex(void)
// {
//     a = 3;
//     b = 4;
// }
// int main()
// {
//     complex c1, c2, c3;
//     c1.print();
//     c2.print();
//     c3.print();
//     return 0;
// }

// #include <iostream>//exchange objects of two classes
// using namespace std;
// class c2; // forward declration
// class c1
// {
// private:
//     int var1;
//     void friend exchange(c1 &, c2 &);

// public:
//     void func1(int a)
//     {
//         var1 = a;
//     }
//     void display()
//     {
//         cout << var1 << endl;
//     }
// };
// class c2
// {
// private:
//     int var2;

// public:
//     void friend exchange(c1 &, c2 &);
//     void func1(int a)
//     {
//         var2 = a;
//     }
//     void display()
//     {
//         cout << var2 << endl;
//     }
// };
// void exchange(c1 &x, c2 &y)
// {
//     int temp = x.var1;
//     x.var1 = y.var2;
//     y.var2 = temp;
// }
// int main()
// {
//     c1 a1;
//     cout << "The value of first class before exchange is:" << endl;
//     a1.func1(12);
//     a1.display();
//     cout << "The value of second class before exchange is:" << endl;
//     c2 a2;
//     a2.func1(14);
//     a2.display();
//     exchange(a1, a2);
//     cout << "The value of first class after exchange is:" << endl;
//     a1.display();
//     cout << "The value of second class after exchange is:" << endl;
//     a2.display();
//     return 0;
// }

// #include <iostream> // simple class
// using namespace std;
// class y;
// class x
// {
// private:
//     int a;

// public:
//     void setvalue(int v1)
//     {
//         a = v1;
//     }
//     friend void add(x, y);
// };
// class y
// {
// private:
//     int b;

// public:
//     void setvalue2(int v2)
//     {
//         b = v2;
//     }
//     friend void add(x, y);
// };
// void add(x o1, y o2)
// {
//     cout << "Sum of abjects of two classes is " << o1.a + o2.b;
// }
// int main(int argc, char const *argv[])
// {
//     x a1;
//     y a2;
//     a1.setvalue(32);
//     a2.setvalue2(31);
//     add(a1, a2);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class complex;
// class calculator
// {
// public:
//     int add(int a, int b)
//     {
//         return (a + b);
//     }
//     int sumrealcomplex(complex, complex);
//     int sumcompcomplex(complex, complex);
// };

// class complex
// {
// private:
//     int a, b;
//     // friend class calculator;
//     friend int calculator::sumrealcomplex(complex c1, complex c2);
//     friend int calculator::sumcompcomplex(complex c1, complex c2);

// public:
//     void setdata(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
// };
// int calculator::sumrealcomplex(complex c1, complex c2)
// {
//     return (c1.a + c2.a);
// }
// int calculator::sumcompcomplex(complex c1, complex c2)
// {
//     return (c1.b + c2.b);
// }
// int main()
// {
//     complex c1, c2;
//     c1.setdata(10, 40);
//     c2.setdata(6, 52);

//     calculator cal;
//     int result1 = cal.sumrealcomplex(c1, c2);
//     cout << "The sum of real part is " << result1 << endl;
//     int result2 = cal.sumcompcomplex(c1, c2);
//     cout << "The sum of complex part is " << result2 << endl;
// }
// // #include <iostream> // complex
// using namespace std;
// class Complex
// {
// private:
//     int a, b;

// public:
//     void givevalue(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     void printvalue(void)
//     {
//         cout << a << " + " << b << "i" << endl;
//     }
//     void complex_sum(Complex a1, Complex a2)
//     {
//         a = a1.a + a2.a;
//         b = a1.b + a2.b;
//     }
// };
// int main()
// {
//     Complex room1, room2, room3;
//     room1.givevalue(4, 5);
//     room1.printvalue();

//     room2.givevalue(8, 9);
//     room2.printvalue();

//     room3.complex_sum(room1, room2);
//     room3.printvalue();
//     return 0;
// }

// // check binary & nesting of member function or how to privat a function
// #include <iostream>
// #include <string.h>
// using namespace std;
// class nesting
// {
// private:
//     string s;
//     void check();
//     void inverse();
//     void display();
// public:
//     void input();
// };
// void nesting ::input()
// {
//     cout<<"enter a binary number: "<<endl;
//     cin >> s;
//     check();
// }
// void nesting ::check()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "invalid binary formate..." << endl;
//             exit(0);
//         }
//     }
//     inverse();
// }
// void nesting ::inverse()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '0')
//         {
//             s.at(i) = '1';
//         }
//     else
//     {
//         s.at(i) = '0';
//     }
//     }
//     display();
// }
// void nesting ::display(){
//         for (int i = 0; i < s.length(); i++)
//     {
//        cout<<s.at(i);
//     }
// }
// int main()
// {
//     nesting s;
//     s.input();
// }
// #include <iostream>
// using namespace std;
// class practice
// {
// private:
//     int a, b, c;

// public:
//     int d, e;
//     void state(int a1, int b1, int c1);
//     void get(int d, int e);
// };
// void practice::state(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }
// void practice::get(int d, int e)
// {
//     cout << "value of a is " << a << endl;
//     cout << "value of b is " << b << endl;
//     cout << "value of c is " << c << endl;
//     cout << "value of d is " << d << endl;
//     cout << "value of e is " << e << endl;
// }
// int main()
// {
//     practice s;
//     s.state(1, 2, 3);
//     s.get(44, 55);
//     return 0;
// }
