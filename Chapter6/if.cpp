#include <iostream>
using namespace std;
int main(){
    using std::cin;
    using std::cout;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while(ch != '.'){
        if(ch == ' ')
            ++spaces;
        total++;
        cin.get(ch);//注意：回车符号也能被cin.get()读进来
    }
    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";
    return 0;
}