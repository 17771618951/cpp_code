#include <iostream>
int main(){
    using namespace std;
    char ch = 'M'; // ch实际上是一个整数
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch); //通过ostream的类对象cout使用其成员函数put().
    cout.put('!');
    cout << endl << "Done" << endl;
    return 0; 
}