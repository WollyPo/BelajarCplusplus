#include<string>
#include<iostream>
using namespace std;
string compose(const string& name, const string& domain){
    return name + '@' + domain;
}
void m2(string& s1, string& s2){
    s1 = s1 + '\n'; // append newline
    s2 += '\n'; // append newline
    cout<<s1<<s2;
}
string name = "Niels Stroustrup";
void m3(){
    string s = name.substr(6,10); // s = "Stroustr up"
    name.replace(0,5,"nicholas"); // name becomes "nicholas Stroustrup"
    name[0] = toupper(name[0]); // name becomes "Nicholas Stroustrup"
    cout<<name<<endl;
}
string incantation;
void respond(const string& answer)
{
    if (answer == incantation) {
        // perfor m magic
    }
    else if (answer == "yes") {
        // ...
    }
    // ...
}
int main(){
    auto addr = compose("dmr","bell-labs.com");
    cout<<addr<<endl;
    string a = "hello", b = "world";
    m2(a, b);
    m3();
    return 0;
}