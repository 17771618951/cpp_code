#include <iostream>
int main(){
    using namespace std;
    int auks, bats, coots;

    auks = 19.99 + 11.99; //首先将11.99与11.99相加得到31.98，再转换为整型31。

    bats = (int)19.99 + (int)11.99;//将19.99转换为整型19，将11.99转换为整型11，再相加得到30
    coots = int(19.99) + int(11.99);
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ",coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;
    return 0;
}