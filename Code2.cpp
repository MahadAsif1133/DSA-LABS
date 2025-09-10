#include <iostream>
#include <string>
using namespace std;
//function
int findSubstring(const string&text,const string& pattern) {
    if (pattern.empty()) 
    return 0;
    for (int i=0; i<= text.size()-pattern.size(); i++) {
        if (text.substr(i, pattern.size())==pattern) 
        return i;
    }
    return -1;
}
int main() { //this is main funcyion
    cout << findSubstring("hello world", "hello")<<endl; 
    cout << findSubstring("hello world", "world")<<endl; 
    cout << findSubstring("hello world", "abc")<<endl;   
    cout << findSubstring("hello world", "")<<endl;      
}
