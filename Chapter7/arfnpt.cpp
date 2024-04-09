#include <iostream>
const double * f1(const double ar[], int n); 
const double * f2(const double [], int); //在函数原型中，ar[]可以省略表示符简化为[]
const double * f3(const double *, int); //在函数原型中，*ar可以省略表示符简化为*

int main(){
    using namespace std;
    double av[3] = {1112.3, 1542.6, 2227.9};
    const double *(*p1)(const double *, int) = f1; // p1 = f1()的地址
    auto p2 = f2; // p2 = f2()的地址
    cout << "Using pointers to functions:\n";
    cout << "Address Value\n";
    cout << (*p1)(av,3) << ": " << *(*p1)(av, 3) << endl; //(*p1)(av,3)表示指针，*(*p1)(av, 3)表示值
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl; //*p2与p2等价
    
    const double *(*pa[3])(const double *, int) = {f1, f2, f3}; //声明一个指针数组
    auto pb = pa;
    cout << "\nUsing an array of pointers to functions:\n";
    for (int i = 0; i < 3; i++)
        cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
        cout << "\nUsing a pointer to a pointer to a function:\n";
        cout << "Address Value\n";
        auto pc = &pa;
        cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
        const double *(*(*pd)[3])(const double *, int) = &pa;
        const double *pdb = (*pd)[1](av, 3);
        cout << pdb << ": " << *pdb << endl;
        cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
        return 0;
}
const double * f1(const double * ar, int n){
    return ar;
}
const double * f2(const double ar[], int n){
    return ar + 1;
}
const double * f3(const double ar[], int n){
    return ar + 2;
}
