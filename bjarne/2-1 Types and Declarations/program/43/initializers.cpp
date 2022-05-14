#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define pi 3.14159265358979323846
void f(){
    int x; // x does not have a well-defined value
    char buf[1024]; // buf[i] does not have a well-defined value
    int* p {new int}; //*p does not have a well-defined value
    char* q {new char[1024]}; // q[i] does not have a well-defined value
    string s; // s=="" because of string’s default constructor
    vector<char> v; // v=={} because of vector’s default constructor
    string* ps {new string}; // *ps is "" because of string’s default constructor
    // ...
}
void ff(){
    int x {}; // x becomes 0
    char buf[1024]{}; // buf[i] becomes 0 for all i
    int* p {new int{10}}; // *p becomes 10
    char* q {new char[1024]{}}; // q[i] becomes 0 for all i
    // ...
}
struct S { int x; string s; };
int main(){
    constexpr int max = 1024*1024;
    char buf[max];
    //some_stream.get(buf,max); // read at most max characters into buf
    char buf[max] {}; // initialize every char to 0
    int a; // means ‘‘int a{};’’ so that a becomes 0
    double d; // means ‘‘double d{};’’ so that d becomes 0.0
    int a[] = { 1, 2 }; // array initializer
    S s = { 1, "Helios" }; // struct initializer
    complex<double> z = { 0, pi }; // use constructor
    vector<double> v = { 0.0, 1.1, 2.2, 3.3 }; // use list constructor
    complex<double> z(0, pi); // use constructor
    vector<double> v(10,3.3); // use constructor : v gets 10 elements initialized to 3.3
    complex<double> z1(1,2); // function-style initializer (initialization by constr uctor)
    complex<double> f1(); // function declaration
    complex<double> z2 {1,2}; // initialization by constr uctor to {1,2}
    complex<double> f2 {}; // initialization by constr uctor to the default value {0,0}
    auto x1 = {1,2,3,4}; // x1 is an initializer_list<int>
    auto x2 = {1.0, 2.25, 3.5 }; // x2 is an initializer_list of<double>
    //auto x3 = {1.0, 2}; // error : cannot deduce the type of {1.0,2} (§6.3.6.2)
    return 0;
}