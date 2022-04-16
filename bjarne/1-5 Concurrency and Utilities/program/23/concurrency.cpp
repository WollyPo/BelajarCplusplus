#include<bits/stdc++.h>
using namespace std;
// void f(); // function
// struct F { // function object
//     void operator()(); // F’s call operator (§3.4.3)
// };
void f() { cout << "Hello "; }
struct F {
    void operator()() { cout << "Parallel World!\n"; }
};
void user(){
    thread t1 {f}; // f() executes in separate thread
    thread t2 {F()}; // F()() executes in separate thread
    t1.join(); // wait for t1
    t2.join(); // wait for t2
}
int main(){
    user();
    return 0;
}