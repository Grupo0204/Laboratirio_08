#include <iostream>
#include <string>
using namespace std;
class Persona
{
    private:
        string nombre;
        int edad;
        int salario;
    protected:
        string correo_electronico;
    public:
        void setCorreo(string correo_electronico)
        {
            this-> correo_electronico = correo_electronico;
        }
};
class Empleado : public Persona
{
    public:
        string MostrarCorreo()
        {
            return correo_electronico;
        }
};
class Cliente : public Persona
{
    public:
        void MostrarCorreo()
        {
            cout <<"Correo electronico: "<< correo_electronico <<endl;
        }
};
int main()
{
    Empleado empleado1;
    empleado1.setCorreo("Juanperes@ucsm.edu.pe");
    cout << "Correo electronico: "<< empleado1.MostrarCorreo() <<endl;


    Cliente cliente1;
    cliente1.setCorreo("JuanAlfonso@ucsm.edu.pe");
    cliente1.MostrarCorreo();


    return 0;
}
