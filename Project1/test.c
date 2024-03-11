#include <stdio.h>
#include "max.h"//引用自己的头文件
int main(){
    int a = 10;
    int b = 30;
    int c = Max(a,b);
    printf("%d\n",c);
    return 0;
}