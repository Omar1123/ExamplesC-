// Example program
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int numero;
    int *pnumero;
    
    pnumero = &numero;
    
    cout<<"Numero : "<<endl;
    cin>>numero;
    cout << "Numero ingresado por referencia : " << *pnumero << endl;    
    cout << "Direccion de memoria : " << &pnumero << endl;
    
    return 0;
}