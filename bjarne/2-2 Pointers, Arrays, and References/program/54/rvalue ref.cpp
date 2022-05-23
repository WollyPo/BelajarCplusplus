#include<iostream>
#include<vector>
using namespace std;
string f(string&& s){
    if (s.size())
        s[0] = toupper(s[0]);
    return s;
}/*
template<class T>
swap(T& a, T& b){ // "old-style swap"
    T tmp {a}; // now we have two copies of a
    a = b; // now we have two copies of b
    b = tmp; // now we have two copies of tmp (aka a)
}*/
template<class T>
void swap(T& a, T& b){ // "perfect swap" (almost)
    T tmp {static_cast<T&&>(a)}; // the initialization may write to a
    a = static_cast<T&&>(b); // the assignment may write to b
    b = static_cast<T&&>(tmp); // the assignment may write to tmp
}
/*
template<class T> class vector {
    // ...
    vector(const vector& r); // copy constr uctor (copy r’s representation)
    vector(vector&& r); // move constr uctor ("steal" representation from r)
};

vector<string> s;
vector<string> s2 {s}; // s is an lvalue, so use copy constructor
vector<string> s3 {s+"tail"); // s+"tail" is an rvalue so pick move constructor
*/
template<class T>
void swap(T& a, T& b){ // "perfect swap" (almost)
    T tmp {move(a)}; // move from a
    a = move(b); // move from b
    b = move(tmp); // move from tmp
}
template<class T> void swap(T&& a, T& b);
template<class T> void swap(T& a, T&& b);
/*
void f(vector<int>& v){
    swap(v,vector<int>{1,2,3}); // replace v’s elements with 1,2,3
    // ...
}*/
void f(string& s, vector<int>& v){
    s.shrink_to_fit(); // make s.capacity()==s.size()
    swap(s,string{s}); // make s.capacity()==s.size()
    v.clear(); //make v empty
    //swap(v.vector<int>{}); // make v empty
    v ={}; //make v empty
}
int main(){
    string var {"Cambridge"};
    string f();
    string& r1 {var}; // lvalue reference, bind r1 to var (an lvalue)
    string& r2 {f()}; // lvalue reference, error : f() is an rvalue
    string& r3 {"Princeton"}; // lvalue reference, error : cannot bind to temporary
    string&& rr1 {f()}; // rvalue reference, fine: bind rr1 to rvalue (a temporar y)
    /*
    string&& rr2 {var}; // rvalue reference, error : var is an lvalue
    */
    string&& rr3 {"Oxford"}; // rr3 refers to a temporar y holding "Oxford"
    /*
    const string cr1& {"Harvard"}; // OK: make temporar y and bind to cr1
    */
    return 0;
}