#include<bits/stdc++.h>
using namespace std;
struct Entry {
    string name;
    int number;
};
list<Entry> phone_book = {
    {"David Hume",123456},
    {"Karl Popper",234567},
    {"Bertrand Arthur William Russell",345678}
};
int get_number1(const string& s){
    for (const auto& x : phone_book)
        if (x.name==s)
            return x.number;
    return 0; // use 0 to represent "number not found"
}
int get_number2(const string& s){
    for (auto p = phone_book.begin(); p!=phone_book.end(); ++p)
        if (p->name==s)
            return p->number;
    return 0; // use 0 to represent "number not found"
}
void f(const Entry& ee, list<Entry>::iterator p, list<Entry>::iterator q){
    phone_book.insert(p,ee); // add ee before the element referred to by p
    phone_book.erase(q); // remove the element referred to by q
}
int main(){
    const Entry ee = {"Wolly Po", 812};
    //f(ee, phone_book.begin(), phone_book.end());
    cout<<get_number1("Karl Popper")<<endl;
    cout<<get_number2("Bertrand Arthur William Russell")<<endl;
    return 0;
}