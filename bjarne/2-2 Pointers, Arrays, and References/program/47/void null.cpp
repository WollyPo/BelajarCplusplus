#include<bits/stdc++.h>
using namespace std;
void f(int* pi)
{
    void* pv = pi; // ok: implicit conversion of int* to void*
    /*
    *pv; //error : can’t dereference void*
    ++pv; //error : can’t increment void* (the size of the object pointed to is unknown)
    */
    int* pi2 = static_cast<int*>(pv); //explicit conversion back to int*
    /*
    double* pd1 = pv; // error
    double* pd2 = pi; // error
    */
    double* pd3 = static_cast<double*>(pv); // unsafe (§11.5.2)
}
int main(){
    void* my_alloc(size_t n); // allocate n bytes from my special heap
    int* pi = nullptr;
    double* pd = nullptr;
    /*
    int i = nullptr; // error : i is not a pointer
    */
    int* x = 0; // x gets the value nullptr
    int* p = NULL; // using the macro NULL
    /*
    int* p = NULL; // error : can’t assign a void* to an int*
    */
    return 0;
}