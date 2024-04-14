//Dheva Dewa Septiantoni
//2311102324
#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 10;

// Struktur data untuk setiap node
struct Node
{
    string NIM;
    string nama;
    int nilai;
    Node *next;
    Node(string NIM, string nama, int nilai) : NIM(NIM), nama(nama), nilai(nilai), next(nullptr) {}
};

// Class hash table
class HashTable
{
private:
    Node **table;

public:
    HashTable()
    {
        table = new Node *[MAX_SIZE]();
    }

    ~HashTable()
    {
        for (int i = 0; i < MAX_SIZE; i++)
        {
            Node *current = table[i];
            while (current != nullptr)
            {
                Node *temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    // Fungsi hash sederhana
    int hash_func(string NIM)
    {
        int sum = 0;
        for (char c : NIM)
        {
            sum += c;
        }
        return sum % MAX_SIZE;
    }

    // Insertion
    void insert(string NIM, string nama, int nilai)
    {
        int index = hash_func(NIM);
        Node *newNode = new Node(NIM, nama, nilai);
        if (table[index] == nullptr)
        {
            table[index] = newNode;
        }
        else
        {
            Node *current = table[index];
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Deletion
    void remove(string NIM)
    {
        int index = hash_func(NIM);
        Node *current = table[index];
        Node *prev = nullptr;
        while (current != nullptr)
        {
            if (current->NIM == NIM)
            {
                if (prev == nullptr)
                {
                    table[index] = current->next;
                }
                else
                {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
        cout << "Data not found for NIM: " << NIM << endl;
    }

    // Searching by NIM
    void searchByNIM(string NIM)
    {
        int index = hash_func(NIM);
        Node *current = table[index];
        while (current != nullptr)
        {
            if (current->NIM == NIM)
            {
                cout << "Data found - NIM: " << current->NIM << ", Nama: " << current->nama << ", Nilai: " << current->nilai << endl;
                return;
            }
            current = current->next;
        }
        cout << "Data not found for NIM: " << NIM << endl;
    }

    // Searching by range of values (80-90)
    void searchByRange()
    {
        for (int i = 0; i < MAX_SIZE; i++)
        {
            Node *current = table[i];
            while (current != nullptr)
            {
                if (current->nilai >= 80 && current->nilai <= 90)
                {
                    cout << "NIM: " << current->NIM << ", Nama: " << current->nama << ", Nilai: " << current->nilai << endl;
                }
                current = current->next;
            }
        }
    }

    void displayAllData()
    {
        cout << "Data Mahasiswa:\n";
        for (int i = 0; i < MAX_SIZE; i++)
        {
            Node *current = table[i];
            while (current != nullptr)
            {
                cout << "NIM: " << current->NIM << ", Nama: " << current->nama << ", Nilai: " << current->nilai << endl;
                current = current->next;
            }
        }
    }

    // Menampilkan menu pilihan
    void displayMenu()
    {
        cout << "==================== MENU =======================\n";
        cout << "1. Tambah Data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Cari berdasarkan NIM\n";
        cout << "4. Cari berdasarkan rentang nilai (80-90)\n";
        cout << "5. Tampilkan Semua\n";
        cout << "6. Keluar\n";
        cout << "-------------------------------------------------\n";
    }
};

int main()
{
    HashTable hashTable;

    int choice;
    string NIM, nama;
    int nilai;

    do
    {
        hashTable.displayMenu();
        cout << "Pilih menu: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "===================TAMBAH DATA===================\n";
            cout << "Masukkan NIM: ";
            cin >> NIM;
            cout << "Masukkan Nama: ";
            cin >> nama;
            cout << "Masukkan Nilai: ";
            cin >> nilai;
            hashTable.insert(NIM, nama, nilai);
            cout << "-------------------------------------------------\n";
            cout << "Data berhasil ditambahkan!\n";
            cout << "-------------------------------------------------\n";
            cout << endl;
            break;
        case 2:
            cout << "==============HAPUS DATA MAHASISWA===============\n";
            cout << "Masukkan NIM yang ingin dihapus: ";
            cin >> NIM;
            hashTable.remove(NIM);
            cout << "-------------------------------------------------\n";
            cout << "Data berhasil di hapus!\n";
            cout << "-------------------------------------------------\n";
            cout << endl;
            break;
        case 3:
            cout << "==============CARI BERDASARKAN NIM===============\n";
            cout << "Masukkan NIM yang ingin dicari: ";
            cin >> NIM;
            cout << "-------------------------------------------------\n";
            hashTable.searchByNIM(NIM);
            cout << "-------------------------------------------------\n";
            cout << endl;
            break;
        case 4:
            cout << "================NILAI ANTARA 80-90===============\n";
            hashTable.searchByRange();
            cout << "-------------------------------------------------\n";
            cout << endl;
            break;
        case 5:
            cout << "=================DATA MAHASISWA==================\n";
            hashTable.displayAllData();
            cout << "-------------------------------------------------\n";
            cout << endl;
            break;
        case 6:
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Pilihan tidak valid. Silakan pilih menu yang benar.\n";
        }
    } while (choice != 6);

    return 0;
}
