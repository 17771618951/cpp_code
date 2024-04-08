#include <iostream>
char * buildstr(char c, int n);
int main(){
    using namespace std;
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;
    ps = buildstr('+', 20);
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;
    return 0;
}
char * buildstr(char c, int n){
    char * pstr = new char[n+1]; //要创建n个字符的字符串，需要n+1个字符的存储空间，以便存储空值字符
    pstr[n] = '\0';  // 如果不用new创建字符数组，则数组会随着函数的执行结束消失。
    while (n-- > 0)
        pstr[n] = c;
    return pstr;
}