#include <iostream>

using namespace std;

int main()
{
    //constante
    const double PI = 3.14;
    int radius{};

    cout<<"Enter the radius of the circle"<<'\n';
    cin>> radius;

    int area = PI * (radius^2);
   cout<<"The area of circle is: "<<area;
   return 0;

}