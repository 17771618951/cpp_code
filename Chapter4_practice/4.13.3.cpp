#include <iostream>
#include <cstring>
const int ArrSize = 20;
int main(){
    using namespace std;
    char ming[ArrSize];
    char xing[ArrSize];

    cout << "Enter your first name: ";
    cin.getline(ming,ArrSize);
    cout << "Enter your last name: ";
    cin.getline(xing,ArrSize);

    char *name = new char[strlen(ming)+strlen(xing) + 5];//在堆里申请
    strcpy(name,ming);
    strcat(name,", ");
    strcat(name,xing);
    cout << "Here's the information in sing string: " << name;
    delete[] name;
    return 0;
}