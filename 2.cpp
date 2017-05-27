#include <iostream>
using namespace std;

int run_chain(char *);

int main()
{
   char chain[80];
   cout << "Introduce cadena: ";
   cin.getline(chain, 80);   
   run_chain(chain);
   system("pause");
}

int run_chain(char *s)
{
    while(*s) 
    { 
        cout << "EL valor es: " << *s << endl;
        s++;
    }
    return 0;
}