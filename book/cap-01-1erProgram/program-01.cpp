#include <iostream>


using namespace std;

int main()
{
    //declare variables
    int num{ }; // initialized variables in value 0
    cout<< "Ingrese el numero por favor:"<< '\n';
    cin>> num;

    int result = num * 2;

    // haciendo uso de expresiones recorta codigo
    int doublenum{num*2};
    //-----------------
    int triplenum {num*3};

    cout<< "El doble de " << num<<" es: "<<result << '\n' <<" El triple de " << num <<" es: "<<triplenum<<endl;
    
    return 0;
}
