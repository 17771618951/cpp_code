#include <iostream>
#include <string>
using namespace std;

struct CandyBar{
    string brand;
    double candy_weight;
    int candy_calorie;
};

int main(){
    CandyBar *snack = new CandyBar[3];//snack是一个指向CandyBar[3]的指针。

    snack[0] = {"aaa", 1.1, 230};
    snack[1] = {"bbb", 2.2, 456};
    snack[2] = {"ccc", 3.3, 567};

    cout << "The first candy:" << endl;
    cout << "Brand: " << snack[0].brand << endl;
    cout << "Candy_weight: " << snack[0].candy_weight << endl;
    cout << "Candy_calorie: " << snack[0].candy_calorie << endl;

    cout << "\nThe second candy:" << endl;
    cout << "Brand: " << snack[1].brand << endl;
    cout << "Candy_weight: " << snack[1].candy_weight << endl;
    cout << "Candy_calorie: " << snack[1].candy_calorie << endl;

    cout << "\nThe third candy:" << endl;
    cout << "Brand: " << snack[2].brand << endl;
    cout << "Candy_weight: " << snack[2].candy_weight << endl;
    cout << "Candy_calorie: " << snack[2].candy_calorie << endl;
    delete[] snack;//前面使用了new CandyBar[]

    return 0;

}