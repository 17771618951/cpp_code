#include <iostream>
using namespace std;
int main(){
    double sum_a = 100;
    double sum_b = 100;
    int i = 0;
    do{
        sum_a += 10;
        sum_b = sum_b * 1.05;
        i++;
        cout << "第" << i << "年后a一共有：" << sum_a << endl;
        cout << "第" << i << "年后b一共有：" << sum_b << endl;
    }while(sum_a >= sum_b);
    cout << "a的总额为：" << sum_a << endl;
    cout << "b的总额为：" << sum_b << endl;
    cout << "一共" << i << "年";
    return 0;

}