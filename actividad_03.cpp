#include <iostream>
#include <string>
using namespace std;
class Animal
{
    public:
        virtual void hacerSonido()
        {


        }
};
class Perro : public Animal
{
    public:
        void hacerSonido()
        {
            cout<<"Guau"<<endl;
        }
};
class Gato : public Animal
{
    public:
        void hacerSonido()
        {
            cout<<"Miau"<<endl;
        }
};
class Vaca : public Animal
{
    public:
        void hacerSonido()
        {
            cout<<"Muuuuuu"<<endl;
        }
};
int main()
{
    Animal* animal1 = new Perro();    //Crea instancias de Perro y Gato utilizando punteros de tipo Animal
    Animal* animal2 = new Gato();     //Almacena los objetos derivados(Perro y Gato) en variables de tipo base(Animal)
    animal1->hacerSonido();
    animal2->hacerSonido();
    delete animal1;
    delete animal2;
    Vaca vaca1;
    vaca1.hacerSonido();
}
