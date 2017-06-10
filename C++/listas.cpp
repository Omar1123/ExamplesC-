// Example program
#include <iostream>
#include <cstdlib>

using namespace std;

int ingresar();
int mostrar();
int consulta();
void menu();

struct maquinas
{
 int codigo;
 char nombre[5];
 char usuario[30];
 int hora;
};

maquinas cafe[4];

int i;

int consulta()
{
   int codigo;
   cout<<"Ingrese codigo de maquina a consultar" << endl;
   cin >> codigo;
   for (int a=0; a<i; a++)
   {
    if (codigo==cafe[a].codigo)
        {
            cout<<"Codigo = "<<cafe[a].codigo<<endl;
            cout<<"Nombre = "<<cafe[a].nombre<<endl;
            cout<<"Nombre = "<<cafe[a].usuario<<endl;
            cout<<"Hora =   "<<cafe[a].hora<<endl;
        }
    }
   return 0;
}


int ingresar()
{
  cout<<"ingrese el codigo de maquina : "<<endl;
  cin>>cafe[i].codigo;
  cout<<"ingrese el usuario de la maquina : "<<endl;
  cin>>cafe[i].usuario;
  cout<<"ingrese el nombre de maquina : "<<endl;
  cin>>cafe[i].nombre;
  cout<<"Ingrese la hora : "<<endl;
  cin>>cafe[i].hora;
  i++;
  return 0;
}

int mostrar()
{
  for (int a=0; a<i; a++)
  {
   cout<<"Valores de la maquina numero : "<<a<<endl;
   cout<<"Codigo = "<<cafe[a].codigo<<endl;
   cout<<"Codigo = "<<cafe[a].nombre<<endl;
   cout<<"Nombre = "<<cafe[a].usuario<<endl;
   cout<<"Hora =   "<<cafe[a].hora<<endl;
  }
  return 0;
}

void menu()
{
  int op;
  cout<<"1. Asignacion de Maquina"<<endl;
  cout<<"2. Reporte de Maquinas en Uso"<<endl;
  cout<<"3. Consulta de Maquinas"<<endl;
  cout<<"4. Salir"<<endl;
  cin>>op;
  if (op==1)
  {
   ingresar();
   menu();
  }
  else if(op==2)
  {
   mostrar();
   menu();
  }
  else if (op==3)
  {
   consulta();
   menu();
  }
}

int main()
{
    menu();
    return 0;
}