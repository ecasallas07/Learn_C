#include <iostream>

using namespace std; // de esta forma  no   debo volver  a escribir std cerca del cout o cin 

int main()
{
    int edad  = 20; //Esta variables se puede sobreescribir
    cout<<edad<<endl;

    //renombrar variables
    edad = 21;
    cout<<edad;

    return 0;
}