#include <iostream>
#include <string> //c++读取string用getline(cin,string)方法
using namespace std;
int main(){
    string name, dessert;

    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin,dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}