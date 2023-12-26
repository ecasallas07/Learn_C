#include <iostream>

using namespace std;

int main()
{
    //cambiar el valor de las variables

    int a = 1;
    int b = 2;

    int temp = a;
    a = b;
    b = temp;

    cout<< a << " " << b << endl;
    return 0;
}