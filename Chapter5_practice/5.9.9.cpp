#include <iostream>
#include <string>
using namespace std;
int main(){
    string word;
    int sum = 0;
    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> word;

    while(word!="done"){ //c++风格的字符串比较方式
        sum ++;
        cin >> word;
    }
    cout << "You entered a total of " << sum << " words.";
    return 0;
}