// Example program
#include <iostream>
#include <string>
using std::string;
 
using namespace std;

struct Person {
	int id;
    char name[30];
    char lastName[30];    
};

int main()
{
    Person person[2];
    Person *apuntador;
    apuntador = person;
    
    
    cout << "Estructuras por referencia y por valor" << endl;
    for(int i=0; i<2; i++) {        
        
        cout << "Ingrese el numero de carnet" << endl;
        cin >> person[i].id;
        
        cout << "Ingrese el nombre del alumno" << endl;
        cin >> person[i].name;
        
        cout << "Ingrese el nombre del apellido" << endl;
        cin >> person[i].lastName;
    }  

    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;

    for(int i=0; i<2; i++) {     
        cout << "Carnet" << person[i].id << endl;
        cout << "Nombre" << person[i].name << endl;
        cout << "Apellido" << person[i].lastName << endl;                
    }   
    
    cout << &apuntador << endl;
    
    cout << apuntador->id << endl;
    cout << apuntador->name << endl;
    cout << apuntador->lastName << endl;
    apuntador = apuntador + 1;
    cout << apuntador->id << endl;
    cout << apuntador->name << endl;
    cout << apuntador->lastName << endl;
    
    cout << &apuntador << endl;
    
}

