#include <iostream>
#include <cctype>

void if_char_is_num()
{
    char symb;
    std::cin >> symb;
    if (symb >= '0' && symb <= '9')
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}

void upper()
{
    char str1;
    std::cin >> str1;
    std::cout << char(std::toupper(str1));
}

void c_reg()
{
    std::string c;
    std::cin >> c;
    char c1;
    c1 = c[0];
    if (static_cast<int>(c1) < 0 || static_cast<int>(c1) > 127)
        std::cout << c << std::endl;
    else {
        if (c.length() == 1) {
            if (std::islower(c1))
                std::cout << char(std::toupper(c1));
            else
            {
                std::cout << char(std::tolower(c1));
            }
        } else {
            std::cout << "Вы ввели больше одного символа, введите новый символ: ";
            c_reg();
        }
    }
}

void spaces()
{
    short spaces;
    std::string text;
    std::cout << "Введите строку: ";
    std::cin.ignore();
    getline(std::cin, text);
    for (char i : text)
    {
        if (i == ' ')
            spaces++;
    }
    std::cout << spaces + 1 << std::endl;
}

void palindrom()
{
    std::string palindrom;
    bool flag = true;
    std::cout << "Введите строку: " << std::endl;
    std::cin >> palindrom;
    for (int i = 0; i < palindrom.length() / 2; i++)
    {
        if (palindrom[i] != palindrom[palindrom.length() - i - 1])
           flag = false;
    }
    if (flag)
        std::cout << "Эта строка - палиндром" << std::endl;
    else
        std::cout << "Эта строка - не палиндром" << std::endl;
}

void words()
{
    auto* m = new std::string[10];
    std::cout << "Введите строку, в которой хотите найти самое длинное слово" << std::endl;
    std::string words;
    unsigned short max_lenght = 0;
    std::cin.ignore();
    getline(std::cin, words);
    char *rr = new char[15];
    for (char i: words)
    {
        
    }
}