#include <iostream>
#include <string>
using namespace std;
struct CandyBar{
    string brand;
    double weight;
    int kll;
};
int main(){
    CandyBar candy = {"Mocha Munch", 2.3, 350};
    cout << candy.brand << endl;
    cout << candy.weight << endl;
    cout << candy.kll << endl;
    return 0;
}
