#include<bits/stdc++.h>
using namespace std;
void intval(){
    for (char c; cin >> c; )
        cout << "the value of '" << c << "' is " << int{c} << '\n';
}
void digits(){
    for (int i=0; i!=10; ++i)
        cout << static_cast<char>('0'+i);
}
// void f(char c, signed char sc, unsigned char uc){
//     char* pc = &uc; // error : no pointer conversion
//     signed char* psc = pc; // error : no pointer conversion
//     unsigned char* puc = pc; // error : no pointer conversion
//     psc = puc; // error : no pointer conversion
// }
void g(char c, signed char sc, unsigned char uc){
    c = 255; // implementation-defined if plain chars are signed and have 8 bits
    c = sc; // OK
    c = uc; // implementation-defined if plain chars are signed and if uc’s value is too large
    sc = uc; // implementation defined if uc’s value is too large
    uc = sc; // OK: conversion to unsigned
    sc = c; // implementation-defined if plain chars are unsigned and if c’s value is too large
    uc = c; // OK: conversion to unsigned
}
int main(){
    char c = 255; // 255 is ‘‘all ones,’ ’ hexadecimal 0xFF
    int i = c;
    cout << i << endl;
    signed char sc = -160;
    unsigned char uc = sc; // uc == 116 (because 256-160==116)
    cout << uc; // print 't'
    char count[256]; // assume 8-bit chars
    ++count[sc]; // likely disaster: out-of-range access
    ++count[uc]; // OK
    char v1[] = "a\xah\129"; // 6 chars: 'a' '\xa' 'h' '\12' '9' '\0'
    char v2[] = "a\xah\127"; // 5 chars: 'a' '\xa' 'h' '\127' '\0'
    char v3[] = "a\xad\127"; // 4 chars: 'a' '\xad' '\127' '\0'
    char v4[] = "a\xad\0127"; // 5 chars: 'a' '\xad' '\012' '7' '\0'
    cout << v1 << endl;
    cout << v2 << endl;
    cout << v3 << endl;
    cout << v4 << endl;
    return 0;
}