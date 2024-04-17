#include <iostream>
#include <stdlib.h>
using namespace std;

class operaciones
{

private:
    int sum;
    int area;
    int area2;

public:
    int perimetro_triangulo(int, int, int);
    int area_cuadrado(int, int);
    int area_trapecio(int, int, int);
};

int operaciones::perimetro_triangulo(int a, int b, int c)
{
    sum = a + b + c;
    return sum;
};

int operaciones::area_cuadrado(int a, int b)
{

    area = a * b;
    return area;
};

int operaciones::area_trapecio(int a, int b, int c)
{

    area = (a + b) * c / 2;
    return area;
};
int main()
{
    operaciones perimetro;
    cout << "el perimetro del triangulo que tiene (50, 20, 25) es:" << perimetro.perimetro_triangulo(50, 20, 25);
    cin.ignore();

    operaciones Area;
    cout << "al area del cuadrado que tiene 35x35 es:" << Area.area_cuadrado(35, 35);
    cin.ignore();

    operaciones Trapecio;
    cout << "al area del trapecio que tiene 20, 20, 40 es:" << Area.area_trapecio(20, 20, 40);
    cin.ignore();
}