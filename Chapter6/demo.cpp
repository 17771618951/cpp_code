
#include <iostream>
#include <string>
#include <unistd.h>
 
int main() {
    char currentPath[FILENAME_MAX];
    if (getcwd(currentPath, sizeof(currentPath)) != NULL) {
        std::cout << "Current working directory: " << currentPath << std::endl;
    } else {
        perror("getcwd() error");
        return 1;
    }
    return 0;
}