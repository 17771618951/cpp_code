#include <string>
#include <iostream>
int main(){
    using namespace std;
    string fn,ln;
    cout << "Enter your first name: ";
    getline(cin,fn);
    cout << "Enter your last name: ";
    getline(cin,ln);
    
    ln = ln + ", " + fn;
    cout << "Here's the information in a sing string: " << ln;
    return 0;
}