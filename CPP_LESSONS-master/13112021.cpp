//#include <iostream>
//using namespace std;
/*
class D {
public:
    virtual void display () {
        cout << "D" << endl;
    }
};

class C : public D {
    virtual void display () override {
        cout << "C" << endl;
    }
};

class B : public C{
public:
    virtual void display () final { // запрещает потомкам (классу А) использовать сигнатуру display()
        cout << "B" << endl;
    }
};

class A final : public B { // окончательная форма, наследование запрещено (final)
public:
    virtual void display (int i) { // если display (...) будет пустым, то : ошибка, так как такая же сигнатура как пустой вывод запрещена в классе B
        cout << "A" << endl;
    }
};

int main() {
    D d;
    C c;
    B b;
    A a;
    C& b_as_c = b;
    b_as_c.display();
}
*/