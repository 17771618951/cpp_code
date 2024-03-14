#include <iostream>
using namespace std;
int main(){
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;//cout转为十六进制输出标准(修改cout的输出格式)
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;//cout转为八进制输出标准(修改cout的输出格式)
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    return 0;
}