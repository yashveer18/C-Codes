#include <iostream>
// Fuck off
using namespace std;
int glo = 6; //Global
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo = 9; // Local
    glo = 78; // Local
    int a = 4 , b = 5;
    float pi = 3.14l;
    char c ='a';
    bool is_true = true;
    bool is_false = false;
    sum();
    cout<<glo;
    cout<<is_true; // o/p = 1 for true
    cout<<is_false; // o/p = 0 for false
    //cout << "this is tutorial 4. \n Here is the value of a" << a <<" \n The value of b" <<b;
    return 0;
    
}