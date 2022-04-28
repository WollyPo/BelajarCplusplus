#include<bits/stdc++.h>
using namespace std;
const int size = 4*1024;
// char page[size];
// void f(){
//     page[size+size] = 7; // undefined
// }
int main(){
    unsigned char c1 = 64; // well defined: a char has at least 8 bits and can always hold 64
    try{
        unsigned char c2 = 1256; // implementation-defined: truncation if a char has only 8 bits
        cout<<c1<<' '<<c2<<endl;
        /* code */
    }
    catch(const exception& e){
        cerr << e.what() << '\n';
    }
    return 0;
}