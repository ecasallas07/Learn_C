#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a{20};
    float b(10);
    // operaciones sencillas
    cout<<a+b<< '\n';

    //operaciones de adicion de si misma
    a+=10; // 20 + 10;
    cout<<a<<'\n';    

    //operacion de resta
    a-= 5;
    cout<<b<<'\n';
    //operacion de multiplicacion
    b*=5;
    cout<<b<<'\n';

    return 0;
}