#include <iostream>
using namespace std;
class Vehiculo{
public:
    virtual void acelerar(){
        cout << "Acelerando el Vehiculo"<<endl;
    }
};

class Coche : public Vehiculo{
public:
    void acelerar()  override {
        cout << "Acelerando Coche"<<endl;
    }
    void encenderLuces(){
        cout << "Luces del coche encendidas"<<endl;
    }
};

class Motocicleta : public Vehiculo{
public: 
    void acelerar() override{
        cout << "Acelerando motocicleta"<<endl;
    };

};
int main(){
    Vehiculo autos;
    autos.acelerar();
    Coche van;
    van.acelerar();
    van.encenderLuces();
    Motocicleta moto;
    moto.acelerar();
}