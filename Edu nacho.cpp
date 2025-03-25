#include <iostream>
#include <fstream>  
using namespace std;

int main() {
    ofstream archivo("musiquita.txt");
    
    cout<<"Hola muñaño inicia el programa"<<endl;
    
    archivo<<"Genero musical que me gusta: Rock\n";
    archivo<<"Mi cantante favorito: Freddie Mercury\n";


    cout<<"Datos escritos en el archivo correctamente."<<endl;
	
    return 0;
}

