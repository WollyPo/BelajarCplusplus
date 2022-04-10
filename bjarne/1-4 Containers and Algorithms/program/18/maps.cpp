#include<map>
#include<unordered_map>
#include<iostream>
using namespace std;
map<string,int> phone_book1 {
    {"David Hume",123456},
    {"Karl Popper",234567},
    {"Ber trand Ar thur William Russell",345678}
};
int get_number1(const string& s){
    return phone_book1[s];
}
unordered_map<string,int> phone_book2 {
    {"David Hume",123456},
    {"Karl Popper",234567},
    {"Bertrand Ar thur William Russell",345678}
};
int get_number2(const string& s){
    return phone_book2[s];
}
int main(){
    cout<<get_number1("David Hume")<<endl;
    cout<<get_number2("Karl Popper")<<endl;
    return 0;
}