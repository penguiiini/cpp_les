#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char buf[30];
    cout << sizeof(buf) << endl;
    int res = snprintf(buf, sizeof(buf), "I have %d apples and %d oranges", 2, 5);
    string str = "error!";
    cout << res << endl;
    if (res >= 0 && res < sizeof(buf))
    {
        str = buf;
    }
    cout << str << endl;
}

// Домашнее задание: get() и getline()
//int main()
//{
//    char ch1 = 'f';
//    char ch2 = '\n';
//
//    char a;
//    while ((a = std::cin.get()) != '\n')
//    {
//        std::cout << a << std::endl;
//    }
//}

//void square(int&, int&);
//
//void print(int*, int*);

//int main()
//{
//    int nums[] =  {1, 2, 3, 4, 5};
//    int *begin = std::begin(nums);
//    int *end = std::end(nums);
//    int n = sizeof(nums) / sizeof(nums[0]);
//    print(begin, end);
//}
//
//void print(int *begin, int *end)
//{
//    for (int *ptr = begin; ptr != end; ++ptr)
//    {
//        std::cout << *ptr << '\n';
//    }
//}

//int main()
//{
//    const int n = 5;
//    int a = 4, b = 5;
//    std::cout << "BEFORE a = " << a << " b = " << b << std::endl;
//    square(a,b);
//    std::cout << "AFTER a = " << a << " b = " << b << std::endl;
//}
//
//void square(int &a, int &b)
//{
//    a *= a;
//    b *= b;
//    std::cout << "SQUARE a = " << a << " b = " << b << std::endl;
//}

/*
    for (int *ptr = a; ptr <= &a[4]; ptr++)
    {
        std::cout << "Address = " << ptr << "\tValue = " << *ptr << std::endl;
    }
*/