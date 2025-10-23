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
    cout << p.name << "\n";


    return 0;
}