#include <iostream>
using namespace std;
class Cliente{
protected:
    string nombreApellido;
    string correo;
    int telefono;
    int dni;
public:
    Cliente(string nombre, string correo,int telf,int dni)
            :nombreApellido(nombre), correo(correo),telefono(telf),dni(dni){}
    virtual ~Cliente(){}
};
class ClienteSeguro : public Cliente{
private:
    int numCuenta;
public:
    ClienteSeguro(string nombre, string correo, int telf,int dni, int numCuenta)
            : Cliente(nombre,correo,telf,dni),numCuenta(numCuenta){}
    ~ClienteSeguro(){}
};
int main(){}