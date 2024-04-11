#include <iostream>
using namespace std;
const int ArrSize = 10;
double Input(double arr[]);
void show_arr(double arr[], int size);
void average_arr1(double arr[], int size);
int main(){
    double arr[ArrSize];
    double a = Input(arr);
    show_arr(arr, a);
    average_arr1(arr, a);
    return 0;
    
}
double Input(double arr[]){
    int i = 0;
    double size = 0.0;
    cout << "请输入高尔夫成绩(输入非数字退出)：" << endl;
    for(i = 0; i < ArrSize; ++i){
        cin >> arr[i];
        if (!cin){
            size = i;
            break;
        }else{
            cout << "请输入高尔夫成绩(输入非数字退出): " << endl;
            size = i;
        }
    }
    return size;
}

void show_arr(double arr[], int size){
    cout << "数组各个元素分别为：" << endl;
    for (int i = 0; i < size; i++){
        cout << "# "<< i + 1 << " : " << arr[i] << endl;
    }

}
void average_arr1(double arr[], int size){
    double sum = 0;
    cout << "数组的平均数是：" << endl;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    } 
    cout << sum / size;
}