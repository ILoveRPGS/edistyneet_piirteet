
#include <iostream>
using namespace std;

int sekunnit_ajaksi(int sekunnit);

int main(){

    int sekunnit;
    cout << "Anna sekunnit: ";
    cin >> sekunnit;
    sekunnit_ajaksi(sekunnit);


    return 0;
}

int sekunnit_ajaksi(int sekunnit){
    int tunnit = sekunnit / 3600;
    int minuutit = (sekunnit % 3600) / 60;
    int sekunnit2 = sekunnit % 60;
    cout << sekunnit << " sekuntia on: " << tunnit << " tuntia, " << minuutit << " minuuttia ja " << sekunnit2 << " sekuntia." << endl;
    return 0;
}
