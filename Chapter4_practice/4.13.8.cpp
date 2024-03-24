#include <iostream>
#include <string>
using namespace std;

struct Pizza{
    string name;
    double d;
    double weight;
};
int main(){
    Pizza *pizza = new Pizza;

    
    cout << "Please enter the d of pizza:";
    cin >> pizza->d;
    cout << "Please enter the name of pizza:";
    getline(cin,pizza->name);
    cout << "Please enter the weight of pizza:";
    cin >> pizza->weight;

    cout << pizza->name << endl;
    cout << pizza->d << endl;
    cout << pizza->weight << endl;
    return 0;
}