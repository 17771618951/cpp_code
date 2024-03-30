#include <iostream>
int main(){
    using namespace std;
    int a,b;
    cout << "请输入较小的整数：";
    cin >> a;
    cout << "请输入较大的整数：";
    cin >> b;
    int sum = 0;
    for (int i = a; i <=b; ++i)
        sum += i;
    cout << a << "到" << b << "之间的整数和为：" << sum;
    return 0;

}