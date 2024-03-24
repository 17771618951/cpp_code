#include <iostream>
#include <array>
int main(){
    using namespace std;
    array<double,3> chengji;
    cin >> chengji[0];
    cin >> chengji[1];
    cin >> chengji[2];
    cout << (chengji[0] + chengji[1] + chengji[2]) / 3.0;
    return 0;
}