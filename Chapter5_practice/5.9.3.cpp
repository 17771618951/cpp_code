#include <iostream>
using namespace std;
int main(){
    long long sum = 0;
    long long num;
    while (num != 0){
        cout << "请输入一个数字：";
        cin >> num;
        if(num == 0)
            break;
        sum += num;
        cout << "到目前为止，您输入的数字和为：" << sum << endl;;
    }
    return 0;
}