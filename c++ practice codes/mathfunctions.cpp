#include <iostream>
#include <cmath> //(need for all math functions except min  and max)
using namespace std;

int main() {
    //math functions
    int n=1,o=9;

    cout << max(n,o)<<endl;
    cout << min(n,o)<<endl;

    cout << pow(16,2)<<endl;
    cout << round(11.7-1)<<endl;
    cout << ceil(6.7)<<endl;
    cout << floor(6.7)<<endl;
    cout<<round(sqrt(8))<<endl;
    cout << log(9);

    int s=45444433333;
    cout << s.length();
    return 0;
}