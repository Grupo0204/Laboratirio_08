 #include <iostream>
using namespace std;

class Figura {
public:
    virtual double calcularArea() const = 0;
};

class Circulo : public Figura {
private:
    double radio;

public:
    Circulo(double r) : radio(r) {}

    double calcularArea() const override {
        return 3.14159 * radio * radio; // fórmula del área de un círculo: pi * r^2
    }
};

class Rectangulo : public Figura {
private:
    double base;
    double altura;

public:
    Rectangulo(double b, double h) : base(b), altura(h) {}

    double calcularArea() const override {
        return base * altura; // fórmula del área de un rectángulo: base * altura
    }
};

class Triangulo : public Figura {
private:
    double base;
    double altura;

public:
    Triangulo(double b, double h) : base(b), altura(h) {}

    double calcularArea() const override {
        return (base * altura) / 2; // fórmula del área de un triángulo: (base * altura) / 2
    }
};

class Pentagono : public Figura{
    private:
    double lado;
    double apotema;
    public:
    Pentagono(double l, double a) : lado(l), apotema(a) {}
    double calcularArea() const override{
        return(((lado*5)*apotema)/2);
    }
};

class Cuadrado : public Figura{
    private:
    double lado;
    public:
    Cuadrado(double l) : lado(l) {}
    double calcularArea() const override{
        return lado*lado;
    }
};


int main() {
    cout << "Seleccione una figura:" <<endl;
    cout << "1. Círculo" <<endl;
    cout << "2. Rectángulo" <<endl;
    cout << "3. Triángulo" <<endl;
    cout << "4. Pentágono" <<endl;
    cout << "5. Cuadrado" <<endl;

    int opcion;
    cin >> opcion;

    if (opcion == 1) {
        double radio;
        cout << "Ingrese el radio del círculo: ";
        cin >> radio;
        Circulo circulo(radio);
        double area = circulo.calcularArea();
        cout<<"El area del circulo es: "<<area<<endl;
    } 
    else if (opcion == 2) {
        double base, altura;
        cout << "Ingrese la base del rectángulo: ";
        cin >> base;
        cout << "Ingrese la altura del rectángulo: ";
        cin >> altura;
        Rectangulo rectangulo(base, altura);
        double area = rectangulo.calcularArea();
        cout<<"El area del rectangulo es: "<<area<<endl;
    } 
    else if (opcion == 3) {
        double base, altura;
        cout << "Ingrese la base del triángulo: ";
        cin >> base;
        cout << "Ingrese la altura del triángulo: ";
        cin >> altura;
        Triangulo triangulo(base, altura);
        double area = triangulo.calcularArea();
        cout<<"El area del triangulo es: "<<area<<endl;
    } 
    else if (opcion == 4) {
        double lado;
        double apotema;
        cout << "Ingrese la longitud del lado del pentágono: ";
        cin >> lado;
        cout<<"Ingrese el apotema del pentagono: ";
        cin>>apotema;
        Pentagono pentagono(lado,apotema);
        double area = pentagono.calcularArea();
        cout<<"El area del pentagono es: "<<area<<endl;
    } 
    else if (opcion == 5) {
        double lado;
        cout << "Ingrese la longitud del lado del cuadrado: ";
        cin >> lado;
        Cuadrado cuadrado(5.0);
        double area = cuadrado.calcularArea();
        cout<<"El area del cuadrado es: "<<area<<endl;
    } 
    else {
        cout << "Opción inválida." <<endl;
        return 0;
    }
    return 0;
}
