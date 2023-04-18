#include <iostream>

int main ()
{
  constexpr double gravedad { 9.8 };  // correcto, el valor de 9.8 puede ser resuleto en tiempo de compilacion
  constexpr int suma { 2+3 }; // correcto, el valor de 2+3 puede ser resuleto en tiempo de compilacion

  std::cout << "Escribe tu edad: ";
  int edad {};
  std::cin >> edad;
  
  constexpr int suEdad { edad }; // error de compilacion: edad es una constante rutime, no una constante en tiempo de compilacion


  // literales simbolicas con numero magicos
  int aforoMax { salas * 30 };
  setMax (30);

  // literales simbolicas con el uso de macros
#define MAX_AFORO_POR_SALA 30
  int aforoMax { salas * MAX_AFORO_POR_SALA };

  // Es mejor practiva usar constexpr que macros por depuracion
  constexpr int maxAforoPorSala { 30 };
  constexpr int maxNumLetrasNombre { 30 };

  return 0;
}