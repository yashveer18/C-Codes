#include <bits/stdc++.h>
using namespace std;
//Func are set of code which performs something for u
//Funct are use to modularize code
//Funct are used to increase readbility
//Funct are used to reduce code duplication and use the same code multiuple times
/* Types
1. VOid - which does not return anything
2. Return
3.Paramatrized
4. Non Paramatrized*/

// All functions used in one

void printName(string name){
    cout<<"Yash "<<name; //wont give any name here, will print only if you call it in the main function

}
int main(){
    string name;
    cin>>name;
    printName(name);
    return 0;
}