#include <iostream>
int main(){
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while(cin.fail() == false){ //使用EOF结束while循环，“Ctrl+Z+回车”
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
}