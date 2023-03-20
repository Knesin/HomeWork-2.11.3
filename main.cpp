#include <iostream>
#include <string>
#include "Leaver.h"

int main()
{
    system("chcp 1251");
    Leaver lvr;
    std::string s;
    std::cout << "Введите имя: ";
    std::cin >> s;
    std::cout << lvr.leave(s) << std::endl;
}