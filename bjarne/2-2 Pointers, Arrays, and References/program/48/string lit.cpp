#include<bits/stdc++.h>
using namespace std;
void f(){
    char* p = "Plato"; // error, but accepted in pre-C++11-standard code
    p[4] = 'e'; // error : assignment to const
}
void f2(){
    char p[] = "Zeno"; // p is an array of 5 char
    p[0] = 'R'; // OK
}
const char* error_message(int i){
    // ...
    return "range error";
}
const char* p = "Heraclitus";
const char* q = "Heraclitus";
void g(){
    if (p == q) cout << "one!\n"; // the result is implementation-defined
    // ...
}
int main(){
    cout<<"beep at end of message\a\n";
    char alpha[] = "abcdefghijklmnopqrstuvwxyz"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s = "\\w\\\\w"; // I hope I got that right
    string s = R"(\w\\w)"; // I’m pretty sure I got that right
    string counts {R"(1
22
333)"};
    return 0;
}