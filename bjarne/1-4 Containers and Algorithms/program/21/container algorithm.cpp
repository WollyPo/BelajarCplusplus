#include<bits/stdc++.h>
namespace Estd{
    using namespace std;
    template<class C>
    void sort(C& c){
        sort(c.begin(),c.end());
    }
    template<class C, class Pred>
    void sort(C& c, Pred p){
        sort(c.begin(),c.end(),p);
    }
}
int main(){
    std::vector<int> a;
    for(int i=10;i>=1;i--)
        a.push_back(i);
    Estd::sort(a);
    for(int i=0;i<a.size();i++)
        std::cout<<a[i]<<std::endl;
    return 0;
}