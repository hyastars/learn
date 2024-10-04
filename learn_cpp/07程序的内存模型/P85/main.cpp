#include<iostream>
using namespace std;

void pause() {
    cout << "按回车键继续..." << endl;
    cin.ignore();  
    cin.get();    
}

void clearScreen() {
    cout << "\033[2J\033[1;1H"; 
}
int g_a = 10;
int g_b = 20;

const int c_g_a = 10;
const int c_g_b = 20;

int main() {
    int a = 10;
    int b = 20;

    cout << "局部变量a的地址: " << (long)&a << endl;
    cout << "局部变量b的地址: " << (long)&b << endl;

    cout << "全局变量a的地址: " << (long)&g_a << endl;
    cout << "全部变量b的地址: " << (long)&g_b << endl;

    static int s_a = 10;
    static int s_b = 20;
    cout << "全局变量a的地址: " << (long)&s_a << endl;
    cout << "全部变量b的地址: " << (long)&s_b << endl;

    cout << "字符串常量的地址：" << (long)&"hello world" << endl;

    cout << "全局变量 c_g_a的地址为：" << (long)&c_g_a << endl; 
    cout << "全局变量 c_g_b的地址为：" << (long)&c_g_b << endl; 

    pause();
    clearScreen();
}