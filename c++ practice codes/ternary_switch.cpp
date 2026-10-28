#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    // tenary operators 
    int age = 10;
    (age > 20) ? cout<<"teen" : cout<<"child";

    // switch operaters 
    int num=5;
    switch(num)
    {
        case 1 :
            cout<<"The num is 1";
            break;
     case 2 :
            cout << "is 2";
            break;
        case 3:
            cout<< "The num is 3";
            break;
        default:
            cout << "The num is greater then three";
    
    }


    return 0;
}