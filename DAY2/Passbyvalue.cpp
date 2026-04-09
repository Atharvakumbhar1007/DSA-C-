// Pass By Value
#include<iostream>
using namespace std;

void changeValue(int x) {
    x = 50;
}

int main() {
    int a = 10;
    changeValue(a);
    cout << a;
}