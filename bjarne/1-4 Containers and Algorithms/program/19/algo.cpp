#include<bits/stdc++.h>
using namespace std;
struct Entry {
    string name;
    int number;
};
bool operator<(const Entry& x, const Entry& y){ // less than
    return x.name<y.name; // order Entrys by their names
}
void f(vector<Entry>& vec, list<Entry>& lst){
    sort(vec.begin(),vec.end()); // use < for order
    unique_copy(vec.begin(),vec.end(),lst.begin()); // don’t copy adjacent equal elements
}
list<Entry> f(vector<Entry>& vec){
    list<Entry> res;
    sort(vec.begin(),vec.end());
    unique_copy(vec.begin(),vec.end(),back_inserter(res)); // append to res
    return res;
}
int main(){
    vector<Entry>phone_book {
        {"David Hume",123456},
        {"Karl Popper",234567},
        {"Bertrand Arthur William Russell",345678}
    };
    list<Entry> x;
    f(phone_book,x);
    list<Entry> y = f(phone_book);
    for(auto a:x){
        cout<<a.name<<' '<<a.number<<endl;
    }
    for(auto a:y){
        cout<<a.name<<' '<<a.number<<endl;
    }
    return 0;
}