#include <iostream>
using namespace std;
int a=18 , b=19;
int main()
{
    int a=18 , b=19;
    cout<<"This is hello world prog"<<endl;
    cout<<"This is hello world progg"<<endl;//New line
    
    //Arithmetic operators
    cout<<"Value of a+b : "<<a+b<<endl;
    cout<<"Value of a*b : "<<a*b<<endl;
    cout<<"Value of a-b : "<<a-b<<endl;
    cout<<"Value of a/b : "<<a/b<<endl;
    cout<<"Value of a%b : "<<a%b<<endl;//Modulous
    cout<<"Value of a++ : "<<a++<<endl;//Increment
    cout<<"Value of a-- : "<<a--<<endl;//Decrement
    cout<<"Value of ++a : "<<++a<<endl;
    cout<<"Value of --a : "<<--a<<endl;
    cout<<endl;
  
    // Assignment operators 
    // int a=18 , b=19;

    // Comparison operator
    cout<<"Following are the comparison operator"<<endl;
    cout<<"The value of a ==b is"<<(a==b)<<endl;
    cout<<"The value of a !=b is"<<(a!=b)<<endl;
    cout<<"The value of a >=b is"<<(a>=b)<<endl;
    cout<<"The value of a <=b is"<<(a<=b)<<endl;
    cout<<"The value of a >b is"<<(a>b)<<endl;
    cout<<"The value of a <b is"<<(a<b)<<endl ;
    
    //Logical operators
    cout<<"The value of this logi op is "<<endl;
    cout<<"The value of a ==b and a<b is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of a ==b or a<b is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of not a ==b  is "<<!(a==b) <<endl;
    return 0;
}
