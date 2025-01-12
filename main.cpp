#include <iostream>

using namespace std;

int main(){
    cout << "Teht 1\n-------------------" << endl;
    cout << "A: \n";
    int muuttuja = 100, *muuttuja_p = &muuttuja;
    int muuttuja2 = 25;
    cout << "muuttuja = " << muuttuja << endl;
    cout << "muuttuja_p = " << muuttuja_p << endl << endl;
    cout << "Muutos\n" << endl;
    muuttuja_p = &muuttuja2;
    *muuttuja_p = 7;
    cout << "muuttuja = " << muuttuja << endl;
    cout << "muuttuja_p = " << muuttuja_p << endl;
    cout << "sizeOf muuttuja = " << sizeof(muuttuja) << endl;
    cout << "sizeOf muuttuja_p = " << sizeof(muuttuja_p) << endl;
    muuttuja_p = nullptr;
    cout << "muuttuja_p = " << muuttuja_p << endl;


    return 0;
}