#pragma once
#include <string>
#include <cmath>
#include <stdexcept>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


class Figura {
protected:
    std::string nombre;
public:
    explicit Figura(const std::string& name) : nombre(name) {}
    virtual ~Figura() = default;
    virtual float CalcularArea() const = 0;
    virtual float CalcularPerimetro() const = 0;
    const std::string& ObtenerNombreDeFigura() const { return nombre; }
};

class Circulo : public Figura {
    float radio;
public:
    explicit Circulo(float r) : Figura("Circulo"), radio(r) {
        if (r < 0) throw std::invalid_argument("radio negativo");
    }
    float CalcularArea() const override { return static_cast<float>(M_PI) * radio * radio; }
    float CalcularPerimetro() const override { return 2.0f * static_cast<float>(M_PI) * radio; }
};

class Cuadrado : public Figura {
protected:
    float lado;
public:
    explicit Cuadrado(float l) : Figura("Cuadrado"), lado(l) {
        if (l < 0) throw std::invalid_argument("lado negativo");
    }
    float CalcularArea() const override { return lado * lado; }
    float CalcularPerimetro() const override { return 4.0f * lado; }
    float Lado() const { return lado; }
};

class FiguraNLados : public Figura {
    int n; float lado;
public:
    FiguraNLados(int nl, float s) : Figura("FiguraNLados"), n(nl), lado(s) {
        if (n < 3) throw std::invalid_argument("n >= 3");
        if (lado <= 0) throw std::invalid_argument("lado > 0");
    }
    float CalcularArea() const override {
        return (n * lado * lado) / (4.0f * std::tan(static_cast<float>(M_PI) / n));
    }
    float CalcularPerimetro() const override { return n * lado; }
};

class Cubo : public Cuadrado {
public:
    explicit Cubo(float l) : Cuadrado(l) { nombre = "Cubo"; }
    float CalcularArea() const override { return 6.0f * lado * lado; }   // Surface total
    float CalcularPerimetro() const override { return 12.0f * lado; }    // 12 aristas
    float Volumen() const { return lado * lado * lado; }
    float Surface() const { return CalcularArea(); }
};

class Linea : public Figura {
    float* segmentos = nullptr;
    int size = 0;
public:
    Linea(const float* arr, int n) : Figura("Linea"), size(n) {
        if (n < 0) throw std::invalid_argument("n negativo");
        if (n > 0) {
            segmentos = new float[n];
            for (int i = 0; i < n; ++i) {
                if (arr[i] < 0) throw std::invalid_argument("segmento negativo");
                segmentos[i] = arr[i];
            }
        }
    }
    ~Linea() override { delete[] segmentos; }
    float CalcularArea() const override { return 0.0f; }
    float CalcularPerimetro() const override {
        float s = 0.0f; for (int i = 0; i < size; ++i) s += segmentos[i]; return s;
    }
};
