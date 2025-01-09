#include <iostream>

using namespace std;

int main(){
    int x = 10, *intpnr= &x;
    cout << "x = " << x << endl;
    cout << "x = " << *intpnr << endl;


    return 0;
}