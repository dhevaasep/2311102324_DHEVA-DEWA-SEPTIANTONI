//Dheva Dewa Septiantoni
//2311102324
//A. Program Fungsi Map

#include <iostream>
#include <map>

using namespace std;

// Struktur data untuk menyimpan informasi Nominasi Ballon D'Or
struct player {
    string nama;
    string klub;
};

int main() {
    // Deklarasi map dengan key int dan value berupa objek player
    map<int, player> pemain2324;

    // Menambahkan data calon DPR ke dalam map
    pemain2324[1] = {"Cristiano Ronaldo", "Al-Nassr"};
    pemain2324[2] = {"Jude Bellingham", "Real Madrid"};
    pemain2324[3] = {"Erling Halland", "Manchester City"};
    pemain2324[4] = {"Kylan Mbappe", "Paris Saint-Germany"};
    pemain2324[5] = {"Mark Klok", "Persib Bandung"};

    cout << "===== NOMINASI PEMAIN BALON D'Or ====" << endl;
    //perulangan for untuk menampilkan MAP
    for (int i = 1; i <= pemain2324.size(); ++i) {
        cout << "Nomor " << i << "  Atas Nama: " << pemain2324[i].nama << ",  Dari: " << pemain2324[i].klub << endl;
        }
    return 0;
}
/*
B. Perbedaan Array dengan Map
1. Indeks
- Array harus bilangan bulat non-negatif & mulai berurutan dari 0
- Map dapat berupa nilai berapa pun & tidak harus berurutan
2. Ukuran
- Array harus dideklarasikan dengan ukuran yang tetap
- Map dapat dideklarasikan dengan ukuran yang dinamis
3. Tipe Data
- Array hanya dapat menggunakan tipe data primitif
- Map dapat menggunakan tipe data apapun
4. Penggunaan
- Array digunakan untuk menyimpan data yang berurutan
- Map digunakan untuk menyimpan data yang tidak berurutan dan perlu diakses berdasarkan key
*/