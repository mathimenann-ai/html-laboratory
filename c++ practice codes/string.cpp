#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
   // string san =" sanmenan";
   // string sun="s";
   // cout << sun + san; // output -- s sanmenan

   // cout << "length of sun :" << sun.length()<< endl; //-- tells length of string 
   // cout << sun.append(san) << endl; // append function only can add two things not as con
   //  // indexing
   //  cout << san[2] << endl ;
   //  cout << san.at(2) << endl;
   //  // replace
   //  san[2]='s' ; // single quotes
    
   //  // getting input ( for inputs having space)
   //  string name ;
   //  cout<<"Enter name:";
   //  getline(cin,name);
   //  "\n";
   //  // multiple inputs
   //  string Name1 , Name2;
   //  cout << "Enter Names :";
   //  cin >> Name1 >> Name2;

    // reverse() — works on strings, not directly on int
      string s = to_string(123);
      reverse(s.begin(), s.end());
      int rev = stoi(s);
      cout<< rev;

   return 0;
}