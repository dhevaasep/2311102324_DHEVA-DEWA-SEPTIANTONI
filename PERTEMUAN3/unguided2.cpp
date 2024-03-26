// DHEVA DEWA SEPTIANTONI
// 2311102324
#include <iostream>
#include <iomanip> 
using namespace std;

// Deklarasi Struct Node
class Node {
public:
    string produk_324;
    int harga_324;
    Node* prev_324;
    Node* next_324;
};

// Deklarasi Class DoublyLinkedList
class DoublyLinkedList {
public:
    Node* head_324;
    Node* tail_324;

    // Constructor
    DoublyLinkedList() {
        head_324 = nullptr;
        tail_324 = nullptr;
    }

    // Prosedur untuk menambahkan data di depan
    void Push(int harga_324, string produk_324) {
        Node* newNode_324 = new Node;
        newNode_324->harga_324 = harga_324;
        newNode_324->produk_324 = produk_324;
        newNode_324->prev_324 = nullptr;
        newNode_324->next_324 = head_324;

        if (head_324 != nullptr) {
            head_324->prev_324 = newNode_324;
        }
        else {
            tail_324 = newNode_324;
        }

        head_324 = newNode_324;
    }

    // Prosedur untuk menambahkan data pada posisi tertentu
    void PushPosition(int posisi_324, int harga_324, string produk_324) {
        if (posisi_324 < 1) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        Node* newNode_324 = new Node;
        newNode_324->harga_324 = harga_324;
        newNode_324->produk_324 = produk_324;
        newNode_324->prev_324 = nullptr;
        newNode_324->next_324 = nullptr;

        if (posisi_324 == 1) {
            newNode_324->next_324 = head_324;
            if (head_324 != nullptr)
                head_324->prev_324 = newNode_324;
            else
                tail_324 = newNode_324;
            head_324 = newNode_324;
            return;
        }

        Node* saatIni_324 = head_324;
        for (int i = 1; i < posisi_324 - 1 && saatIni_324 != nullptr; ++i)
            saatIni_324 = saatIni_324->next_324;

        if (saatIni_324 == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            delete newNode_324;
            return;
        }

        newNode_324->next_324 = saatIni_324->next_324;
        newNode_324->prev_324 = saatIni_324;
        if (saatIni_324->next_324 != nullptr)
            saatIni_324->next_324->prev_324 = newNode_324;
        else
            tail_324 = newNode_324;
        saatIni_324->next_324 = newNode_324;
    }

    // Prosedur untuk menghapus data di depan
    void Pop() {
        if (head_324 == nullptr) {
            cout << "Tidak ada data yang bisa dihapus!" << endl;
            return;
        }

        Node* temp_324 = head_324;
        head_324 = head_324->next_324;

        if (head_324 != nullptr) {
            head_324->prev_324 = nullptr;
        }
        else {
            tail_324 = nullptr;
        }

        delete temp_324;
    }

    // Prosedur untuk menghapus data pada posisi tertentu
    void PopPosition(int posisi_324) {
        if (head_324 == nullptr) {
            cout << "Tidak ada data yang bisa dihapus!" << endl;
            return;
        }

        Node* temp_324 = head_324;
        for (int i = 1; i < posisi_324 && temp_324 != nullptr; ++i) {
            temp_324 = temp_324->next_324;
        }

        if (temp_324 == nullptr) {
            cout << "Posisi tidak valid!" << endl;
            return;
        }

        if (temp_324->prev_324 != nullptr) {
            temp_324->prev_324->next_324 = temp_324->next_324;
        } else {
            head_324 = temp_324->next_324;
        }

        if (temp_324->next_324 != nullptr) {
            temp_324->next_324->prev_324 = temp_324->prev_324;
        } else {
            tail_324 = temp_324->prev_324;
        }

        delete temp_324;
    }

    // Fungsi untuk mengupdate data
    bool Update(string oldProduk_324, string newProduk_324, int newharga_324) {
        Node* saatIni_324 = head_324;

        while (saatIni_324 != nullptr) {
            if (saatIni_324->produk_324 == oldProduk_324) {
                saatIni_324->produk_324 = newProduk_324;
                saatIni_324->harga_324 = newharga_324;
                return true;
            }
            saatIni_324 = saatIni_324->next_324;
        }

        return false;
    }

    // Prosedur untuk menghapus semua data
    void DeleteAll() {
        Node* saatIni_324 = head_324;

        while (saatIni_324 != nullptr) {
            Node* temp_324 = saatIni_324;
            saatIni_324 = saatIni_324->next_324;
            delete temp_324;
        }

        head_324 = nullptr;
        tail_324 = nullptr;
    }

