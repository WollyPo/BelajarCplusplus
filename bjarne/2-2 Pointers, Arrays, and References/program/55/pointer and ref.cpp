#include<bits/stdc++.h>
using namespace std;
using rr_i = int&&;
using lr_i = int&;
using rr_rr_i = rr_i&&; // ‘‘int && &&’’ is an int&&
using lr_rr_i = rr_i&; // ‘‘int && &’’ is an int&
using rr_lr_i = lr_i&&; // ‘‘int & &&’’ is an int&
using lr_lr_i = lr_i&; // ‘‘int & &’’ is an int&
void fp(char* p){
    while (*p)
        cout << ++*p;
}
void fr2(char& r){
    while (r)
        cout << ++r; // oops: increments the char referred to, not the reference
    // near-infinite loop!
}
void fr2(char& r){
    char* p = &r; //get a pointer to the object referred to
    while (*p)
        cout << ++*p;
}
template<class T> class Proxy { // Proxy refers to the object with which it is initialized
    T& m;
    public:
        Proxy(T& mm) :m{mm} {}
        // ...
};
template<class T> class Handle { // Handle refers to its current object
    T* m;
    public:
        Proxy(T* mm) :m{mm} {}
        void rebind(T* mm) { m = mm; }
        // ...
};
/*
Matrix operator+(const Matrix&, const Matrix&); // OK
Matrix operator-(const Matrix*, const Matrix*); // error : no user-defined type argument
Matrix y, z;
// ...
Matrix x = y+z; // OK
Matrix x2 = &y-&z; // error and ugly
void fp(X* p){
    if (p == nullptr) {
        // no value
    }
    else {
        // use *p
    }
}
*/
void fr1(int& r){ // common style
    // assume that r is valid and use it
}
/*
void fr2(int& r){
    if (&r == &nullX) { // or maybe r==nullX
        // no value
    }
    else {
        // use r
    }
}
*/
char* ident(char * p) { return p; }
char& r {*ident(nullptr)}; // invalid code
int main(){
    int x, y;
    /*
    string& a1[] = {x, y}; // error : array of references
    string* a2[] = {&x, &y}; // OK
    vector<string&> s1 = {x , y}; // error : vector of references
    */
    vector<string*> s2 = {&x, &y}; // OK
    return 0;
}