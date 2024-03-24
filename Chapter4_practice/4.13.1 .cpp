#include <iostream>
#include <string>
using namespace std;
int main(){
    string fn;
    string ln;
    int age;
    char grade;

    cout << "What is your first name?";
    getline(cin,fn);

    cout << "What is your last name?";
    getline(cin,ln);

    cout << "What letter grade do you deserve?";
    cin >> grade;

    cout << "What is your age?";
    cin >> age;

    cout << "Name: " << ln << ", " << fn << endl;
    cout << "Grade: " << ++grade << endl;
    cout << "Age: " << age;
    return 0; 
}