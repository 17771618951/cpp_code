#include <iostream>
#include <string>
using namespace std;
struct user{
    string name;
    double money;
};
int main(){
    int i; // 捐献者数目
    cout << "请输入捐献者数目：";
    cin >> i; // 注意此时输入队列中仍有一个换行符
    cin.get();
    int sum = i;
    user *p = new user[i];
    while( i-- ){
        int a = sum - i; // a表示第几个人
        cout << "请输入第" << a << "个捐献者信息：" << endl;
        cout << "姓名：";
        getline(cin, (p + a - 1)->name);
        cout << "捐献额：";
        cin >> (p + a - 1)->money;
        cin.get();
    }

    cout << "Grand Patrons: " << endl;

    int tag = 0;

    for(int j = 0; j < sum; j++){
        if((p+j)->money > 10000){
            cout << "姓名：" << (p+j)->name << "\t" << "捐献额：" << (p+j)->money << "\t" << endl;
            tag = 1;
        }
    }
    if (tag == 0) cout << "None"; 
    delete [] p;
    return 0;

}