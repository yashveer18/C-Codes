/*
STL : Standard Template Library
ALGORITHMS
FUNCTIONS
ITERATORS
CONTAINERS
*/
#include <bits/stdc++.h>
using namespace std;


//Pairs

void explainPair() {

    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second;

    pair<int, pair<int,int>> p ={1,{3,4}};
    cout<< p.first << " " << p.second.second << " " << p.second.first;

    pair<int,int> arr[]= {{1,2},{2,5},{5,1}};
    cout << arr[1].second;
}


/*
void explainVectors(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;
    
    vec.push_back({1,2});
    vec.emplace_back({1,2});

    vector<int> v(5,100);
    
    vector<int> v(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();
    it++;
    cout<< *it<<"";
}
*/