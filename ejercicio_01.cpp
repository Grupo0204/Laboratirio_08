#include <iostream>
using namespace std;
class Vehiculo{
private:
    string marca;
    string modelo;
    int anioFabricacion;
    float precio;
public:
    Vehiculo(string marca, string modelo,int anioFabricacion,float precio)
    : marca(marca),modelo(modelo),anioFabricacion(anioFabricacion),precio(precio){}
    void imprimir(){
        cout << "Marca: "<<marca<<endl;
        cout << "Modelo: "<<modelo<<endl;
        cout << "Anio de Fabricacion: "<<anioFabricacion<<endl;
        cout << "Precio: "<<precio<<endl;
    }
};
class Automovil : public Vehiculo{
private:
    int num_puertas;
    string tipoCombustible;
public:
    Automovil(string marca, string modelo,int anioFabricacion,float precio, int num_puertas,string tipoCombustible)
    :Vehiculo(marca,modelo,anioFabricacion,precio),num_puertas(num_puertas),tipoCombustible(tipoCombustible){}
    void mostrarAuto(){
        cout << "----Automovil----"<<endl;
        Vehiculo::imprimir();
        cout<<"Numero de puertas: "<<num_puertas<<endl;
        cout << "Tipo de Combustible: "<<tipoCombustible<<endl;
    }
};
class Motocicleta : public Vehiculo{
private:
    float cilindrada;
public:
    Motocicleta(string marca, string modelo,int anioFabricacion,float precio,float cilindrada)
    :Vehiculo(marca,modelo,anioFabricacion,precio),cilindrada(cilindrada){}
    void mostrarMoto(){
        cout << "----Motocicleta----"<<endl;
        Vehiculo::imprimir();
        cout<<"Cilindrada: "<<cilindrada<<endl;
    }
};

int main(){
    Automovil Auto("Nissan","Sentra",2011,7000,4,"90");
    Motocicleta moto("Harley-Davidson","Dyna Wide Glide ",2010,71000,1.690);
    Auto.mostrarAuto();
    moto.mostrarMoto();
}