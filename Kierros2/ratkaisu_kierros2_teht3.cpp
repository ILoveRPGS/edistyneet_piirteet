#include <iostream>
using namespace std;

int min(int a, int b);
int min3(int a, int b, int c);
int min4(int a, int b, int c, int d);
int main() {
    int a, b, c, d;
    cout << "Anna neljä kokonaislukua: ";
    cin >> a >> b >> c >> d;
    cout << "Pienin luku on: " << min4(a, b, c, d) << endl;
    return 0;
}
int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}
int min3 (int a, int b, int c) {
    return min(min(a, b), c);
}
int min4 (int a, int b, int c, int d) {
    return min(min3(a, b, c), d);
}