#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    double angka1, angka2;
    char operasi;

    // Tampilkan pesan selamat datang
    cout << "=== Kalkulator Sederhana ===" << endl;

    // Minta input angka pertama
    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    // Minta input operasi matematika
    cout << "Pilih operasi (+, -, *, /): ";
    cin >> operasi;

    // Minta input angka kedua
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    // Hitung hasil berdasarkan operasi yang dipilih
    double hasil;
    switch (operasi) {
        case '+':
            hasil = angka1 + angka2;
            break;
        case '-':
            hasil = angka1 - angka2;
            break;
        case '*':
            hasil = angka1 * angka2;
            break;
        case '/':
            if (angka2 != 0) {
                hasil = angka1 / angka2;
            } else {
                cout << "Error: Pembagian oleh nol tidak diizinkan." << endl;
                return 1; // Keluar dari program dengan kode kesalahan
            }
            break;
        default:
            cout << "Operasi tidak valid." << endl;
            return 1; // Keluar dari program dengan kode kesalahan
    }

    // Tampilkan hasil perhitungan
    cout << "Hasil: " << angka1 << " " << operasi << " " << angka2 << " = " << hasil << endl;

    return 0;
}
