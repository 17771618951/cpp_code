#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Please enter a Celsius value: " << endl;
    cin >> age;
    cout << age << " degrees Celsius is "<< 1.8 * age + 32.0 <<" degrees Fahrenheit." << endl;
    return 0;
}