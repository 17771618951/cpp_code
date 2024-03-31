#include <iostream>
const char * qualify[4] = //一个指针数组，数组每个元素=字符串首个字符的地址
{
    "10,000-meter race.\n",
    "mud tug-of-war.\n",
    "masters canoe joursting.\n",
    "pie-throwing festival.\n"
};
int main(){
    using namespace std;
    int age;
    cout << "Enter your age in years: ";
    cin >> age;
    int index;

    if (age > 17 && age < 35)
        index = 0;
    else if (age >= 35 && age < 50)
        index = 1;
    else if (age >=50 && age < 65)
        index = 2;
    else
        index = 3;
    cout << "You qualify for the " << qualify[index]; //虽然qualify[index]表示字符串首个字母的地址，但是cout函数会打印其指向的值。
    return 0;
}