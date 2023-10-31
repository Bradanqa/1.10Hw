#include <iostream>
#include <string>

void printHello() {
   std::string name;
   std::cout << "Введите имя: ";
   std::cin >> name;
   std::cout << "Здравствуйте, " << name << "!";
}


int main()
{
   setlocale(LC_ALL, "Russian");
   printHello();
}