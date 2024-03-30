#include <iostream>
#include<ctime> //声明了clock()函数，和clock_t类
int main(){
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;//delay表示延时的时间
    cout << "starting\a\n";
    clock_t start = clock();
    while(clock()-start < delay);
    cout << "done \a\n";
    return 0;
}