#include<bits/stdc++.h>
using namespace std;
#define CMATRIX_H
template<class T> void f1(vector<T>& arg){
    for (vector<T>::iterator p = arg.begin(); p!=arg.end(); ++p)
        *p = 7;
    for (auto p = arg.begin(); p!=arg.end(); ++p)
        *p = 7;
}
// void f(double d){
//     constexpr auto max = d+7;
//     int a[max]; // error : array bound not an integer
//     // ...
// }
void f(vector<int>& v){
    for (const auto& x : v) { // x is a const int&
        // ...
    }
}
void g(int& v){
    auto x = v; // x is an int (not an int&)
    auto& y = v; // y is an int&
}
// template<class T, class U>
// auto operator+(const Matrix<T>& a, const Matrix<U>& b) -> Matrix<decltype(T{}+U{})>;
// template<class T, class U>
// auto operator+(const Matrix<T>& a, const Matrix<U>& b) -> Matrix<decltype(T{}+U{})>{
//     Matrix<decltype(T{}+U{})> res;
//     for (int i=0; i!=a.rows(); ++i)
//         for (int j=0; j!=a.cols(); ++j)
//             res(i,j) += a(i,j) + b(i,j);
//     return res;
// }
int main(){
    int a1 = 123;
    char a2 = 123;
    auto a3 = 123; // the type of a3 is ‘‘int’’
    char v1 = 12345; // 12345 is an int
    int v2 = 'c'; // 'c' is a char
    //T v3 = f();
    char v1 {12345}; // error : narrowing
    int v2 {'c'}; // fine: implicit char->int conversion
    //T v3 {f()}; // works if and only if the type of f() can be implicitly converted to a T
    auto v1 = 12345; // v1 is an int
    auto v2 = 'c'; // v2 is a char
    //auto v3 = f(); // v3 is of some appropriate type
    auto v1 {12345}; // v1 is a list of int
    auto v2 {'c'}; // v2 is a list of char
    //auto v3 {f()}; // v3 is a list of some appropriate type
    //auto x0 {}; // error : cannot deduce a type
    auto x1 = {1}; // list of int with one element
    auto x2 = {1,2}; // list of int with two elements
    auto x3 = {1,2,3}; // list of int with three elements
    return 0;
}