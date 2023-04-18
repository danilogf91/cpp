#include <iostream>
#include <string.h>

int main ()
{

  setlocale (LC_ALL, "es_ES.UTF-8");
  bool x = false;
  bool y = false;
  bool z = true;
  bool a = false;
  bool b = false;
  bool c = true;

  if((x == true || y == true || z == true) && a == true)
    std::cout << "Hoy no puedo ir a trabajar, estoy enfermo " << '\n';
  else if ( ( x == true || y == true || z == true ) && b == true )
    std::cout << "Hoy no puedo ir a trabajar, estoy de mudanza " << '\n';
  else if ( ( x == true || y == true || z == true ) && c == true )
    std::cout << "Me ha tocado la quiniela. Dile al jefe que c$@$#/~S " << '\n';
  else
    std::cout << "Hoy tengo que ir a trabajar, me he quedado sin disculpas " << '\n';
      
  return 0;
}