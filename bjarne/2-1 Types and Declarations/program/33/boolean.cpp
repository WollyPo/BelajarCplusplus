#include<bits/stdc++.h>
using namespace std;
void f(int a, int b){
    bool b1 {a==b};
    // ...
}
//bool is_open(File*);
bool greater(int a, int b) { return a>b; }
void f(int i){
    bool b {i!=0};
    // ...
}
void g(int* p){
    bool b = p; // narrows to true or false
    bool b2 {p!=nullptr}; // explicit test against nullptr
    if (p) { // equivalent to p!=nullptr
        // ...
    }
}
int main(){
    bool b1 = 7; // 7!=0, so b becomes true
    //bool b2 {7}; // error : narrowing (§2.2.2, §10.5)
    int i1 = true; // i1 becomes 1
    int i2 {true}; // i2 becomes 1
    bool a = true;
    bool b = true;
    bool x = a+b; // a+b is 2, so x becomes true
    bool y = a||b; // a||b is 1, so y becomes true ("||" means "or")
    bool z = a-b; // a-b is 0, so z becomes false
    return 0;
}