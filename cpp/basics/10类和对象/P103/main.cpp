#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        void setName(string name) {
            m_Name = name;
        }

        string getName() {
            return m_Name;
        }

        int getAge() {
            return m_Age;
        }

        void setIdoi(string name) {
            m_Idoi = Idoi;
        }
    private:
        string m_Name;
        int m_Age = 18;
        string m_Idoi;
};

int main() {
    Person P;
    p.setName("miku");
    cout << "name is " << getName() << endl;
    cout << "age is " << getAge() << endl;
    p.setIdoi("miku");
    return 0;
 }