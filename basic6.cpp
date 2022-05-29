// define methods also outside the namespace

// A C++ code to dempnstrate that we can define 
// methods outside namespace

#include <iostream>
using namespace std;

// creating a namespace
namespace ns
{
    void display();
    class geek
    {
    public:
        void display();
    };
}

//defining methods of namespace
void ns::geek::display()
{
    cout << "ns::geek::display()\n";
}
void ns::display()
{
    cout << "ns::display()\n";
}

//driver code 
int main(){
    ns::geek obj;
    ns::display();
    obj.display();

    return 0;
}