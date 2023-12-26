#include <iostream> //utilizar el contenido de la biblioteca, esta nos permite leer y escirbir 
//<iostream> biblioteca estandar de C++
int main()
{
    std::cout<<"Hello, World!!" << " Concatenar" << "con los simbolos (<<)";
    return 0; //debe retornar algo siempre, el programa envia un valor al SO de que si se ejecuto correctamente o no
}

int greeting()
{
    int x;
    std::cout << "Enter a number for calculate the value" << '\n';
    std::cin >> x;

    int reult = x + 5;
    std::cout << reult << std::endl;
    return 0;
}