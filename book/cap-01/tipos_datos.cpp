#include <iostream>

using namespace std;

int main()
{
    //enetero = integer
    int x{5}; // inicializo variable --> mejor en seguridad y consistencia
    int b =5 ; // inicializacion con copia 
    int z(10); // inicializacion directa


    // float
    float a{5.098234234}; // float para grandes conjuntos de datos


    //double --> para mayor precision, como en calculos cientificos o financieros
    double pi(3.15); // ocupa mas espacio en memoria 


    //char
    char letter('a'); //comillas simples para char
    string word = "Hello world"; // comillas dobles para string


    // boolean
    bool y(true);
    bool yes = true;

    //constantes
    const int CONSTANT(200);
    const string WORD = "I can all";
    cout<<WORD;

    return 0;
}