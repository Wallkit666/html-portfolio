#include <iostream> 
#include <cstdlib> 
#include <math.h> 
 
using namespace std; 
void obliczFunkcjeKwadratowa(int a, int b, int c, double* tablicaWartosci, int rozmiar) { 
    for (int x = -10; x <= 10; x++) { 
        tablicaWartosci[x + 10] = a * x * x + b * x + c; 
    } 
} 
 
void wyswietlTablice(double* tablicaWartosci, int rozmiar) { 
    for (int i = 0; i < rozmiar; i++) { 
        cout << "Wartosc dla x = " << i - 10 << ": " << tablicaWartosci[i] <<endl; 
    } 
} 
 
int main() { 
    int a, b, c; 
        cout << "Podaj wspolczynnik a dla funkcji kwadratowej ax^2 + bx + c: "; 
        cin >> a; 
        cout << "Podaj wspolczynnik b "; 
        cin >> b; 
        cout << "Podaj wspolczynnik c "; 
        cin >> c; 

    int rozmiar = 21; 
    double* tablicaWartosci = new double[rozmiar]; 
 
    obliczFunkcjeKwadratowa(a, b, c, tablicaWartosci, rozmiar); 
    wyswietlTablice(tablicaWartosci, rozmiar); 
 
    delete[] tablicaWartosci; 
    return 0; 
}