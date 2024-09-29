#include <iostream>
using namespace std;

int main() {
    // Variabel untuk menyimpan harga dan diskon
    double hargaAwal, persentaseDiskon, hargaSetelahDiskon, besarnyaDiskon;

    // Meminta pengguna memasukkan harga awal
    cout << "Masukkan harga awal: ";
    cin >> hargaAwal;

    // Meminta pengguna memasukkan persentase diskon
    cout << "Masukkan persentase diskon: ";
    cin >> persentaseDiskon;

    // Menghitung besarnya diskon
    besarnyaDiskon = hargaAwal * (persentaseDiskon / 100);

    // Menghitung harga setelah diskon
    hargaSetelahDiskon = hargaAwal - besarnyaDiskon;

    // Menampilkan hasil
    cout << "Besarnya diskon dari harga: " << besarnyaDiskon << endl;
    cout << "Harga setelah diskon: " << hargaSetelahDiskon << endl;

    return 0;
}
