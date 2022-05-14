#include<bits/stdc++.h>
using namespace std;
// extern "C" int strlen(const char*); // from <string.h>
void f(){
    char v[] = "Annemarie";
    char* p = v; // implicit conversion of char[] to char*
    strlen(p);
    strlen(v); // implicit conversion of char[] to char*
    /*
    v = p; // error : cannot assign to array
    */
   int v1[10];
    int v2[10];
    int i1 = &v1[5]-&v1[3]; // i1 = 2
    int i2 = &v1[5]-&v2[3]; // result undefined
    int* p1 = v2+2; // p1 = &v2[2]
    int* p2 = v2-2; // *p2 undefined
}
void fi(char v[]){
    for (int i = 0; v[i]!=0; ++i)
        cout<<(v[i]);
}
void fp(char v[],int size){
    for (char* p = v; *p!=0; ++p)
        cout<<(*p);
    for (int i=0; i!=size; ++i)
        cout<<(v[i]); // hope that v has at least size elements
    /*
    for (int x : v)
        cout<<(x); //error : range-for does not wor k for pointers
    */
    const int N = 7;
    char v2[N];
    for (int i=0; i!=N; ++i)
        cout<<(v2[i]);
    for (int x : v2)
        cout<<(x); //range-for wor ks for arrays of known size
}
template<typename T>
int byte_diff(T* p, T* q){
    return reinterpret_cast<char*>(q)-reinterpret_cast<char*>(p);
}
void diff_test(){
    int vi[10];
    short vs[10];
    cout << vi << ' ' << &vi[1] << ' ' << &vi[1]-&vi[0] << ' ' << byte_diff(&vi[0],&vi[1]) << '\n';
    cout << vs << ' ' << &vs[1] << ' ' << &vs[1]-&vs[0] << ' ' << byte_diff(&vs[0],&vs[1]) << '\n';
}
int main(){
    int v[] = { 1, 2, 3, 4 };
    int* p1 = v; // pointer to initial element (implicit conversion)
    int* p2 = &v[0]; // pointer to initial element
    int* p3 = v+4; // pointer to one-beyond-last element
    int* p4 = v-1; // before the beginning, undefined: don’t do it
    int* p5 = v+7; // beyond the end, undefined: don’t do it
    
    return 0;
}