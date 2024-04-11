#include <iostream>
using namespace std;
struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show_box(const box);
void set_box(box *);


int main(){
    box BOX = {"gaotianci", 10, 20, 30}; //BOX为结构体，因此用.
    show_box(BOX);
    set_box(&BOX);
    cout <<"New box volume: " << BOX.volume << endl;
    return 0;
}
void show_box(const box BOX){
    cout << "maker: " << BOX.maker << endl;
    cout << "height: " << BOX.height << endl;
    cout << "width: " << BOX.width << endl;
    cout << "length: " << BOX.length << endl;
    cout << "volume: " << BOX.volume << endl;
}
void set_box(box *BOX){//BOX为指向box结构体的指针，因此用->
    BOX->volume = BOX->height * BOX->length * BOX->width;
}