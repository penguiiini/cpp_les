#include <vector>
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

template <unsigned int N>
struct Fib {
    static const unsigned int value = Fib<N - 1>::value + Fib<N - 2>::value;
};

template <>
struct Fib <0> {
    static const unsigned int value = 0;
};

template <>
struct Fib <1> {
    static const unsigned int value = 1;
};

int main() {
    queue<int> q;
    if (q.size() == 0)
        cout << "Стек переполнен" << endl;
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        q.push(n);
    }
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
//    vector<Fib> fibVector;
//    fibVector.push_back(Fib{1});
//    fibVector.push_back(Fib{1});
//    for (int i = 2; i <= 100; i++) {
//        Fib& previous = fibVector.at(i - 1);
//        Fib& preprevious = fibVector.at(i - 2);
//        unsigned int current = previous.value + preprevious.value;
//        fibVector.push_back(Fib{current});
//        cout << "fib(" << i << ") = " << current << endl;
//    cout << "fib(" << 9 << ") = " << Fib<9>::value << endl;
}
