#include "Gun.h"
#include <iostream>
using namespace std;

void Gun::addBullet(int bullet_num) {
    this->_bullet_count += bullet_num;
}

bool Gun::shoot() {
    if (this->_bullet_count <= 0) {
        cout << "没有子弹了！" << endl;
        return false;
    }

    this->_bullet_count -= 1;
    cout << "射击成功！" << endl;
    return true;
}
