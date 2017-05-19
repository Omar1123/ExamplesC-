#include <iostream>
using namespace std;

int cuenta_vocales(char *);

int main()
{
   char cadena[80];
   cout << "Introduce cadena: ";
   cin.getline(cadena, 80);   
  
   cout << "Numero de vocales: " << cuenta_vocales(cadena) << endl;
   system("pause");
}

int cuenta_vocales(char *s)
{
 int cont=0;
 while(*s) 
 { 
    switch(toupper(*s)) 
     {               
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':  cont++;
     }
     s++;
  }
  return cont;
}