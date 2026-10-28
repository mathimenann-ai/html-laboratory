#include <iostream>
#include <string>
using namespace std;

int main() {
    // array- to store similar type of datas in one variable
    // declaration cum initialisation at same time
    string names []={"san","men","nan"};

    // if separate separate mean
    string name [3]; //-- declare how many values inside
    names[0]="san"; names[1]="men";names[2]="nan";
    
    // to find length of array
    int length= sizeof(names) / sizeof(names[0]);
    cout<<"length of array :"<< length << endl ;

    // for each loop --- {to iterate eachh elment directly one by one  }
    for (string i :names){
        cout << i << endl;
    }

    



    return 0;
}