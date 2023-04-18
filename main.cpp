#include <iostream>

int main ()
{

  int x{8};
  int y{8};
  std::cout << x << ' ' << y << '\n';
  std::cout << ++x << ' ' << --y << '\n'; // prefijo
  std::cout << x << ' ' << y << '\n';   
  std::cout << x++ << ' ' << y-- << '\n'; // postfijo
  std::cout << x << ' ' << y << '\n';   
  
  return 0;
}