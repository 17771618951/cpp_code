#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
    int yy = 0;
    int fy = 0;
    int others = 0;
    char ch;
    string str;
    cout << "Enter words (q to quit):" << endl;
    while(cin >> str && str != "q"){
        if(isalpha(str[0])){
            if(str[0] == 'a' || str[0] == 'e' ||str[0] == 'i' ||str[0] == 'o' ||str[0] == 'u'
               || str[0] == 'A' || str[0] == 'E' ||str[0] == 'I' ||str[0] == 'O' ||str[0] == 'U') yy++;
            else fy++;
        }else others++;
    }

    cout << yy << " words beginning with vowels" << endl;
    cout << fy << " words beginning with consonants" << endl;
    cout << others << " others";
    return 0;
}