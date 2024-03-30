#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char word[50];
    int sum = 0;
    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> word;

    while(strcmp(word,"done")){ //c风格比较字符串的方式 
        sum ++;
        cin >> word;
    }
    cout << "You entered a total of " << sum << " words.";
    return 0;

}