#include <iostream>
#include <cstring> //提供strcmp()的原型
int main(){
    using namespace std;
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word,"mate"); ch++){ //strcmp如果字符串不同，则返回true;
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}