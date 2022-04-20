#include<bits/stdc++.h>
using namespace std;
void do_work(){
    cout<<"hello world"<<endl;
    for(int i=0;i<10;i++)
        cout<<i<<endl;
}
int main(){
    using namespace std::chrono; // see §35.2
    auto t0 = high_resolution_clock::now();
    do_work();
    auto t1 = high_resolution_clock::now();
    cout << duration_cast<milliseconds>(t1-t0).count() << "msec\n";
    return 0;
}