//DHEVA DEWA SEPTIANTOI
//2311102324
#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    // Meminta pengguna untuk memasukkan elemen-elemen array
    int arr[n];
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    // Menampilkan menu
    cout << "\nMenu:\n";
    cout << "1. Cari nilai maksimum\n";
    cout << "2. Cari nilai minimum\n";
    cout << "3. Cari nilai rata-rata\n";
    cout << "Pilih menu (1/2/3): ";
    
    int choice;
    cin >> choice;

    // Menghitung nilai maksimum
    if (choice == 1) {
        int max = arr[0];
        for (int i = 1; i < n; ++i) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        cout << "Nilai maksimum: " << max << endl;
    }
    // Menghitung nilai minimum
    else if (choice == 2) {
        int min = arr[0];
        for (int i = 1; i < n; ++i) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        cout << "Nilai minimum: " << min << endl;
    }
    // Menghitung nilai rata-rata
    else if (choice == 3) {
        int total = 0;
        for (int i = 0; i < n; ++i) {
            total += arr[i];
        }
        double average = static_cast<double>(total) / n;
        cout << "Nilai rata-rata: " << average << endl;
    } else {
        cout << "Pilihan tidak valid" << endl;
    }

    return 0;
}
