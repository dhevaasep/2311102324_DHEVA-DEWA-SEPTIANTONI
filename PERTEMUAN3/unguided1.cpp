// DHEVA DEWA SEPTIANTONI
// 2311102324
#include <iostream>
using namespace std;

struct Node {
    string nama;
    int usia;
    Node* next;
};

Node* head = NULL;

void insertDepan(string nama, int usia) {
    Node* baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = head;
    head = baru;
}

void insertBelakang(string nama, int usia) {
    Node* baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = NULL;
    if (head == NULL) {
        head = baru;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = baru;
    }
}

void insertTengah(string nama, int usia, int posisi) {
    Node* baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    Node* bantu = head;
    for (int i = 1; i < posisi - 1; i++) {
        if (bantu != NULL) {
            bantu = bantu->next;
        }
    }
    if (bantu != NULL) {
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

void hapusData(string nama) {
    Node* hapus = head;
    Node* prev = NULL;
    while (hapus != NULL && hapus->nama != nama) {
        prev = hapus;
        hapus = hapus->next;
    }
    if (hapus == NULL) {
        cout << "Data tidak ditemukan" << endl;
        return;
    }
    if (prev == NULL) {
        head = hapus->next;
    }
    else {
        prev->next = hapus->next;
    }
    delete hapus;
}

void ubahData(string nama, string newNama, int newUsia) {
    Node* temp = head;
    while (temp != NULL && temp->nama != nama) {
        temp = temp->next;
    }
    if (temp != NULL) {
        temp->nama = newNama;
        temp->usia = newUsia;
    }
}

void tampilkanData() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->nama << " " << temp->usia << endl;
        temp = temp->next;
    }
}

int main() {
    insertDepan("Dheva", 19);
    insertBelakang("John", 19);
    insertBelakang("Jane", 20);
    insertBelakang("Michael", 18);
    insertBelakang("Yusuke", 19);
    insertBelakang("Akechi", 20);
    insertBelakang("Hoshino", 18);
    insertBelakang("Karin", 18);

    hapusData("Akechi");
    insertTengah("Futaba", 18, 2);
    insertDepan("Igor", 20);
    ubahData("Michael", "Reyn", 18);
    tampilkanData();

    return 0;
}