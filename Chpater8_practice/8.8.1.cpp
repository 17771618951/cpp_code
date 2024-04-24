#include <iostream>
#include <string>
using namespace std;
void printStr(string);
void printStr(string, int);

int main(){
    string str;
    getline(cin,str);
    cout << "调用printStr(string)函数: " << endl;
    printStr(str);//打印str
    cout << "调用printStr(string, int)函数" << endl;
    printStr(str, 5);
    return 0;
}

void printStr(string str){
    cout << str << endl;
}
void printStr(string str, int num){
    for (int i = 0; i < num; ++i)
        printStr(str);
}