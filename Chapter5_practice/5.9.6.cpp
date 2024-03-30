#include <iostream>
#include <string>
using namespace std;
const int Year = 3;
const int Mon = 12;

int main(){
    string mon[12] = {"January","February","March","April","May","June",
                    "July","August","September","October","November","December"};
    int sell[Year][Mon];
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 12; ++j){
            cout << "请输入第"<< i+1 << "年" << mon[j] << "月份的销售量: ";
            cin >> sell[i][j];
        }
    }

    for(int i = 0; i < 12; ++i)
        cout << "\t" << mon[i] << "\t";

    for (int i = 0; i < 3; ++i){
        cout << "第" << i+1 << "年各月的销售量：";
        for (int j = 0; j < 12; ++j){
            cout << sell[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;


}