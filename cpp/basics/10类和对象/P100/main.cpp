#include<iostream>
using namespace std;

class Person {
    public:
        string m_Name;
    protected:
        string m_Car;
    private:
        int m_Password;
    public:
        void func() {
            m_Name = "miku";
            m_Car = "benchi";
            m_Password = 123456;
        }
}

int main() {
    Person p;
    p.m_Name = "tianyi";
    func();
}