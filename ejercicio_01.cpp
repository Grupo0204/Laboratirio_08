#include <iostream>
#include <string>
using namespace std;
class Figura
{
    public:
        virtual float calcularArea() = 0;
        virtual void dibujarArea() = 0;
};
class Circulo : public Figura
{
    private:
        float radio;
    public:
        Circulo(float radio) : radio(radio) {}
        void dibujarArea() override
        {
            cout<<"Area del Circulo"<<endl;
        }
        float calcularArea() override
        {
            return 3.14159 * (radio * radio);
        }
};
class Rectangulo : public Figura
{
    private:
        float base;
        float altura;
    public:
        Rectangulo(float base, float altura) : base(base), altura(altura) {}
        void dibujarArea() override
        {
            cout<<"Area del Rectangulo"<<endl;
        }
        float calcularArea() override
        {
            return base * altura;
        }
};
class Triangulo : public Figura
{
    private:
        float base;
        float altura;
    public:
        Triangulo(float base, float altura) : base(base), altura(altura) {}
        void dibujarArea() override
        {
            cout<<"Area del Triangulo"<<endl;
        }
        float calcularArea() override
        {
            return (base * altura )/2;
        }
};
int main()
{
    Circulo circulo1(12);
    circulo1.dibujarArea();
    cout<<"Circulo area: "<<circulo1.calcularArea()<<endl;


    Rectangulo rectangulo1(12, 5);
    rectangulo1.dibujarArea();
    cout<<"Rectangulo area: "<<rectangulo1.calcularArea()<<endl;


}