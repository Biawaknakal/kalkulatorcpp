#include <iostream>
using namespace std;

void showMenu() {
    cout << "Pilih Operasi: " << endl;
    cout << "1. Penjumlahan (+)" << endl;
    cout << "2. Pengurangan (-)" << endl;
    cout << "3. Perkalian (*)" << endl;
    cout << "4. Pembagian (/)" << endl;
    cout << "5. Keluar" << endl;
}

int main() {
    double num1, num2;
    int choice;

    do {
        showMenu();
        cout << "Masukkan pilihan Anda: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Masukkan angka pertama: ";
            cin >> num1;
            cout << "Masukkan angka kedua: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Hasil: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Hasil: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Hasil: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Hasil: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
                }
                break;
            case 5:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
        cout << endl;
    } while (choice != 5);

    return 0;
}