#include<bits/stdc++.h>
using namespace std;
int main(){
    char c = 'a';
    char* p = &c; //p holds the address of c; & is the address-of operator
    char c2 = *p; // c2 == ’a’; * is the dereference operator
    int*pi; //pointer to int
    char** ppc; //pointer to pointer to char
    int* ap[15]; // array of 15 pointers to ints
    int (*fp)(char*); // pointer to function taking a char* argument; returns an int
    int* f(char*); //function taking a char* argument; returns a pointer to int
    return 0;
}