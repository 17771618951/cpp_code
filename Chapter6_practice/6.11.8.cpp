#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream inFile;
    inFile.open("C:\\Users\\94726\\Desktop\\cpp_code\\Working\\scores.txt");
    char ch;
    int sum = 0;
    while(inFile.get(ch) && ch != EOF ){
        cout << ch;
        sum++;
    }
    cout << endl;
    cout << "sum: " << sum;
    return 0;
}