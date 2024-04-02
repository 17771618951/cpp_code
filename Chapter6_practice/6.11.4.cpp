#include <iostream>
const int strsize = 50;

struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main(){
    using namespace std;
    bop BOP[3] = {
        {"aaa", "bbb", "ccc", 0},
        {"ddd", "eee", "fff", 1},
        {"ggg", "hhh", "iii", 2}
    };
    char ch;
    cout << "Benevolent Order of Programmers Report\n"
         << "a. display by name\t" << "b. display by title\t\n"
         << "c. display by bopname\t" << "d. display by preference\n"
         << "q. quit\n";
    cout << "Enter your choice: ";
    cin >> ch;
    while (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd' && ch != 'q'){
        cout << "没有这个选项，请重新输入：";
        cin >> ch;
    }
    while (ch != 'q'){
        switch (ch){
            case 'a': cout << BOP[0].fullname << endl << BOP[1].fullname << endl << BOP[2].fullname << endl;
                      break;
            case 'b': cout << BOP[0].title << endl << BOP[1].title << endl << BOP[2].title << endl;
                      break;
            case 'c': cout << BOP[0].bopname << endl << BOP[1].bopname << endl << BOP[2].bopname << endl;
                      break;
            case 'd': cout << BOP[0].fullname << endl << BOP[1].title << endl << BOP[2].bopname << endl;
                      break;
            default : cout << "没有这个选项，请重新输入: \n";
                      break;
        }
        cout << "Next choice: ";
        cin >> ch;
    }
    cout << "Bye!";
    return 0;
     
}