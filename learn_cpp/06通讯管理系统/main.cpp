#include<iostream>
#include<string>
using namespace std;
#define MAX 1000

struct Person {
    string m_Name;
    int m_Gender;
    int m_Age;
    string m_Phone;
    string m_Addr;
};
struct Addressbooks {
    struct Person personArray[MAX];
    int m_Size;
};

void pause() {
    cout << "按回车键继续..." << endl;
    cin.ignore();  
    cin.get();    
}

void clearScreen() {
    cout << "\033[2J\033[1;1H"; 
}

void addPerson(Addressbooks *abs) {
    if (abs->m_Size == MAX) {
        cout << "通讯录已经满了，无法添加!" << endl;
        return;
    }

    cout << "请输入姓名: ";
    cin >> abs->personArray[abs->m_Size].m_Name;

    cout << "请输入性别 (1--男, 2--女): ";
    int gender;
    while (cin >> gender && (gender != 1 && gender != 2)) {
        cout << "输入有误，请重新输入: ";
    }
    abs->personArray[abs->m_Size].m_Gender = gender;

    cout << "请输入年龄: ";
    cin >> abs->personArray[abs->m_Size].m_Age;

    cout << "请输入电话: ";
    cin >> abs->personArray[abs->m_Size].m_Phone;

    cout << "请输入住址: ";
    cin >> abs->personArray[abs->m_Size].m_Addr;

    abs->m_Size++;  

    cout << "添加联系人成功!" << endl;
}


void showPerson(Addressbooks *abs) {
    if(abs->m_Size == 0) {
        cout << "当前记录为空" << endl;
    }
    else {
        for(int i =0;i < abs->m_Size;i++){
            cout << "姓名：" << abs->personArray[i].m_Name << "\t";
            cout << "性别：" << (abs->personArray[i].m_Gender == 1? "男" : "女") << "\t";
            cout << "年龄：" << abs->personArray[i].m_Age << "\t";
            cout << "电话：" << abs->personArray[i].m_Phone << "\t";
            cout << "住址：" << abs->personArray[i].m_Addr << endl;
        }
    }
    pause();
    clearScreen();
}

int isExist(Addressbooks * abs , string name) {
    for(int i = 0;i < abs->m_Size; i++) {
        if (abs->personArray[i].m_Name == name) {
            return i;
        }
    }
    return -1;
}

void deletePerson(Addressbooks * abs) {
    cout << "请输入你要删除的联系人" << endl;

    string name;
    cin >> name;

    int ret = isExist(abs , name);

    if(ret != -1) {
            for(int i = ret;i < abs->m_Size; i++) {
                abs->personArray[i] = abs->personArray[i+1];
            }
            abs->m_Size--;
            cout << "delete success" << endl;
    }
    else {
            cout << "查无一人" << endl;
    }

    pause();
    clearScreen();
}

void findPerson(Addressbooks * abs) {
    cout << "请输入你想查找的联系人" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs , name);

    if(ret !=  -1) {
            cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
            cout << "性别：" << (abs->personArray[ret].m_Gender == 1? "男" : "女") << "\t";
            cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
            cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
            cout << "住址：" << abs->personArray[ret].m_Addr << endl;
    } 
    else {
        cout << "查无此人" << endl;
    }
    pause();
    clearScreen();
}

void modifyPerson(Addressbooks * abs) {
    cout << "你要修改的联系人" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs , name);

    if(ret != -1) {
        string name;
        cout << "请输入姓名:" << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;

        cout << "请输入性别:" << endl;
        cout << "1 -- 男" << endl;
        cout << "2 -- 女" << endl;
        int gender = 0;


        while(true) {
        cin >> gender;
        if(gender == 1 | gender == 2) {
            abs->personArray[ret].m_Gender = gender;
            break;
            }
            cout << "输入有误" << endl;
        }

        cout << "请输入年龄:" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[ret].m_Age = age;

        cout << "请输入手机号:" << endl;
        string phone;
        cin >> phone;
        abs->personArray[ret].m_Phone = phone;

        cout << "请输入住址:" << endl;
        string address;
        cin >> address;
        abs->personArray[ret].m_Addr = address;

        cout << "修改成功" << endl; 
    }
    else {
        cout << "查无此人" << endl;
    }

    pause();
    clearScreen();
}

void clearPerson(Addressbooks * abs) {
    abs->m_Size = 0;
    cout << "通讯录已经清空" << endl;
    pause();
    clearScreen();
}

void showMenu() {
    cout << "*****  1.添加联系人  *****" << endl;
    cout << "*****  2.显示联系人  *****" << endl;
    cout << "*****  3.删除联系人  *****" << endl;
    cout << "*****  4.查找联系人  *****" << endl;
    cout << "*****  5.修改联系人  *****" << endl;
    cout << "*****  6.清空联系人  *****" << endl;
    cout << "*****  0.退出通讯录  *****" << endl;
}




int main() {

    struct Addressbooks abs;
    abs.m_Size = 0;

    int select = 0;
    
    while(true) {

   

    showMenu();

    cout << "按任意键继续..." << endl;
    cin >> select;

    switch (select) {
        case 1:
        addPerson(&abs);
            break;
        case 2:
        showPerson(&abs);
            break;
        case 3:
        deletePerson(&abs);
            break;
        case 4:
        findPerson(&abs);
            break;
        case 5:
        modifyPerson(&abs);
            break;
        case 6:
        clearPerson(&abs);
            break;
        case 0:
            cout << "欢迎下次使用" <<endl;
            system("read -p '按任意键继续...' var");
            return 0;
            break;
        default:
            break;
    } 

  }
    return 0;
}
