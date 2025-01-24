#include <iostream>
using namespace std;
void increase(int *num, int size) {
    for (int i = 0; i < size; i++) {
        num[i] = num[i] + 1;
    }
}
void increase2(int *num_p, int size) {
      for (int i = 0; i < size; i++) {
        *num_p = *num_p + 1; // Increment the value pointed to by ptr
        num_p++;           // Move the pointer to the next element
    }
}
int main() {
    cout << "Teht 3\n-------------------" << endl;
    int size = 10;
    int num[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Ennen muutosta" << endl;
    for(int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    increase(&num[0], size);
    cout << endl << "Jälkeen muutoksen" << endl;
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
    int *num_p = num;
    increase2(num_p, size);
    cout << "Jälkeen muutoksen" << endl;
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    int zero[size]= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    increase(zero, size);
    cout << endl << "Jälkeen muutoksen increase" << endl;
    for (int i = 0; i < size; i++) {
        cout << zero[i] << " ";
    }
    int zero2[size]= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    increase2(zero2, size);
    cout << endl << "Jälkeen muutoksen increase2" << endl;
    for (int i = 0; i < size; i++) {
        cout << zero2[i] << " ";
    }

    return 0;
}