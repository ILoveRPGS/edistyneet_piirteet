#include <iostream>
using namespace std;

int main(){
    int SIZE = 1000;
    /*while(true){
        char *bar = new char[SIZE]; // dynaaminen muuttuja (heap)
        if(bar == nullptr){
            cout << "Muistin varaaminen epäonnistui" << endl;
            break;
        }
        cout << "Käytetty muisti: " << SIZE/1024 << " kilotavua" << endl;
        delete[] bar;
        SIZE += 10000000;
        //Ohjelma lopetti toiminnan kun käytetty muisti oli 2089844 kilotavua
    }*/
    SIZE = 1000;
    while(true){
        char foo[SIZE]; // paikallinen muuttuja
        cout << "Käytetty muisti: " << SIZE/1024 << " kilotavua" << endl;
        SIZE += 1000000;
        //Ohjelma lopetti toiminnan kun käytetty muisti oli noin 8000 kilotavua
    }



    return 0;
}