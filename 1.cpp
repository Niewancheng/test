#include <iostream>
#include <vector>
#include <windows.h>  // 用于设置控制台编码

using namespace std;

int main() {
    // 设置控制台输出为 UTF-8
    SetConsoleOutputCP(CP_UTF8);

    vector<int> numbers = {10, 20, 30};

    // 使用迭代器访问元素
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << "怎么了" << endl;

    // 等待用户输入以防止窗口闪退
    cin.get();

    return 0;
}
