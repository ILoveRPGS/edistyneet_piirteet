#include <iostream>
#include <cmath> 
using namespace std;

enum Kolmiotyyppi {
    EiTyyppiä,
    Epäsäännöllinen,        
    Tasakylkinen,      
    Tasasivuinen,   
    Suorakulmainen           
};


bool onKolmiollinen(double a, double b, double c, Kolmiotyyppi &tyyppi) {
    if (a + b > c && a + c > b && b + c > a) {
        if (abs(a - b) < 1e-9 && abs(b - c) < 1e-9) {
            tyyppi = Tasasivuinen; 
        } else if (abs(a - b) < 1e-9 || abs(a - c) < 1e-9 || abs(b - c) < 1e-9) {
            tyyppi = Tasakylkinen; 
        } else {
            if (abs(a * a + b * b - c * c) < 1e-9 ||
                abs(a * a + c * c - b * b) < 1e-9 ||
                abs(b * b + c * c - a * a) < 1e-9) {
                tyyppi = Suorakulmainen; 
            } else {
                tyyppi = Epäsäännöllinen; 
            }
        }
        return true;
    }

    tyyppi = EiTyyppiä;
    return false;
}

int main() {
    double a, b, c;
    Kolmiotyyppi type;

    cout << "Anna kolmion sivujen pituudet (a, b, c): ";
    cin >> a >> b >> c;

    if (onKolmiollinen(a, b, c, type)) {
        cout << "Kolmion muodostaminen onnistuu. Kolmion tyyppi on: ";
        switch (type) {
            case Tasasivuinen:
                cout << "Tasasivuinen";
                break;
            case Tasakylkinen:
                cout << "Tasakylkinen";
                break;
            case Epäsäännöllinen:
                cout << "Epäsäännöllinen";
                break;
            case Suorakulmainen:
                cout << "Suorakulmainen";
                break;
            default:
                break;
        }
        cout << endl;
    } else {
        cout << "Kolmion muodostaminen ei onnistu annetuilla arvoilla." << endl;
    }

    return 0;
}