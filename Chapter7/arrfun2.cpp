#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);
int main(){
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    std::cout << cookies << " = array address, ";
    std::cout << sizeof(cookies) << " = sizeof cookies\n"; //sizeof(cookies)表示整个数组的长度

    int sum = sum_arr(cookies, ArSize);
    std::cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, 3);
    std::cout << "First three eatens ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, 4);
    std::cout << "Last four eatens ate " << sum << " cookies.\n";
    return 0;
}

int sum_arr(int arr[], int n){
    int total = 0;
    std::cout << arr << " = arr, ";
    std::cout << sizeof(arr) << " = sizeof arr\n"; //sizeof(arr)表示指针的长度
    for (int i = 0; i < n; i++ )
        total = total + arr[i];
    return total;
}