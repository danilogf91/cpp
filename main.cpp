#include <iostream>
int main()
{ // bloque 1, nivel de anidamiento 1
    std::cout << "Escribe un entero: ";
    int valor{};
    std::cin >> valor;

    if (valor > 0)
    { // bloque 2, nivel de anidamiento 2
        if ((valor % 2) == 0)
        { // bloque 3, nivel de anidamiento 3
            std::cout << valor << " es positivo y par\n";
        }
        else
        { // bloque 4, también anidado a nivel 3
            std::cout << valor << " es positivo e impar\n";
        }
    }

    return 0;
}
