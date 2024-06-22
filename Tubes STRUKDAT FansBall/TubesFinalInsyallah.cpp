#include <iostream>
#include <limits>
#include <string>

using namespace std;

struct Tribun {
    string nama;
    int harga;
};

struct Node {
    Tribun tribun;
    Node* next;
};

void tambahTribun(Node*& head, const string& nama, int harga) {
    Node* newNode = new Node;
    newNode->tribun = {nama, harga};
    newNode->next = head;
    head = newNode;
}

void cetakTribun(Node* head) {
    Node* current = head;
    int posisi = 1;
    while (current != nullptr) {
        cout << posisi << ". " << current->tribun.nama << " : RP " << current->tribun.harga << endl;
        current = current->next;
        posisi++;
    }
}

Tribun* dapatkanTribun(Node* head, int posisi) {
    Node* current = head;
    int count = 1;
    while (current != nullptr && count < posisi) {
        current = current->next;
        count++;
    }
    if (current != nullptr && count == posisi) {
        return &current->tribun;
    } else {
        return nullptr;
    }
}

void inputNama(string &nama) {
    cout << "MASUKAN NAMA : ";
    cin >> nama;
}

void inputUmur(int &umur) {
    cout << "MASUKAN UMUR : ";
    while (!(cin >> umur) || umur < 0) {
        cout << "Umur tidak valid, masukkan kembali: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void printTicket(string nama, int umur, Tribun* tribun, int zona, int metodepembayaran, int print, int jumlahTiket, int kursi = -1, const string &bank = "", const string &ewallet = "") {
    if (!tribun) {
        cout << "Tribun tidak valid!" << endl;
        return;
    }

    int totalHarga = tribun->harga * jumlahTiket;

    if (print == 1) {
        cout << "==============PRINT TIKET==============" << endl;
        cout << endl;
        cout << "------------------" << endl;
        cout << "ATAS NAMA : " << nama << ", " << umur << " tahun" << endl;
        cout << "TRIBUN : " << tribun->nama << endl;
        cout << "ZONA : " << zona << endl;
        if (kursi != -1) {
            cout << "KURSI : " << kursi << endl;
        }
        cout << "METODE PEMBAYARAN : ";

        switch (metodepembayaran) {
            case 1:
                cout << "Cash (Silahkan bayar di tempat)";
                break;
            case 2:
                cout << "Transfer melalui " << bank;
                break;
            case 3:
                cout << "e-Wallet melalui layanan berikut: " << ewallet;
                break;
            default:
                cout << "Tidak Valid";
                break;
        }
        cout << endl;
        cout << "TOTAL HARGA TIKET (" << jumlahTiket << " tiket): Rp " << totalHarga << endl;
        cout << "---------------------------------------" << endl;
        cout << "DUKUNG TIM KESAYANGANMU !!" << endl;
        cout << "---------------------------------------" << endl;
    } else {
        cout << "ANDA TIDAK MENGEPRINT TIKET\n";
    }
}

void pilihMetodePembayaran(int &metodebayar, string &bank, string &eWallet) {
    cout << "=========== PILIH METODE PEMBAYARAN ===========" << endl;
    cout << "1. Cash" << endl;
    cout << "2. Transfer" << endl;
    cout << "3. e-Wallet" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Pilih Nomor Posisi Metode Pembayaran : ";
    while (!(cin >> metodebayar) || metodebayar < 1 || metodebayar > 3) {
        cout << "Metode Pembayaran tidak valid, masukkan kembali: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "---------------------------------------------" << endl;

    if (metodebayar == 2) {
        const string banks[] = {"BNI", "BRI", "BCA"};
        int bankPilihan;
        cout << "=========== PILIH BANK ===========" << endl;
        for (int i = 0; i < 3; ++i) {
            cout << i + 1 << ". " << banks[i] << endl;
        }
        cout << "----------------------------------" << endl;
        cout << "Pilih Nomor Posisi Bank : ";
        while (!(cin >> bankPilihan) || bankPilihan < 1 || bankPilihan > 3) {
            cout << "Bank tidak valid, masukkan kembali: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        bank = banks[bankPilihan - 1];
        cout << "----------------------------------" << endl;
    }
    else if (metodebayar == 3) {
        const string eWallets[] = {"Dana", "Gopay", "Ovo"};
        int ewalletPilihan;
        cout << "=========== E-WALLET ===========" << endl;
        for (int i = 0; i < 3; ++i) {
            cout << i + 1 << ". " << eWallets[i] << endl;
        }
        cout << "----------------------------------" << endl;
        cout << "Pilih Nomor Posisi e-Wallet : ";
        while (!(cin >> ewalletPilihan) || ewalletPilihan < 1 || ewalletPilihan > 3) {
            cout << "e-Wallet tidak valid, masukkan kembali: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        eWallet = eWallets[ewalletPilihan - 1];
        cout << "----------------------------------" << endl;
    }
}

void pilihZona(int tribun, int &zona, int &kursi) {
    cout << "===========SILAHKAN PILIH ZONA===========" << endl;
    for (int i = 1; i <= 4; ++i) {
        cout << i << ". ZONA " << i << endl;
    }
    cout << "-------------------------------------------" << endl;
    cout << "Pilih Nomor Posisi Zona : ";
    while (!(cin >> zona) || zona < 1 || zona > 4) {
        cout << "Zona tidak valid, masukkan kembali: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "-------------------------------------------" << endl;

    if (tribun == 1) { // Check if VIP tribune
        cout << "PILIHAN KURSI VIP: " << endl;
        int kursi1 = 0;
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 15; j++) {
                if (kursi1 < 105) {
                    cout << kursi1 + 1 << '\t';
                    kursi1++;
                }
            }
            cout << endl;
        }
        cout << "-------------------------------------------" << endl;
        cout << "Pilih Nomor Posisi kursi : ";
        while (!(cin >> kursi) || kursi < 1 || kursi > 105) {
            cout << "Nomor kursi tidak valid, masukkan kembali: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "-------------------------------------------" << endl;
        cout << endl;
    }
}

void pilihTribun(Node* head, int &tribun) {
    cout << "===========SILAHKAN PILIH TRIBUN===========" << endl;
    cetakTribun(head);
    cout << "-------------------------------------------" << endl;
    cout << "Pilih Nomor Posisi Tribun : ";
    while (!(cin >> tribun) || !dapatkanTribun(head, tribun)) {
        cout << "Nomor Tribun tidak valid, masukkan kembali: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "-------------------------------------------" << endl;
}



void pilihJadwal(int &jadwal) {
    cout << "===============PILIH PERTANDINGAN===============" << endl;
    cout << "1. MAN. CITY VS BAYERN MUNCHEN  :  15.30PM" << endl;
    cout << "2. REAL MADRID VS LIVERPOOL    :  18.00PM" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Pilih Nomor Posisi Jadwal : ";
    while (!(cin >> jadwal) || jadwal < 1 || jadwal > 2) {
        cout << "Jadwal tidak valid, masukkan kembali: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "----------------------------------------------" << endl;
}

int main() {
    Node* head = nullptr;

    tambahTribun(head, "TRIBUN SELATAN (REGULER)", 50000);
    tambahTribun(head, "TRIBUN TIMUR (REGULER)", 50000);
    tambahTribun(head, "TRIBUN UTARA (REGULER)", 50000);
    tambahTribun(head, "TRIBUN BARAT (VIP)", 100000);

    string nama;
    int umur;
    int tribun;
    int zona;
    int metodebayar;
    string bank;
    string eWallet;
    int jadwal;
    int print = 1;
    int jumlahTiket = 1;
    char lanjut;
    int kursi = -1;

    do {
        inputNama(nama);
        inputUmur(umur);
        pilihTribun(head, tribun);
        pilihZona(tribun, zona, kursi);
        pilihMetodePembayaran(metodebayar, bank, eWallet);
        pilihJadwal(jadwal);
        printTicket(nama, umur, dapatkanTribun(head, tribun), zona, metodebayar, print, jumlahTiket, kursi, bank, eWallet);

        cout << "Apakah Anda ingin memesan tiket lagi? (y/n): ";
        cin >> lanjut;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (lanjut == 'y' || lanjut == 'Y');

    // Bebaskan memori yang dialokasikan untuk linked list
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    cout << "Terima kasih telah menggunakan layanan kami!" << endl;

    return 0;
}