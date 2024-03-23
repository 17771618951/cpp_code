#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    char animal[20] = "bear";
    const char  *bird = "wren";//const表示bird的地址无法改变
    char *ps;

    cout << animal << " and ";
    cout << bird << "\n";

    cout << "Enter a kind of animal: ";
    cin >> animal;

    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl; //由于animal是字符串，所以要通过强制转换来打印animal的地址
    cout << ps << " at " << (int *)ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    delete [] ps;
    return 0;
}