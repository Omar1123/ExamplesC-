#include <iostream>
using namespace std;

int main()
{
    int a=0; 
    int *puntero; 
    puntero = &a; 

    cout << "Ingrese el valor numerico: " << endl;
    cin >> a;

    cout << "La direccion de memoria es: " << puntero << endl;

    return 0;
}