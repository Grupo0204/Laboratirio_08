#include <iostream>
#include <string>
using namespace std;

// Definición de la interfaz "Reproductor"
class Reproductor {
public:
    virtual void reproducir(const string archivo) = 0;
    virtual void pausar() = 0;
    virtual void detener() = 0;
};

// Implementación de la clase "ReproductorMP3"
class ReproductorMP3 : public Reproductor {
public:
    void reproducir(const string archivo) override {
        cout << "Reproduciendo archivo MP3: " << archivo <<endl;
        // Lógica de reproducción específica para archivos MP3
    }

    void pausar() override {
        cout << "Pausando la reproducción" <<endl;
        // Lógica de pausa específica para archivos MP3
    }

    void detener() override {
        cout << "Deteniendo la reproducción" <<endl;
        // Lógica de detención específica para archivos MP3
    }
};

int main() {
    // Crear instancia de ReproductorMP3
    ReproductorMP3 reproductor;

    // Llamar a los métodos de la interfaz
    reproductor.reproducir("cancion.mp3");
    reproductor.pausar();
    reproductor.detener();

    return 0;
}
