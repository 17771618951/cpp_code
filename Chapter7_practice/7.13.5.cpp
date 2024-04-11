#include <iostream>
using namespace std;
int jiecheng(int);
int main(){
    int N;
    cout << "请输入一个整数：";
    cin >> N;
    cout << N << "的阶乘为：" << jiecheng(N);
    return 0;

}
int jiecheng(int n){
    if (n == 0) return 1;
    else return n * jiecheng(n-1);
}