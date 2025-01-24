#include <iostream>
using namespace std;

int sekunnit_ajaksi(int sekunnit);
int aika_sekunneiksi(int tunnit, int minuutit, int sekunnit);

struct aika_ty {
    int tunnit;
    int minuutit;
    int sekunnit;
};

int main(){
    int syotteet = 0;
    int sekunnit;
    int tunnit;
    int minuutit;
        while(syotteet < 1){
        cout << "Anna sekunnit: ";
        cin >> sekunnit;
        if (sekunnit < 0 or sekunnit > 59){
            cout << "Sekunnit ei voi olla negatiivinen luku tai suurempi kuin 59 sekuntia." << endl;
        } else {
            syotteet++;
        }
        }
        while(syotteet < 2){
        cout << "Anna tunnit: ";
        cin >> tunnit;
        if (tunnit < 0 or tunnit > 23){
            cout << "Tunnit ei voi olla negatiivinen luku tai suurempi kuin 23 tuntia" << endl;
        } else {
            syotteet++;
        }
        }
        while(syotteet < 3){
        cout << "Anna minuutit: ";
        cin >> minuutit;
        if (minuutit < 0 or minuutit > 59){
            cout << "Minuutit ei voi olla negatiivinen luku tai suurempi kuin 59 minuuttia" << endl;
        } else {
            syotteet++;
        }
        }
    aika_ty aika = {tunnit, minuutit, sekunnit};
    int sekunnit2 = aika_sekunneiksi(aika.tunnit, aika.minuutit, aika.sekunnit);
    sekunnit_ajaksi(sekunnit2);
    aika_ty *aikaptr = &aika;
    cout << "Aika on: " << aikaptr->tunnit << ":" << aikaptr->minuutit << ":" << aikaptr->sekunnit << endl;
    
    aika_ty aika2 = {0, 0, 0};
    aika_ty aika3 = {18, 30, 42};
    aika_ty aikaptr3 = aika3;
    aika2 = aikaptr3;
    if(aika2.tunnit == aika3.tunnit and aika2.minuutit == aika3.minuutit and aika2.sekunnit == aika3.sekunnit){
        cout << "Ovat samat." << endl;
    } else {
        cout << "Eivät ole samat." << endl;
    }

    return 0;
    
}

int sekunnit_ajaksi(int sekunnit){
    int tunnit = sekunnit / 3600;
    int minuutit = (sekunnit % 3600) / 60;
    int sekunnit2 = sekunnit % 60;
    cout << sekunnit << " sekuntia on: " << tunnit << " tuntia, " << minuutit << " minuuttia ja " << sekunnit2 << " sekuntia." << endl;
    return 0;
}
int aika_sekunneiksi(int tunnit, int minuutit, int sekunnit){
    int sekunnit2 = tunnit * 3600 + minuutit * 60 + sekunnit;
    cout << tunnit << ":"<< minuutit << ":"<< sekunnit << endl;
    return sekunnit2;
}