#include <iostream>
#include <string>
#include <cstring>
int main(){
    using namespace std;
    char charr[20]; //声明一个C风格的字符数组
    string str; //C++风格的字符串

    cout << "Length of string in charr before input: "
         << strlen(charr) << endl; //输出charr数组的长度
    cout << "Length of string in str before input: "
         << str.size() << endl;//输出str的长度
    cout << "Enter a line of text:\n";
    cin.getline(charr,20);//读入一行字符串给charr
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin,str);
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;
    return 0;
}