#include <iostream>
using namespace std;

class Wektor
{

public:
    Wektor(int len)
    {
        this->wektor = new double[len];
        for (int i = 0; i < len; i++)
            wektor[i] *= 0.;
        this->dlugosc = len;
    }
    ~Wektor() { delete[] this->wektor; }

    void print()
    {
        for (int i = 0; i < this->dlugosc; i++)
            cout << wektor[i] << ' ';
    }
    void zmienDlugosc(int jup)
    {
        if (jup <= this->pojemnosc) {
            this->dlugosc = jup;
            for (int i = jup; i < this->pojemnosc; i++)
                wektor[i] *= 0.;
        }
        else {
            ; //TODO: dokończ zadanie 6
        }
    }

    int getDlugosc() { return this->dlugosc; }
    int getPojemnosc() { return this->pojemnosc; }

    double* wektor;

private:
    int dlugosc;
    int pojemnosc;
    int 
};

int main()
{
    Wektor d = Wektor(10);
    d.print();
}
