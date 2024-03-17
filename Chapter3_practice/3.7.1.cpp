#include <iostream>
int main(){
    using namespace std;
    const int Factor = 12;
    int height;
    cout << "请输入自己的身高：___\b\b\b";
    cin >> height;
    cout << "你的身高是 " << height / Factor << " 英尺 " << height % Factor << " 英寸" << endl;
    
    return 0; 
}