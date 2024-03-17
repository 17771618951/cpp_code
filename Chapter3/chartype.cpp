#include <iostream>
int main(){
    using namespace std;
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;//cin将键盘输入的M转换为77；
    cout << "Hola! Thank you for the " << ch << " character." << endl; //cout将值77转换为需要显示的字符M
    return 0;
}