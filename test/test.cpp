#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int main() {
    int a = 1;
    int b = 2;
    cout <<"a = %d\n" << a << endl;
    cout <<"b = %d\n" << b << endl;

    int c = add(a, b);
    cout << "%d + %d = %d\n" << a << b << c << endl;
    return 0;
}
