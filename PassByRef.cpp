//Pass by value when u call funt and u call value , the copy of that number goes
//not the original. the original value stored somewhere in memory
//Works with num, string anything
#include <bits/stdc++.h>
using namespace std;
/*
void doSome(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num = 10;
    doSome(num);
    cout<<num<<endl;//Here expexted value was 20 but cout will give 10 due to pass by reference
    return 0;
}
*/


/*
//Pass by reference Just add "&" symbol before passing tha variable in function defination
//This passes the orginal number and the final o/p is the new value of the variable
void doSome(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num = 10;
    doSome(num);
    cout<<num<<endl;//Here expexted value was 20 but cout will give 10 due to pass by reference
    return 0;
}

*/

//Declaring aaray
// Pass by value doesnt work for arrays the go with pass by reference
doSome(int arr[],int n){
    arr[0]+=100;
    cout<<"Value inside funt "<<arr[0]<<endl;
}
int main(){
    int n = 5;
    int arr[n];
    for (int i =0;i<=4; i=i+1){
        cin>>arr[i];
    }
    for (int i =0;i<n; i=i+1){
        cout<<arr[i]<<" "<<endl;
    }
    doSome(arr,n);
    cout<<"Value inside main "<<arr[0]<<endl;//For proving that array always goes by reference
    
    return 0;

}    

