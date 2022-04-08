#include<bits/stdc++.h>
using namespace std;
struct Entry {
    string name;
    int number;
};
void silly(vector<Entry>& book)
{
    int i = book[book.size()].number; // book.size() is out of range
    // ...
}
template<typename T>
class Vec : public std::vector<T> {
    public:
        using vector<T>::vector; // use the constructors from vector (under the name Vec); see §20.3.5.1
        T& operator[](int i) // range check
        { return vector<T>::at(i); }
        const T& operator[](int i) const // range check const objects; §3.2.1.1
        { return vector<T>::at(i); }
};
void checked(Vec<Entry>& book){
    try {
        book[book.size()] = {"Joe",999999}; // will throw an exception
        // ...
    }
    catch (out_of_range) {
        cout << "range error\n";
    }
}
int main(){
    cout<<"Hello World!"<<endl;
    Vec<Entry> hi = {{"Wolly", 1}, {"Pika", 2}};
    try {
        // your code
        checked(hi);
    }
    catch (out_of_range) {
        cerr << "range error\n";
    }
    catch (...) {
        cerr << "unknown exception thrown\n";
    }
    return 0;
}