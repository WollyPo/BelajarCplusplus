#include<bits/stdc++.h>
using namespace std;
int main(){
    regex pat (R"(\w{2}\s*\d{5}(-\d{4})?)"); // ZIP code pattern: XXddddd-dddd and var iants
    //cout << "pattern: " << pat << '\n';
    int lineno = 0;
    for (string line; getline(cin,line);) { // read into line buffer
        ++lineno;
        smatch matches; //matched strings go here
        if (regex_search(line ,matches,pat)) // search for pat in line
            cout << lineno << ": " << matches[0] << '\n';
    }
    return 0;
}