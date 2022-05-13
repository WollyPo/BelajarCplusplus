#include<bits/stdc++.h>
using namespace std;
void f(){
    int aa[10];
    aa[6] = 9; // assign to aa’s 7th element
    int x = aa[99]; // undefined behavior
}
void f2(int n){
    /*
    int v1[n]; // error : array size not a constant expression
    */
    vector<int> v2(n); // OK: vector with n int elements
}
int a1[10]; // 10 ints in static storage
void f3(){
    int a2 [20]; // 20 ints on the stack
    int*p = new int[40]; // 40 ints on the free store
    // ...
}
int main(){
    float v[3]; // an array of three floats: v[0], v[1], v[2]
    char* a[32]; // an array of 32 pointers to char: a[0] .. a[31]
    int v1[] = { 1, 2, 3, 4 };
    char v2[] = { 'a', 'b', 'c', 0 };
    /*
    char v3[2] = { 'a', 'b', 0 }; // error : too many initializers
    */
    char v4[3] = { 'a', 'b', 0 }; // OK
    int v5[8] = { 1, 2, 3, 4 }; // int v5[] = { 1, 2, 3, 4 , 0, 0, 0, 0 };
    /*
    int v6[8] = v5; // error : can’t copy an array (cannot assign an int* to an array)
    v6 = v5; // error : no array assignment
    */
    return 0;
}