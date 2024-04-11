#include <iostream>
using namespace std;
const int Arr_size = 10;
int Fill_array(double *ar, int length);
void Show_array(double *ar, int length);
void Reverse_array(double *ar, int length);

int main(){ 
    double arr[Arr_size];
    int size = Fill_array(arr, Arr_size);
    cout << "size = " << size << endl;
    Show_array(arr, size);
    cout << endl;
    Reverse_array(arr, size);
    Show_array(arr, size);
    cout << endl;
    Reverse_array(arr + 1, size - 2);
    Show_array(arr, size);
    cout << endl;
    return 0;
}

int Fill_array(double *ar, int length){
    double value;
    int i = 0;
    for (i = 0; i < length; i++){
        cout << "请输入插入数组的第" << i + 1 << "个值: ";
        cin >> value;
        if (!cin) break;
        ar[i] = value;
    }
    return i;
}

void Show_array(double *ar, int length){
    for (int i = 0; i < length; ++i)
        cout << "#" << i + 1 << ": " << ar[i] << endl;
}
void Reverse_array(double *ar, int length){
    double temp;
    int i = 0;
    int j = length - 1;
    for (i,j; i < j; i++, j--){
        temp = ar[j];
        ar[j] = ar[i];
        ar[i] = temp;
    }
}
