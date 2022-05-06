#include<bits/stdc++.h>
using namespace std;
void f(double val, int val2){
    int x2 = val; // if val==7.9, x2 becomes 7
    char c2 = val2; // if val2==1025, c2 becomes 1
    int x3 {val}; // error : possible truncation
    char c3 {val2}; // error : possible narrowing
    char c4 {24}; // OK: 24 can be represented exactly as a char
    char c5 {264}; // error (assuming 8-bit chars): 264 cannot be represented as a char
    int x4 {2.0}; // error : no double to int value conversion
    // ...
}
int main(){
    int x1 = 0;
    char c1 = 'z';
    auto z1 {99}; // z1 is an initializer_list<int>
    auto z2 = 99; // z2 is an int
    vector<int> v1 {99}; // v1 is a vector of 1 element with the value 99
    vector<int> v2(99); // v2 is a vector of 99 elements each with the default value 0
    vector<string> v1{"hello!"}; // v1 is a vector of 1 element with the value "hello!"
    //vector<string> v2("hello!"); // error : no vector constructor takes a string literal
    int x4 {}; // x4 becomes 0
    double d4 {}; // d4 becomes 0.0
    char* p {}; //p becomes nullptr
    vector<int> v4{}; // v4 becomes the empty vector
    string s4 {}; // s4 becomes ""
    return 0;
}