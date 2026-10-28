#include <iostream>
using namespace std;

int main() {
    // while loop (entry control loop)
    int numbers =10;
    int i=1;
    while (i<= numbers)
    {
        cout<<i<< endl;
        i++;

    }

    // do while loop (exit control loop ) used when atleast one input is need to be taken bef checking 
    char characters;
    do 
    {   
        cout<< "Enter characters :";
        cin >>characters;
    }while(characters != 'x');
    cout << "You pressed the key for exit ....";

    return 0;
}