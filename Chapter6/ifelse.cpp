#include <iostream>
int main(){
    char ch;

    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.'){
        if (ch == '\n')
            std::cout << ch;
        else
            std::cout << ch+1;//char的范围小，int的范围大，将ch强转换为int了
        std::cin.get(ch);
    }
    std::cout << "\nPlease excuse the slight confusion.\n";
    return 0;
}