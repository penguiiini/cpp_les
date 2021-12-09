#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int n1, n2, n3;
    if (a % 2 == 0)
        n1 = a / 2;
    else
        n1 = a / 2 + 1;
    if (b % 2 == 0)
        n1 = b / 2;
    else
        n1 = b / 2 + 1;
    if (c % 2 == 0)
        n1 = c / 2;
    else
        n1 = c / 2 + 1;
    cout << a + b + c << endl;
}