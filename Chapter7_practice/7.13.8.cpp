#include <iostream>
using namespace std;

const char *season[] = {"Spring", "Summer", "Autumn", "Winter"};
int main(){
    double arr[4];
    for (int i = 0; i < 4; ++i){
        cout << "请输入" << season[i] << "的花费：";
        cin >> arr[i];
        if(!cin){
            cout << "Bye!";
            break;
        }
    }
    for (int i = 0; i < 4; ++i){
        cout << season[i] << ": $" << arr[i] << endl;
    }

    return 0;

}