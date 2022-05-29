// Classes and namespace
// A C++ program to demonstrate use of class 
// in a namespace
/////////////////////////////////
// #include <iostream>
// using namespace std;

// namespace ns
// {
//     // A class in a namespace 
//     class geek
//     {
//         public:
//             void display()
//             {
//                 cout << "ns::geek::dispaly()\n";
//             }
//     };

// }

// int main()
// {
//     //creating object of geek class
//     ns::geek obj;

//     obj.display();

//     return 0;
// }
///////////////////////////
// Class can also be declared inside namespace and defined outside namespace using following syntax

// A C++ program to demonstrate use of class
// in a namespace

#include <iostream>
using namespace std;

namespace ns
{
    // Only declaring class here
    class geek;
}

// Defining class outside
class ns::geek
{
    public:
        void display()
        {
            cout << "ns::geek::display()\n";
        }
};

int main()
{
    // Creating objest of geek class
    ns::geek obj;
    obj.display();

    return 0;
}