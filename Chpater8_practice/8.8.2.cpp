#include <iostream>
#define DEFAULT_BRAND  (char*)"Millennium Munch" //将字符串常量转换为char*类型
struct CandyBar{
    char *brand;
    double weight;
    int hot;
};
using namespace std;
void setCandyBar(CandyBar &a, char *b = DEFAULT_BRAND, double c = 2.85, int d = 35);
void ShowCandyBar(const CandyBar &);

int main(){
    CandyBar a;
    CandyBar b;
    setCandyBar(a, (char *)"gaotianci", 33.3, 65);// "gaotianci"是const char类型
    ShowCandyBar(a);

    setCandyBar(b);
    ShowCandyBar(b);
    return 0;
}

void setCandyBar(CandyBar &a, char *b, double c, int d){
    a.brand = b;
    a.weight = c;
    a.hot = d;
}

void ShowCandyBar(const CandyBar &candybar){
    cout << candybar.brand << endl;
    cout << candybar.weight << endl;
    cout << candybar.hot << endl;
}
