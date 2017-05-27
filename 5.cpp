#include <iostream>
#include <cstdlib>
using std::string;
 
using namespace std;
 
int main(){

    char alumnos[10];
    char direccion[10];
    char telefono[10];

    for(int i = 0; i <= 10; i++)
    { 
        cout << "Ingrese el nombre " << i << endl;
        cin >> alumnos[i];
        
        cout << "Ingrese la direccion " << i << endl;
        cin >> direccion[i];
        
        cout << "Ingrese el telefono " << i << endl;
        cin >> telefono[i];
    }
    
   for (int i=0; i<10; i++) {
       cout << "El nombre es: " << alumnos[i] << endl;
    }

   for (int i=0; i<10; i++) {
       cout << "La direccion es: " << direccion[i] << endl;
    }
   
    for (int i=0; i<10; i++) {
       cout << "El telefono es: " << telefono[i] << endl;
    }

    system("pause");
}