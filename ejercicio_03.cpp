#include <iostream>
using namespace std;

class Empleado{
private:
    string nombre;
    int telefono;
    string correo;
    int horas_trabajo;
public:
    
    Empleado(string nombre, int telf, string correo, int horasTrabajo)
    {
        this -> nombre=nombre;
        this -> telefono=telf;
        this -> correo=correo;
        this -> horas_trabajo=horasTrabajo;
    }
    int getHoras(){return horas_trabajo;}
    virtual int  calcularSalario() = 0;
};

class EmpleadoTiempoCompleto: public Empleado{
public:
    EmpleadoTiempoCompleto(string nombre, int telf, string correo, int horasTrabajo)
    :Empleado(nombre, telf, correo, horasTrabajo){}
    int calcularSalario() override{
        return getHoras()*2000;
    }
};

class EmpleadoMedioTiempo : public Empleado{
public:
    EmpleadoMedioTiempo(string nombre, int telf, string correo, int horasTrabajo)
    :Empleado(nombre, telf, correo, horasTrabajo){}
    int calcularSalario()override {
        return getHoras() * 800;
    }
};

int main(){
    EmpleadoTiempoCompleto empleadoTC("Juan", 123456789, "juan@example.com", 40);
    EmpleadoMedioTiempo empleadoMT("Pedro", 987654321, "pedro@example.com", 20);

    int salarioTC = empleadoTC.calcularSalario();
    int salarioMT = empleadoMT.calcularSalario();

    cout << "Salario de Empleado de Tiempo Completo: " << salarioTC << endl;
    cout << "Salario de Empleado de Medio Tiempo: " << salarioMT << endl;

    return 0;
}