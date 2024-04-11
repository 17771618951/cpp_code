#include <iostream>
using namespace std;
const int Arr_size = 10;
double *Fill_array(double *ar, int length);
void Show_array(double *ar, double *end);
void Reverse_array(double *ar, double *end);

int main(){ 
    double arr[Arr_size];
    double *end= Fill_array(arr, Arr_size);

    Show_array(arr, end);
    cout << endl;
    Reverse_array(arr, end);
    Show_array(arr, end);
    cout << endl;
    Reverse_array(arr + 1, end - 2);
    Show_array(arr, end);
    cout << endl;
    return 0;
}

double *Fill_array(double *ar, int length){
    double value;
    int i = 0;
    for (i = 0; i < length; i++){
        cout << "请输入插入数组的第" << i + 1 << "个值: ";
        cin >> value;
        if (!cin) break;
        ar[i] = value;
    }
    return ar + i;
}

void Show_array(double *ar, double *end){
    for (ar; ar < end; ar = ar + 1)
        cout << *ar << endl;
}
void Reverse_array(double *ar, double *end){
    double temp;
    for (ar,end; ar < end; ar++, end--){
        temp = *ar;
        *ar = *(end - 1);
        *(end - 1) = temp;
    }
}
