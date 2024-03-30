#include <iostream>
#include <array>
using namespace std;
const int ArSize = 101;
int main(){
    array<long double, ArSize> Arr;
    Arr[0] = Arr[1] = 1;
    for (int i = 2; i <= 100; ++i){
        Arr[i] = Arr[i-1] * i;
    }
    cout << "100! = " << Arr[100];
    return 0;

}