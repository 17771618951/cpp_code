#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE  = 60;
int main(){
    using namespace std;
    char filename[SIZE] = "C:\\Users\\94726\\Desktop\\cpp_code\\Working\\scores.txt"; //使用绝对路径
    ifstream inFile;
    inFile.open(filename);
    if (!inFile.is_open()){
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;
    while (inFile.good()){
        ++count;
        sum += value;
        inFile >> value;
    }
    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else 
        cout << "Input terminated for unkown reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else{
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close();
    return 0;
}