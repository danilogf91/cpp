#include <iostream>
#include <cstdint> // para std::int_fast64_t

// nota: exp no puede ser negativo

std::int_fast64_t powint (int base, int exp)
{
  std::int_fast64_t result{1};
  while (exp)
  {
    if ( exp & 1 )
      result *= base;
    exp >>= 1;
    base *= base;
  }

  return result;

}

int main ()
{

  std::cout << "Escribe un entero: " << '\n';
  int x{};
  std::cin >> x;

  std::cout << "Escribe otro entero: " << '\n';
  int y{};
  std::cin >> y;

  std::cout << "El resto es: " << x % y << '\n';

  if ( ( x % y ) )
    std::cout << "es uniformemente divisible por  " << y << '\n';
  else
    std::cout << "no es uniformemente divisible por  " << y << '\n';

  std::cout << powint (7, 2);

  return 0;
}