#include <iostream>
#include <string>
using namespace std;
struct CandyBar{
    string brand;
    double weight;
    int kll;
};
int main(){
    CandyBar arr[3] = {{"aaa", 3.4 ,144}, {"bbb", 5.4, 123}, {"ccc", 6.4, 234}};
    cout << arr[0].brand << endl;
    cout << arr[0].weight << endl;
    cout << arr[0].kll << endl;
    
    cout << (arr + 1)->brand << endl;
    cout << (arr + 1)->weight << endl;
    cout << (arr + 1)->kll << endl;

    CandyBar *demo = arr;
    cout << (demo + 2)->brand << endl;
    cout << (demo + 2)->weight << endl;
    cout << (demo + 2)->kll << endl;

    return 0;
}