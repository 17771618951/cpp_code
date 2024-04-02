#include <iostream>
using namespace std;

int main(){
    cout << "Please enter one of the following choices:\n"
         << "c) carnivore p) pianisn\n"
         << "t) tree g) game\n"
         << "f\n";
    char ch;
    cin >> ch;

    while(ch!='c' && ch!='p' && ch!='t' && ch!='g'){
        cout << "Please enter a c, p ,t, or g: ";
        cin >> ch;
    }
    switch(ch){
        case 'c': cout << "A maple is a carnivoce.";
                  break;
        case 'p': cout << "A pianisn is a carnivoce.";
                  break;
        case 't': cout << "A tree is a carnivoce.";
                  break;
        case 'g': cout << "A game is a carnivoce.";
                  break;
        default: break;   
    }
    return 0;
   

}