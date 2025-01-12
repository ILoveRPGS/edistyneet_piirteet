#include <iostream>
using namespace std;
void reverse(int *num, int size) {
    int *end = num + size - 1;
    while (num < end) {
        int temp = *num;
        *num = *end;
        *end = temp;
        num++;
        end--;
    }
}

int main() {
    cout << "Teht 4\n-------------------" << endl;
    int size = 9;
    int num[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Ennen muutosta" << endl;
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    reverse(&num[0], size);
    cout << endl << "Jälkeen muutoksen" << endl;
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    return 0;
}