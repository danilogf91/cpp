#include <iostream>
#include <string.h>

int main ()
{
  std::cout << "escribe tu nombre y primer apellido: ";
  std::string nombre{};
  std::getline(std::cin >> std::ws, nombre);

  std::cout << "Escribe tu edad: ";
  std::string edad{};
  std::getline(std::cin >> std::ws, edad);
  

  std::cout << "Tu nombre es " << nombre << " y tu edad es " << edad << '\n';
}