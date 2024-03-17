#include <iostream>
int main(){
    using namespace std;
    double licheng,youliang;
    cout << "请输入驱车里程（英里）：";
    cin >> licheng;
    cout << "请输入使用汽油量（加仑）：";
    cin >> youliang;
    cout << "汽车耗油量为一加仑的里程：" << licheng / youliang;
    return 0;
}