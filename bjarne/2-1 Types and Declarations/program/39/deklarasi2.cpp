#include<bits/stdc++.h>
using namespace std;
// const c = 7; // error : no type
// gt(int a, int b){ // error : no return type
//     return (a>b) ? a : b;
// }
unsigned ui; // OK: ‘‘unsigned’’means ‘‘unsigned int’’
long li; // OK: ‘‘long’’ means ‘‘long int’’
int main(){
    const char* kings[] = { "Antigonus", "Seleucus", "Ptolemy" };
    int x, y; // int x; int y;
    int* p, y; // int* p; int y; NOT int* y;
    int x, *q; //int x; int* q;
    int v[10], *pv; // int v[10]; int* pv;
    return 0;
}