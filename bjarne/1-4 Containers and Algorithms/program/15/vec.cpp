#include<bits/stdc++.h>
using namespace std;
struct Entry {
    string name;
    int number;
};
ostream& operator<<(ostream& os, const Entry& e){
    return os << "{\"" << e.name << "\", " << e.number << "}";
}
istream& operator>>(istream& is, Entry& e){
// read { "name" , number } pair. Note: for matted with { " " , and }
    char c, c2;
    if (is>>c && c=='{' && is>>c2 && c2=='"') { // star t with a { "
        string name; // the default value of a string is the empty string: ""
        while (is.get(c) && c!='"') // anything before a " is part of the name
            name+=c;
            if (is>>c && c==',') {
                int number = 0;
                if (is>>number>>c && c=='}') { // read the number and a }
                    e = {name ,number}; // assign to the entry
                return is;
            }
        }
    }
    //is.setf(ios_base::failbit); // register the failure in the stream
    return is;
}
void print_book(const vector<Entry>& book){
    for (int i = 0; i!=book.size(); ++i)
        cout << book[i] << '\n';
}
void print_book2(const vector<Entry>& book){
    for (const auto& x : book) // for "auto" see §2.2.2
        cout << x << '\n';
}
void input(vector<Entry>& phone_book)
{
    for (Entry e; cin>>e;)
        phone_book.push_back(e);
}
int main(){
    vector<Entry> phone_book = {
        {"David Hume",123456},
        {"Karl Popper",234567},
        {"Bertrand Ar thur William Russell",345678}
    };
    print_book(phone_book);
    print_book2(phone_book);
    vector<int> v1 = {1, 2, 3, 4}; // size is 4
    vector<string> v2; // size is 0
    //vector<Shape*> v3(23); // size is 23; initial element value: nullptr
    vector<double> v4(32,9.9); // size is 32; initial element value: 9.9
    vector<Entry> book2 = phone_book;
    return 0;
}