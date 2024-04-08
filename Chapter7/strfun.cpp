#include <iostream>
unsigned int c_in_str(const char *str, char ch); //使用const表示该函数不会修改原字符串
int main(){
    using namespace std;
    char mmm[15] = "minimum";
    char *wail = "ululate";
    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    return 0;
}

unsigned int c_in_str(const char *str, char ch){
    unsigned int count = 0;
    while (*str){ // *str表示字符数组第一个字母
        if (*str == ch)
            count++;
        str++;
    }
    return count;
}
 