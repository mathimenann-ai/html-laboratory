#include <iostream>
using namespace std;

int main() {
    //for loop (when we know the defnitive count) 
    int n =10;
    for (int i =1;i<=n;i++) //--->( initialisation , condition , updation )    
    { 
        cout<<i<<endl;
        

    }

    // nested loop 
    int m=5;
    n=7;
    for (int i=0;i<m;i++)
    {
        cout<<"row :"<<i+1<<endl;
        for (int j=1;j<=n;j++)
        {
            cout<<'x';
        }
        cout<<endl;
    }

    return 0;
}