#include <iostream>

using namespace std;

int main()
{

    cout<< "Ingrese el primer numero: " << '\n';
    int num1{},num2{};
    cin>> num1;

    cout<< "Ingrese el segundo numero: " << '\n';
    cin>>num2;

    // major number for be the first in the operation
    int less{num1 < num2 ? num2 - num1 : num1 - num2};
    cout<<"El resultado de la suma es: " << num1+num2 << '\n' << "El resultado de la resta es: " << less;



}