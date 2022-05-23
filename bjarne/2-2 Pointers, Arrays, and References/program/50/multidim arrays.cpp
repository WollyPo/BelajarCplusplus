#include<bits/stdc++.h>
using namespace std;
int ma[3][5]; // 3 arrays with 5 ints each
void init_ma(){
    for (int i = 0; i!=3; i++)
    for (int j = 0; j!=5; j++)
        ma[i][j] = 10*i+j;
}
void print_ma(){
    for (int i = 0; i!=3; i++) {
        for (int j = 0; j!=5; j++)
            cout << ma[i][j] << '\t';
        cout << '\n';
    }
}
void print_m35(int m[3][5]){
    for (int i = 0; i!=3; i++) {
        for (int j = 0; j!=5; j++)
            cout << m[i][j] << '\t';
        cout << '\n';
    }
}
void print_mi5(int m[][5], int dim1){
    for (int i = 0; i!=dim1; i++) {
        for (int j = 0; j!=5; j++)
            cout << m[i][j] << '\t';
        cout << '\n';
    }
}
/*
void print_mij(int m[][], int dim1, int dim2){ // doesn’t behave as most people would think
    for (int i = 0; i!=dim1; i++) {
        for (int j = 0; j!=dim2; j++)
            cout << m[i][j] << '\t'; // surprise!
        cout << '\n';
    }
}
*/
void print_mij(int* m, int dim1, int dim2)
{
    for (int i = 0; i!=dim1; i++) {
        for (int j = 0; j!=dim2; j++)
            cout << m[i*dim2+j] << '\t'; // obscure
        cout << '\n';
    }
}
void test(){
    int v[3][5] = {
        {0,1,2,3,4}, {10,11,12,13,14}, {20,21,22,23,24}
    };
    print_m35(v);
    print_mi5(v,3);
    print_mij(&v[0][0],3,5);
}
void comp(double arg[10]){ // arg is a double*
    for (int i=0; i!=10; ++i)
        arg[i]+=99;
}
void comp2(double* arg)
{
    for (int i=0; i!=10; ++i)
        arg[i]+=99;
}
void f(){
    double a1[10];
    double a2[5];
    double a3[100];
    comp(a1);
    comp(a2); // disaster!
    comp(a3); // uses only the first 10 elements
};
int main(){
    /*
    int bad[3,5]; // error : comma not allowed in constant expression
    */
    int good[3][5]; // 3 arrays with 5 ints each
    /*
    int ouch = good[1,4]; // error : int initialized by int* (good[1,4] means good[4], which is an int*)
    */
    int nice = good[1][4];
    test();
    return 0;
}