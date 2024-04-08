#include <iostream>
#include <array> //array适合定长的数组，代价是不安全和不方便
#include <string>
const int Seasons = 4;
const std::array<std::string, Seasons> Snames = {
    "Spring", "Summer", "Fall", "Winter"
};
void fill(std::array<double, Seasons> *pa);
void show(std::array<double, Seasons> da);
int main(){
    std::array<double, Seasons> expense; //创建一个expense对象
    fill(&expense); //传递expnese的地址给fill函数
    show(expense); //传递一个expense副本给show函数
    return 0;
}
void fill(std::array <double, Seasons> * pa){
    using namespace std;
    for (int i = 0; i < Seasons; i++){
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i]; //(*pa)表示 expense对象
    }
}
void show(std::array<double, Seasons> da){ //接受expense副本
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++){
        cout << "Sname[i]" << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expense: $" << total << endl;
}
