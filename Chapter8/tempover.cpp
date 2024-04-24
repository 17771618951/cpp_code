#include <iostream>

template <typename T>
void ShowArray(T arr[], int n); //arr里存储的都是T类型数据

template <typename T>
void ShowArray(T *arr[], int n); //arr里存储的都是指向T类型数据的指针

struct debts{
    char name[50];
    double amount;
};

int main(){
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    debts mr_E[3] = {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount; //pd数组里的元素保存的是指向double类型的指针

    cout << "Listing Mr: E's debts:\n";
    ShowArray(things, 6);
    cout << "Listing Mr. E's debts:\n";
    ShowArray(pd, 3);
    return 0;   
}

template <typename T>
void ShowArray(T arr[], int n){
    using namespace std;
    cout << "template A\n";
    for (int i = 0; i < n; i++) 
        cout << arr[i] << ' ';
    cout << endl;
}

template <typename T>
void ShowArray(T *arr[], int n){
    using namespace std;
    cout << "template B\n";
    for (int i = 0; i < n; i++)
        cout << *arr[i] << ' ';
    cout << endl;
}