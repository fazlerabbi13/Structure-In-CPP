#include<iostream>
using namespace std;

struct Person{
    string name;
    int age;
    float salary;


    void displayInfo(){
        cout << name << "\n";
        cout << age << "\n";
        cout << salary << "\n";
    }
};

int main(){
    Person p;

    cin >> p.name;
    cin >> p.age;
    cin >> p.salary;

    
    return 0;
}