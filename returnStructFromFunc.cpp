#include<iostream>
#include<string>
using namespace std;

struct Person{
    string name;
    int age;
    float salary;
};

Person getData();
void displayData(const Person&);

int main(){

    Person p = getData();
    displayData(p);

    return 0;
}

Person getData(){
    Person p;

    string name;
    int age;
    float salary;

    getline(cin,name);
    cin >> age;
    cin >> salary;

    return Person{name,age,salary};
}

void displayData(const Person& p){
    cout << p.name << "\n";
    cout << p.age << "\n";
    cout << p.salary << "\n";
}

