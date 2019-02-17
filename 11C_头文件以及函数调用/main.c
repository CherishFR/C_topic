#include "func.h"


int k = 5;  // 外部变量有效范围：从定义的位置到文件末尾
int main() {
    int a = 10;
    printstar(a);
    printmsg();
    printmsg();
    return 0;
}