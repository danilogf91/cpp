#include <bitset>
#include <iostream>

int main ()
{
  int x { 12 };
  std::cout << x << '\n';                     // decimal predeterminado
  std::cout << std::hex << x << '\n';         // hexadecimal
  std::cout << std::oct << x << '\n';         // octal
  std::cout << std::dec << x << '\n';         // vuelve a decimal
  std::cout << x << '\n';                     // decimal  

  // std::bitset<8> significa que queremos almacenar 8 bits
  std::bitset<8> bin1{ 0b1100'0101};  // literal binario para binario 1100 0101
  std::bitset<8> bin2{ 0xC5}; // literal hexadecimal para binario 1100 0101

  std::cout << bin1 << ' ' << bin2 << '\n';
  std::cout << std::bitset<4>{0b1010} << '\n'; // podemos imprimir desde std::bitset directamente

  return 0;
}