#include <iostream>
using namespace std;
int main(){
    char *mon[12] = {"一月","二月","三月","四月",
                    "五月","六月","七月","八月",
                    "九月","十月","十一月","十二月",};
    int sell[12];
    for (int i = 0; i < 12; ++i){
        cout << "请输入" << mon[i] << "份的图书销售量: ";
        cin >> sell[i];
    }
    int sum = 0;
    for (int i = 0; i < 12; ++i){
        cout << "第" << mon[i] << "的图书销售量为：" << sell[i] << endl;
        sum += sell[i];
    }
    cout << "总图书的销售量为：" << sum;
    return 0;
}