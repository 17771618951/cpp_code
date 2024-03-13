#include <iostream>
using namespace std;

void showTime(int, int);//showTime的函数原型

int main(){
    int hour;
    int minute;
    cout << "Enter the number of hours: " << endl;
    cin >> hour;
    cout << "Enter the number of minutes" << endl;
    cin >> minute;
    showTime(hour,minute);
    return 0;
}

void showTime(int hour, int minute){
    cout << "Time: " << hour << ":" << minute;
}
