#include <iostream>
int main(){
    using namespace std;
    int chest = 42;//十进制
    int waist = 0x42;//十六进制
    int inseam = 042;//八进制


    //默认情况下，cout以十进制输出
    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";
    return 0;
}