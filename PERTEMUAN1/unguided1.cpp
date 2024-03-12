//Dheva Dewa Septiantoni
//2311102324
#include <iostream>
using namespace std;

int main() {
    int jumlah_pesanan; // Variabel untuk menyimpan jumlah pesanan
    double total_harga = 0.0; // Variabel untuk menyimpan total harga

    double harga_nasi_goreng = 15000.0;
    double harga_mie_goreng = 12000.0;
    double harga_ayam_goreng = 20000.0;
    // Harga masing-masing item

    cout << "Selamat Datang Di Warung Dheva:" << endl;
    cout << "Silahkan Pilih Menu Di Bawah :" << endl;
    cout << "1. Nasi Goreng - Rp. 15.000" << endl;
    cout << "2. Mie Goreng  - Rp. 12.000" << endl;
    cout << "3. Ayam Goreng - Rp. 20.000" << endl;

    cout << "Masukkan jumlah pesanan untuk setiap item:" << endl; // Meminta pengguna untuk memasukkan jumlah pesanan
    cout << "Nasi Goreng: ";
    cin >> jumlah_pesanan;
    total_harga += jumlah_pesanan * harga_nasi_goreng;

    cout << "Mie Goreng: ";
    cin >> jumlah_pesanan;
    total_harga += jumlah_pesanan * harga_mie_goreng;

    cout << "Ayam Goreng: ";
    cin >> jumlah_pesanan;
    total_harga += jumlah_pesanan * harga_ayam_goreng;

    cout << "Total harga: Rp. " << total_harga << endl; // Menampilkan total harga

    return 0;
}
