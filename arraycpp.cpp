#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,54,9,10,7};
    int even = 0;
    int odd = 0;

    int lenght = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<lenght; i++){
        if (arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "Even numbers : " << even << endl;
    cout << "Odd numbers : " << odd << endl;
}