    // Prosedur untuk menampilkan data
    void Display_324() {
        Node* saatIni_324 = head_324;

        cout << left << setw(20) << "[ Nama Produk ]" << setw(10) << "[ Harga ]" << endl;

        while (saatIni_324 != nullptr) {
            cout << setw(20) << saatIni_324->produk_324 << setw(10) << saatIni_324->harga_324 << endl;
            saatIni_324 = saatIni_324->next_324;
        }

        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    // Inisialisasi data awal
    list.Push(30000, "Hanasui");
    list.Push(50000, "Wardah");
    list.Push(100000, "Skintific");
    list.Push(150000, "Somethinc");
    list.Push(60000, "Originote");
    list.Display_324(); 

    // Loop untuk menu interaktif
    while (true) {
        cout << "\nSkincare Shop By. Dhevskuyy" << endl;
        cout << "   1. Tambah Data" << endl;
        cout << "   2. Hapus Data" << endl;
        cout << "   3. Update Data" << endl;
        cout << "   4. Tambah Data pada Posisi Tertentu" << endl;
        cout << "   5. Hapus Data pada Posisi Tertentu" << endl;
        cout << "   6. Hapus Semua Data" << endl;
        cout << "   7. Tampilkan Data" << endl;
        cout << "   8. Exit" << endl;

        int pilihan_324;
        cout << "Pilih Nomor: ";
        cin >> pilihan_324;
        switch (pilihan_324) {
                        case 1: {
                int harga_324;
                string produk_324;

                cout << "\nTAMBAH PRODUK SKINCARE" << endl;
                cout << "Nama produk: ";
                cin.ignore();
                getline(cin, produk_324);
                cout << "Harga produk: ";
                cin >> harga_324;
                list.Push(harga_324, produk_324);
                cout << "Produk berhasil ditambahkan!" << endl;
                list.Display_324(); 
                break;
            }

            case 2: {
                list.Pop();
                cout << "PRODUK PALING ATAS BERHASIL DIHAPUS!" << endl;
                list.Display_324(); 
                break;
            }

            case 3: {
                string oldProduk_324, newProduk_324;
                int newharga_324;

                cout << "\nUPDATE DATA PRODUK SKINCARE" << endl;
                cout << "Masukkan nama produk yang ingin diubah: ";
                cin.ignore();
                getline(cin, oldProduk_324);
                cout << "Masukkan nama produk baru: ";
                getline(cin, newProduk_324);
                cout << "Masukkan harga baru: ";
                cin >> newharga_324;

                bool update_324 = list.Update(oldProduk_324, newProduk_324, newharga_324);
                if (update_324) {
                    cout << "Data berhasil diperbarui!" << endl;
                } else {
                    cout << "Data tidak ditemukan!" << endl;
                }
                list.Display_324(); 
                break;
            }

            case 4: {
                int posisi_324, harga_324;
                string produk_324;

                cout << "\nTAMBAH PRODUK SKINCARE PADA POSISI TERTENTU" << endl;
                cout << "Masukkan posisi untuk produk baru: ";
                cin >> posisi_324;
                cout << "Nama produk: ";
                cin.ignore();
                getline(cin, produk_324);
                cout << "Harga produk: ";
                cin >> harga_324;
                list.PushPosition(posisi_324, harga_324, produk_324);
                cout << "Produk berhasil ditambahkan pada posisi ke-" << posisi_324 << "!" << endl;
                list.Display_324(); 
                break;
            }

            case 5: {
                int posisi_324;

                cout << "\nHAPUS PRODUK SKINCARE PADA POSISI TERTENTU" << endl;
                cout << "Masukkan posisi untuk menghapus data: ";
                cin >> posisi_324;
                list.PopPosition(posisi_324);
                cout << "Data berhasil dihapus pada posisi ke-" << posisi_324 << "!" << endl;
                list.Display_324(); 
                break;
            }

            case 6: {
                list.DeleteAll();
                cout << "SEMUA DATA BERHASIL DI HAPUS!" << endl;
                list.Display_324(); 
                break;
            }

            case 7: {
                cout << "\nTAMPILAN DATA PRODUK TOKO SKINCARE PURWOKERTO SEKARANG" << endl;
                list.Display_324(); 
                break;
            }

            case 8: {
                cout << "Terimakasih telah menggunakan program ini!" << endl;
                return 0;
            }

            default: {
                cout << "Pilihan anda tidak valid!" << endl;
                break;
            }
        }
    }

    return 0;
}
