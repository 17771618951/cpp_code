#include <iostream>
int main(){
    using namespace std;
    double Euro;
    cout << "请输入欧洲风格输入汽车的耗油量：";
    cin >> Euro;
    double jialun,yingli;
    jialun = Euro / 3.785;
    yingli = 62.14;
    cout << "美国风格的耗油量：" << yingli / jialun;
    return 0;
}