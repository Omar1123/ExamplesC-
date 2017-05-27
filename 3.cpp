#include <iostream>
#include <cstdlib>
using std::string;
 
using namespace std;
 
int main(){

    int arreglo1[10];
    int arreglo2[10];
    int arreglo3[10];
    
    int i, j, a, m;
    int *memory;


    for(i = 0; i < 9; i++)
    { 
        cout << "Llenando los datos: " << i+1 << endl;
    }
    
    for(j = 0; j < 9; j++) {
        arreglo2[j] = arreglo1[j] * 2;        
    }
    
    for(a = 0; a < 9; a++) {
        cout << endl;
        cout << "EL valor es: " << arreglo2[a];
    }
    
    cout << endl;
    cout << "Direcciones de memoria" << endl;
    
    for(m = 0; m < 9; m++) {
    
        cout << endl;
        memory = &arreglo2[a];
        cout << "EL valor es: " << memory;
    }    
    
    system("pause");
}