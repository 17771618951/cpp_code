#include <iostream> 
using namespace std;
void fun1(); //fun1的函数原型,函数原型之余函数相当于变量声明之余变量。
void fun2(); //fun2的函数原型

int main(){
    fun1();
    fun1();
    fun2();
    fun2();
    return 0;
}

void fun1(){
    cout << "Three blind mice" << endl;
}
void fun2(){
    cout << "See how they run" << endl;
}