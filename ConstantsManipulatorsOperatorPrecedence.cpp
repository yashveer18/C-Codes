#include <iostream>
#include <iomanip>// for using manipulators
using namespace std;
int main() {
    // cont int a = 34;
    // cout<<"The value of a was "<<a<<endl;
    // a = 45; // error aajayega yaha
    // cout<<"The value of a is now "<<c<<endl;
    
    //const in C++
    // const int a = 34;//ab a ki value kahi change nahi ho sakti
    // cout<<"The cont value of a is "<<a;
    //use isiliye karte hai when we dont want our variable value to be changed in further more code for ex value of pi
    
    //Use of setw() function 
    // int a =3 , b= 78 , c=1233;
    // cout<<"the value of a without setw is "<<a<<endl; 
    // cout<<"the value of b without setw is "<<b<<endl; 
    // cout<<"the value of c without setw is "<<c<<endl;
    // cout<<"the value of a with setw is "<<setw(4)<<a<<endl; 
    // cout<<"the value of a with setw is "<<setw(4)<<b<<endl; 
    // cout<<"the value of a with setw is "<<setw(4)<<c<<endl; 
    // set use hota hai right justified karne ke liye output ko mtlb vo jitni set w ki value ho
    // utni space poori leke print ho program run karke dekh lena op mein diff
    
    //Manipulators in C++
    //Operator Precedance
    int a =3, b=4;
    int c = (a*5)+b-45+87;//yaha BODMAS nahi lagega yaha operatpr precedence lagega table dekh lena uski
    //aise evaluate hogaa ((((a*5)+b)-45)+87) left to right
    
    cout<<c;
    
    return 0;



}