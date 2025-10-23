#include<iostream>
using namespace std;

struct Person{
    string name;
    int age;
    float salary;
}

Person getData();
void displayData(const Person&);

int main(){

    return 0;
}

Person getData(){
    Person p;

    string name;
    int age;
    float salary;

    cin >> name;
    cin >> age;
    cin >> salary;

    return Person{name,age,salary};
}

