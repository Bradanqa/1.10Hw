#include <iostream>
#include <string>

void printHello() {
   std::string name;
   std::cout << "������� ���: ";
   std::cin >> name;
   std::cout << "������������, " << name << "!";
}


int main()
{
   setlocale(LC_ALL, "Russian");
   printHello();
}