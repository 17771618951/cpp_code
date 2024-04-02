#include <iostream>
const int MAX = 10;
int main(){
    using namespace std;
    double donation[10];
    int i = 0; //数组中一共有几个数
    double sum = 0.0; // 数组和
    int total = 0; // 有几个数大于平均值
    while( (cin >> donation[i]) && i < MAX){
        cout << "第" << i+1 << "个数是：" << donation[i] << endl;
        sum += donation[i];
        i++;
    }
    if  (i == 0){
        cout << "数组中没有输入数据!";
        return 0;
    }
    cout << "平均数是：" << sum / (i + 1) << endl;
    for (int j = 0; j < i; ++j){
        if (donation[j] > sum / (i + 1))
            total++;
    }
    cout << "数组中一共有" << total << "个数大于平均值";
    return 0;
}