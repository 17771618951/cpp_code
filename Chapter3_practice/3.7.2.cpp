#include <iostream>
using namespace std;
const int Feet_inches = 12; //一英尺等于12英寸
const float Inches_meter = 0.0254;
const float Kg_pound = 2.2;

int main(){
    float feets, inches, pounds;
    cout << "Please enter your height(feets and inches):";
    cin >> feets >> inches;
    cout << "Please enter your weight(pounds):";
    cin >> pounds;

    float total_inches, meter, kg, BMI;
    total_inches = feets * Feet_inches + inches;
    meter = total_inches * Inches_meter; //身高
    kg = pounds * Kg_pound; //体重
    BMI = kg / (meter * meter);
    cout << "Your BMI is " << BMI << endl;
    return 0;

}