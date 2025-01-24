#include <iostream>
#include <cmath>
using namespace std;


int main() {
        double num;

    cout << "Anna reaaliluku: ";
    cin >> num;

    int edellinen = static_cast<int>(floor(num));
    int seuraava = static_cast<int>(ceil(num));

    if (num= edellinen) {
        edellinen -= 1;
    }

    cout << "Edeltävä kokonaisluku: " << edellinen << endl;
    cout << "Seuraava kokonaisluku: " << seuraava << endl;
    return 0;
}