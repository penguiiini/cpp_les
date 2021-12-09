#include <iostream>
#include "Point2D.h"

using namespace std;

template <int index>
int fib() {
    if (index <= 2) {
        return 1;
    }
    return fib<index - 1>() + fib<index - 2>();
}

int add(int a, int b) {
    cout << "Consider using float" << endl;
    return a + b;
}

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    /*
    Point2D<int> intPoint(2, 3);
    Point2D<float> floatPoint(1.5, 2.1);
    cout << add(intPoint.x, intPoint.x) << endl;
    cout << add<float>(floatPoint.x, floatPoint.y) << endl;
     */
    int n;
    cin >> n;
    cout << "fib(" << n << ") = " << fib<6> << endl;
}