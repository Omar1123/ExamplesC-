// Example program
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char palabra[20];
    char *ppalabra;
    
    ppalabra =  palabra;
    
    cout<< "Ingrese Palabra "<<endl;
    cin >> palabra;
    
    while (*ppalabra) {
    cout<<*ppalabra<<endl;
    ppalabra++;
    }
}