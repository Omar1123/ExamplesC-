#include <iostream>
using namespace std;

void concatena(char *, char *);

int main ()
{
   char cadena[100],cadena2[25];
   cout << "Escriba la cadena  ";
   cin.getline(cadena,80);
   cout << "Escriba otra cadena  ";
   cin.getline(cadena2,80);
   concatena(cadena,cadena2);
   cout << cadena << endl;
   system("pause");
}

void concatena(char *a, char *b) 
{
    while(*a)   
    {
       a++;      
    }
    while(*b)    
    {
       *a=*b;    
       a++;      
       b++;      
    }
    *a='\0';     
}
