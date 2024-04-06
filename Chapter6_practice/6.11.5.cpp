#include <iostream>
using namespace std;
void tax(double);
int main(){
    double money;
    cout << "请输入您的所得收入：";
    while(cin >> money && money >= 0){
         tax(money);
         cout << "请输入您的所得收入：";
    }
    return 0;
}

void tax(double money){
    if (money <= 5000) cout << "所得税为：" << 0 << endl;
    else if (money <= 15000) cout << "所得税为：" << (money - 5000) * 0.1 << endl;
    else if (money <= 35000) cout << "所得税为：" << 1000 + 0.15 * (money - 15000) << endl;
    else cout << "所得税为：" << 1000 + 20000 * 0.15 + (money - 35000) * 0.2 << endl;
}
