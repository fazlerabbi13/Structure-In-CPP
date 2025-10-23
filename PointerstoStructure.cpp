#include<iostream>
#include<string>
using namespace std;

struct Distance{
    int feet;
    float inch;
};


int main(){

    Distance d;
    Distance* ptr = &d;

    // cin >> (*ptr).feet;
    cin >> ptr->feet;
    // cin >> (*ptr).inch;
    cin >> ptr->inch;
    
    // cout << (*ptr).feet << "feet " << (*ptr).inch << "inch";
    cout << ptr->feet << " feet " << ptr->inch << " inch ";

    return 0;
}