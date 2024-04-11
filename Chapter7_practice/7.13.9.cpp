#include <iostream>
#include <string> //getline()
using namespace std;
const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main(){
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n){
    int i = 0;
    for(i = 0; i < n; ++i){
        cout << "Please enter the fullname:";
        cin.getline(pa[i].fullname,SLEN);
        cout << "Please enter the hobby:";
        cin.getline(pa[i].hobby,SLEN);
        cout << "Please enter the ooplevel:";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}
void display1(student st){
    cout << "Here is display1 function:" << endl;
    cout << st.fullname << endl;
    cout << st.hobby << endl;
    cout << st.ooplevel << endl;

}
void display2(const student * ps){
    cout << "Here is display2 function:" << endl;
    cout << ps->fullname << endl;
    cout << ps->hobby << endl;
    cout << ps->ooplevel << endl;
}
void display3(const student pa[], int n){
    for (int i = 0; i < n; ++i){
        cout << pa[i].fullname << endl;
        cout << pa[i].hobby << endl;
        cout << pa[i].ooplevel << endl;
    }

}