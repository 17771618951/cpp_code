#include <iostream>
#include <cctype> //isdigit(ch) isgraphch) isupper(ch)
using namespace std;
int main(){
    char ch;
    cout << "请输入：\n";
    while ((ch = cin.get()) != '@'){
        if (isdigit(ch))
            continue;
        else if (islower(ch)){
            cout << char(ch - 32);
            continue;
        }
        else if (isupper(ch)){
            cout << char(ch + 32);
            continue;
        }
        else cout << ch;
    }
    return 0;
}