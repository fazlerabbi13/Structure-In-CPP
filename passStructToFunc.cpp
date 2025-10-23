#include<iostream>
#include <string>
using namespace std;

struct Person
{
    string name;
    int age;
    float salary;
};

void displayData(const Person&);

int main(){
    Person p {"Rabbi",22,80000};

    displayData(p);

    return 0;
}

void displayData(const Person& p){
    cout << p.name << "\n";
    cout << p.age << "\n";
    cout << p.salary << "\n";
}