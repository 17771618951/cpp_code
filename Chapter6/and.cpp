#include <iostream>
const int ArSize = 6;
int main(){
    using namespace std;
    float naaq[ArSize];
    cout << "Enter the NAAQs (New Age Awareness Quotients) "
         << "of\nyour neighbors. Program terminates "
         << "when you make\n" << ArSize << " entries "
         << "or enter a negative value.\n";
    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while (i < ArSize && temp >= 0){ //不仅要满足size不超过数组大小，还要满足值为正数，因此用一个temp暂存值
        naaq[i] = temp;
        ++i;
        if (i < ArSize){
            cout << "Next value: ";
            cin >> temp;
        }
    }
    if (i == 0) //第一个值为负数
        cout << "No data--bye\n";
    else{ 
        cout << "Enter your NAAQ: "; //输入需要比较的数
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++)
            if (naaq[j] > you)
                ++count;
        cout << count;
        cout << " of your neighbors have greater awareness of\n"
             << "the New Age than you do.\n";
    }
    return 0;
}