#include <iostream>
using namespace std;
long double probability(unsigned, unsigned);
int main(){
    double a, b, c;
    cout << "Enter the number of choices on the game card:";
    cin >> a;
    cout << "Enter the number of picks allowed in 1 field number:";
    cin >> b;
    cout << "Enter the number of choices on the game card in 2 field number:";
    cin >> c;
    while (cin){ //a, b, c都读的是整数。
        if (b <= a){
            long double chance;
            chance = probability(a, b) * c;
            cout << "You have one chance in " << chance << " of wining.\n\n";
            cout << "Enter the number of choices on the game card:";
            cin >> a;
            cout << "Enter the number of picks allowed in 1 field number:";
            cin >> b;
            cout << "Enter the number of choices on the game card in 2 field number:";
            cin >> c;
            if(!cin)
                break;
        }else break;
    }
    cout << "Bye!\n";
    return 0;
}


long double probability(unsigned numbers, unsigned picks){ //从number个数字里面选对picks个
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--){
        result = result * n / p;
    }
    return result;
}