#include<bits/stdc++.h>
using namespace std;
namespace My_code {
    class complex{

    };
    complex sqrt(complex);
    int main();
}
// error karena belum didefine pada namespace
// int My_code::main(){
//     complex z {1,2};
//     auto z2 = sqrt(z);
//     cout<<'{'<<z2.real()<<','<<z2.imag()<<"}\n";
// }
int My_code::main(){
    cout<<"Hello World!"<<endl;
    return 0;
}
int main(){
    return My_code::main();
}