#include <iostream>
double besty(int); //besty()函数原型, 传入的参数为int
double pam(int); //pam()函数原型，传入的参数为int
void estimate(int lines, double (*pf)(int)); //estimate()参数原型，
int main(){
    using namespace std;
    int code;
    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here's Besty's estimate:\n";
    estimate(code, besty); //besty表示besty函数的地址
    cout << "Here's Pam's estimate:\n";
    estimate(code, pam); // pam表示pam函数的地址
    return 0;
}
double besty(int lns){
    return 0.05 * lns;
}
double pam(int lns){
    return 0.03 * lns + 0.004 * lns * lns;
}
void estimate(int lines, double (*pf)(int)){ //(*pf)()表示一个函数
    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hours(s)\n";
}
