#include<bits/stdc++.h>
using namespace std;
void copy_fct()
{
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10]; // to become a copy of v1
    for (auto i=0; i!=10; ++i) // copy elements
        v2[i]=v1[i];
}
void print()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    for (auto x : v) // for each x in v
        cout << x << '\n';
    for (auto x : {10,21,32,43,54,65})
        cout << x << '\n';
}
int main(){
    print();
    return 0;
}