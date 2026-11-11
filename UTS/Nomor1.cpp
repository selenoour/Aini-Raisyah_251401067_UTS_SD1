#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int array[2][3][4];

    int genap = 2;
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 4; k++) {
            array[0][j][k] = genap;
            genap += 2;
        }
    }

    int ganjil = 1;
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 4; k++) {
            array[1][j][k] = ganjil;
            ganjil += 2;
        }
    }

    cout << "=== HASIL PENJUMLAHAN LAPIS  ===" << endl << endl;

    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 4; k++) {
            int hasil_jumlah = array[0][j][k] + array[1][j][k];
            
            cout << setw(5) << hasil_jumlah << " ";
        }
        cout << endl;
    }

    return 0;
}