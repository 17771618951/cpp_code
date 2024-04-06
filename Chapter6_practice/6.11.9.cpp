#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct user{
    string name;
    double money;
};
int main(){
    ifstream inFile;
    inFile.open("C:\\Users\\94726\\Desktop\\cpp_code\\Working\\scores.txt");
    int i; // 捐献者数目
    inFile >> i; // 注意此时输入队列中仍有一个换行符
    inFile.get();
    int sum = i;
    user *p = new user[i];
    while( i-- ){
        int a = sum - i; // a表示第几个人
        getline(inFile, (p + a - 1)->name);
        inFile >> (p + a - 1)->money;
        inFile.get();
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