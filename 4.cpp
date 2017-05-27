#include <iostream>
#include <cstdlib>
using std::string;
 
using namespace std;
 
struct datos_bodega {
	string id;
    string article_id;
    string name;
    string price;
};
 
class bodega{
    private:   	 
   	    datos_bodega bodega[1];
    public:
   	    void pedir_datos();   	 
   	    void ver_datos();
};
 
void bodega::fill_data() {
	for(int i=0; i<1; i++){
    	cout<<"Ingrese el id del " << i << " inventario" <<endl;
    	cin >> bodega[i].id;
    	cout<<"Ingrese el id de la " << i << " bodega" <<endl;
    	cin >> bodega[i].article_id;
    	cout<<"Ingrese el nombre del " << i << " articulo" <<endl;
    	cin >> bodega[i].name;
    	cout<<"Ingrese el precio del " << i << " articulo" <<endl;
    	cin >> bodega[i].price;
	}
}
 
void bodega::show_data(){
    for(int i=0;i<1;i++){
     cout << "Los datos son: " << endl;
     cout << "Bodega: " << bodega[i].id << endl;
     cout << "Articulo: " << bodega[i].article_id << endl;
     cout << "Nombre: " << bodega[i].name << endl;
     cout << "Precio: " <<  bodega[i].price << endl;
    }
}
 
int main(){
	bodega bodega;
	bodega.fill_data();
	bodega.show_data();
    system("pause");
}