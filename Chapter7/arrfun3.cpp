#include <iostream>
const int Max = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);
int main(){
    using namespace std;
    double properties[Max]; // 

    int size = fill_array(properties, Max); //数组的长度
    show_array(properties, size);
    if (size > 0){
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)){
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limit){
    using namespace std;
    double temp;
    int i;
    for ( i = 0; i < limit; i++){
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp; //如果读取的temp不是double类型，cin的标志位为"fail"
        if (!cin){ //如果cin读取到了错误类型的temp
            cin.clear(); //将cin的标志位重新设置为"good"
            while (cin.get()!='\n')
                continue; // 一直读，直到遇到换行符
            cout << "Bad input; input process terminated.\n";
            break;
        }else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n){ //const表示这个函数里不能对数组进行修改
    using namespace std;
    for (int i = 0; i < n; i++){
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n){
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}