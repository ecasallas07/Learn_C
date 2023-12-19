#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

int main()
{
    float weight{0};
    float height = 0;

    float result{};

    cout<<"Ingrese por favor su peso en KG:"<<'\n';
    cin>>weight;

    cout<<"Ingrese su altura en metros: "<<'\n';
    cin>>height;

    //pow() --> sirve para exponencial en 2, que seria como height* height
    result = weight / pow(height,2);

    // setprecision(4) cantidad de decimales a los cuales se aproxima
    cout<<"El IMC es: "<< setprecision(3)<<result<<"kg.m";



    return 0;
}