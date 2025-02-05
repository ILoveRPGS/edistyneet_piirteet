#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("Random.txt");
    int number;
    int numbertemp;
    int i = 0;
    if(file.is_open()){
        while(file >> number){
            numbertemp = number +  numbertemp;
            i++;
        }
        cout << "Tiedostossa on " << i << " numeroa" << endl;
        cout << "Numeroiden summa on: " << numbertemp << endl;
        cout << "Numeroiden keskiarvo on: " << numbertemp/i << endl;
        file.close();
    }else{
        cout << "File not found" << endl;
    }
    return 0;
}