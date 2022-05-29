// #include <iostream>
// //without namspace
// int main(){
//     int value;
//     value = 0;
//     double value;
//     value = 0.0;
// }

// #include <iostream>
// using namespace std;// variable created inside namespace
// namespace first
// {
//     int val = 500;
// }

// // global variable
// int val = 100;

// int main()
// {
//     //local variable
//     int val = 200;
//     //these variable can be accessed from
//     //outside the namespace using the scope
//     //operator ::
//     cout << first::val << '\n';

//     return 0;
// }

// cretaing namespace
#include <iostream>
using namespace std;

namespace ns1
{
    int value()     {return 5; }
}
namespace ns2
{
    const double x = 100;
    double value() { return 2*x; }
}

int main()
{
    // access value function within ns1
    cout << ns1::value() << '\n';

    // Acess value function within ns2
    cout << ns2::value() << '\n';

    //Access variable x directly
    cout << ns2::x << '\n';

    return 0;
}