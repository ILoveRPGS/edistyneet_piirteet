#include <iostream>
using namespace std;

void swap(int *num1, int *num2);
    void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    }
    void swap2(int *num3_p, int *num4_p) {
    int temp = *num3_p;
    *num3_p = *num4_p;
    *num4_p = temp;
    }

int main() {
    cout << "Teht 2\n-------------------" << endl;
    int num1 = 3, num2 = 5;
    cout << "Ennen vaihtoa" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl << endl;
    swap(&num1, &num2);
    cout << "Jälkeen vaihdon" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl << endl;


    int num3 = 7, *num3_p = &num3;
    int num4 = 9, *num4_p = &num4;
    cout << "Ennen vaihtoa" << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl << endl;
    swap2(num3_p, num4_p);
    cout << "Jälkeen vaihdon" << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;
    return 0;
}
