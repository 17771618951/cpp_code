#include <iostream>
double cube(double a);
double refcube(double &ra);
int main(){
    using namespace std;
    double x = 3.0;

    cout << cube(x); // 此处传递的是值
    cout << " = cube of " << x << endl;
    cout << refcube(x); // 此处传递的是引用x
    cout << " = cube of " << x << endl;
    return 0;
}
double cube(double a){
    a *= a * a;
    return a;
}

double refcube(double &ra){
    ra *= ra * ra;
    return ra;
}