#include<iostream>
using namespace std;

struct Person{
    string name;
    int age;
    float salary;
};


int main(){

    Person p;

    cin >> p.name;
    cin >> p.age;
    cin >> p.salary;

    cout << p.name << "\n";
    cout << p.age << "\n";
    cout << p.salary << "\n";


    return 0;
}