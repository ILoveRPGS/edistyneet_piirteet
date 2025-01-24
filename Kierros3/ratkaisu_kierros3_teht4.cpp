#include <iostream>
using namespace std;

struct aika_ty {
    int tunnit;
    int minuutit;
    int sekunnit;
};

aika_ty sekunnit_ajaksi(int sekunnit);
int aika_sekunneiksi(int tunnit, int minuutit, int sekunnit);
aika_ty aikojen_erotus(aika_ty aika1, aika_ty aika2);
aika_ty syota_syote();

int main(){
    aika_ty aika1 = syota_syote();
    aika_ty aika2 = syota_syote();
    aika_ty erotus = aikojen_erotus(aika1, aika2);
    return 0;
    
}

aika_ty sekunnit_ajaksi(int sekunnit){
    int tunnit = sekunnit / 3600;
    int minuutit = (sekunnit % 3600) / 60;
    int sekunnit2 = sekunnit % 60;
    cout << sekunnit << " sekuntia on: " << tunnit << " tuntia, " << minuutit << " minuuttia ja " << sekunnit2 << " sekuntia." << endl;
    return {tunnit, minuutit, sekunnit2};
}
int aika_sekunneiksi(int tunnit, int minuutit, int sekunnit){
    int sekunnit2 = tunnit * 3600 + minuutit * 60 + sekunnit;
    cout << tunnit << ":"<< minuutit << ":"<< sekunnit << endl;
    return sekunnit2;
}
aika_ty aikojen_erotus(aika_ty aika1, aika_ty aika2){
    int erotussekunnit;
    int sekunnit1 = aika_sekunneiksi(aika1.tunnit, aika1.minuutit, aika1.sekunnit);
    int sekunnit2 = aika_sekunneiksi(aika2.tunnit, aika2.minuutit, aika2.sekunnit);
    if(sekunnit1 <= sekunnit2){
        erotussekunnit = sekunnit2 - sekunnit1;
    } else if(sekunnit1 >= sekunnit2){
        erotussekunnit = sekunnit1 - sekunnit2;
    } 
    else{
        erotussekunnit = 0;
    }
    aika_ty erotus = sekunnit_ajaksi(erotussekunnit);
    return erotus;
}
aika_ty syota_syote(){
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
    return {tunnit, minuutit, sekunnit};
}