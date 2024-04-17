#include <iostream>
#include <fstream> //读写文件
#include <cstdlib>
using namespace std;
void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;
int main(){
    ofstream fout; //output写文件，fout是一个ofstream对象，但是ofstream继承自基类ostream
    const char *fn = "C:\\Users\\94726\\Desktop\\cpp_code\\Working\\ep-data.txt";
    fout.open(fn);
    if (!fout.is_open()){ // 如果文件没有被打开
        cout << "Can't open " << fn << ". Bye.\n";
        exit(EXIT_FAILURE);
    }
    double objective;
    cout << "Enter the focal length of your "
            "telescope objective in mm: ";
    cin >> objective;
    double eps[LIMIT];
    cout << "Enter the focal lengths, in mm, of " << LIMIT  
         << " eyepieces:\n";
    for (int i = 0; i < LIMIT; i++){
        cout << "Eyepiece #" << i + 1 << ": ";
        cin >> eps[i];
    }
    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);
    cout << "Done\n";
    return 0;
}
void file_it(ostream & os, double fo, const double fe[], int n){
    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed);//将os对象置于使用定点表示法的模式
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm\n";
    os.setf(ios::showpoint); //将os对象置于显示小数点的模式，即使小数部分为零
    os.precision(1);//制定os对象使用几位小数
    os.width(12);//设置下一次输出操作使用的字段宽度
    os << "magnification" << endl;
    for (int i = 0; i < n; i++){
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << endl;
    }
    os.setf(initial);
}