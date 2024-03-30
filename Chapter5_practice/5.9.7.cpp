#include <iostream>
#include <string>
using namespace std;
struct car{
    string maker;
    int year;
}; 

int main(){
    int num_car;
    cout << "请输入有多少辆汽车：";
    cin >> num_car; //注意：cin最后的换行符还在输入缓冲区中，未被读取。
    car *Car = new car[num_car];//new返回的是地址。
    for (int i = 0; i < num_car; ++i){
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the make: ";
        cin.get();
        getline(cin,Car[i].maker);
        cout << "Please enter the year: ";
        cin >> Car[i].year;
    }
    cout << "Here is your collection:" << endl;
    for (int i = 0; i < num_car; ++i)
        cout << Car[i].year << "\t" << Car[i].maker << endl;
    delete[] Car;
    return 0;

}