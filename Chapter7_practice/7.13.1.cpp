#include <iostream>
using namespace std;
double th(double, double);
int main(){
    double a, b;
    cout << "Please enter the int number a and b(0 to quit): ";
    while(cin >> a >> b && a != 0 && b != 0){
        cout << th(a, b) << endl;
        cout << "Please enter the int number a and b(0 to quit): ";
    }
    return 0;
}

double th(double a, double b){
    return 2.0 * a * b / (a + b);
}