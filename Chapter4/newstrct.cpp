#include <iostream>

struct inflatable{
    char name[20];
    float volume;
    double price;
};

int main(){
    using namespace std;
    inflatable *ps = new inflatable;
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name,20);//ps表示地址，地址用->
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;//*ps表示结构实体，用.
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << " cubic feet\n";
    cout << "Price: $" << ps->price << endl;
    delete ps;
    return 0;    
}