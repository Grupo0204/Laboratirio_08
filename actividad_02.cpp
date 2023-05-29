#include <iostream>
using namespace std;

// Clase abstracta Forma
class Forma {
public:
    virtual double calcularPerimetro() = 0;
};

// Clase derivada Círculo
class Circulo : public Forma {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}

    double calcularPerimetro() {
        return 2 * 3.14159 * radio;
    }
};

// Clase derivada Rectángulo
class Rectangulo : public Forma {
private:
    double lado1;
    double lado2;
public:
    Rectangulo(double l1, double l2) : lado1(l1), lado2(l2) {}

    double calcularPerimetro() {
        return 2 * (lado1 + lado2);
    }
};

// Clase derivada Triángulo
class Triangulo : public Forma {
private:
    double lado1;
    double lado2;
    double lado3;
public:
    Triangulo(double l1, double l2, double l3) : lado1(l1), lado2(l2), lado3(l3) {}

    double calcularPerimetro() {
        return lado1 + lado2 + lado3;
    }
};

int main() {
    int opcion;
    double radio, lado1, lado2, lado3;

    cout << "Seleccione una forma geométrica:" <<endl;
    cout << "1. Círculo" <<endl;
    cout << "2. Rectángulo" <<endl;
    cout << "3. Triángulo" <<endl;
    cout << "Ingrese el número de opción: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Ingrese el radio del círculo: ";
        cin >> radio;

        Circulo circulo(radio);
        double perimetro = circulo.calcularPerimetro();

        cout << "El perímetro del círculo es: " << perimetro <<endl;
    } 
    else if (opcion == 2) {
        cout << "Ingrese el largo del rectángulo: ";
        cin >> lado1;
        cout << "Ingrese el ancho del rectángulo: ";
        cin >> lado2;

        Rectangulo rectangulo(lado1, lado2);
        double perimetro = rectangulo.calcularPerimetro();

        cout << "El perímetro del rectángulo es: " << perimetro <<endl;
    } 
    else if (opcion == 3) {
        cout << "Ingrese el primer lado del triángulo: ";
        cin >> lado1;
        cout << "Ingrese el segundo lado del triángulo: ";
        cin >> lado2;
        cout << "Ingrese el tercer lado del triángulo: ";
        cin >> lado3;

        Triangulo triangulo(lado1, lado2, lado3);
        double perimetro = triangulo.calcularPerimetro();

        cout << "El perímetro del triángulo es: " << perimetro <<endl;
    } 
    else {
        cout << "Opción inválida." <<endl;
    }

    return 0;
}
