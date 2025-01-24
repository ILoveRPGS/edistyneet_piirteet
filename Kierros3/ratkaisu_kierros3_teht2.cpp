#include <iostream>
using namespace std;

int sekunnit_ajaksi(int sekunnit);
int aika_sekunneiksi(int tunnit, int minuutit, int sekunnit);

int main(){

    int tunnit, minuutit, sekunnit;
    cout << "Anna tunnit: ";
    cin >> tunnit;
    cout << "Anna minuutit: ";
    cin >> minuutit;
    cout << "Anna sekunnit: ";
    cin >> sekunnit;
    int sekunnit2 = aika_sekunneiksi(tunnit, minuutit, sekunnit);
    sekunnit_ajaksi(sekunnit2);



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
    cout << tunnit << " tuntia, " << minuutit << " minuuttia ja " << sekunnit << " sekuntia on yhteensä " << sekunnit2 << " sekuntia." << endl;
    return sekunnit2;
}