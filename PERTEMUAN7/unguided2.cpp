//NAMA : Dheva Dewa Septiantoni
//NIM : 2311102324

#include <iostream>
#include <string>

using namespace std;

const int maksimalQueue_324 = 5;

struct Node {
    string Nama_324;
    string NIM_324;
    Node* next_324;
};

class Queue {
private:
    Node* front_324; 
    Node* rear_324; 

public: 
    Queue() { 
        front_324 = nullptr;
        rear_324 = nullptr;
    }

    void enqueue_324(const string& Nama_324, const string& NIM_324) {
        Node* newNode_324 = new Node;
        newNode_324->Nama_324 = Nama_324;
        newNode_324->NIM_324 = NIM_324;
        newNode_324->next_324 = nullptr;

        if (isEmpty_324()) {
            front_324 = rear_324 = newNode_324;
        } else {
            rear_324->next_324 = newNode_324;
            rear_324 = newNode_324;
        }

        cout << "Mahasiswa dengan Nama : " << newNode_324->Nama_324 << ", dan NIM : " << newNode_324->NIM_324 << " telah ditambahkan ke dalam antrian." << endl;
    }

    void dequeue_324() {
        if (isEmpty_324()) {
            cout << "Antrian kosong." << endl;
            return;
        }

        Node* temp_324 = front_324; 
        front_324 = front_324->next_324; 

        cout << "Mahasiswa dengan Nama : " << temp_324->Nama_324 << ", dan NIM : " << temp_324->NIM_324 << " telah dihapus dari antrian." << endl; // Tampilkan data mahasiswa yang dihapus dari antrian 
        delete temp_324; 

        if (front_324 == nullptr) {
            rear_324 = nullptr;
        }
    }

    void displayQueue_324() {
        if (isEmpty_324()) {
            cout << "Data Antrian :" << endl;
            for (int i_324 = 0; i_324 < maksimalQueue_324; i_324++) {
                cout << i_324 + 1 << ". (kosong)" << endl;
            }
        } else {
            cout << "Data Antrian :" << endl;
            Node* current_324 = front_324;
            int i_324 = 1;
            while (current_324!= nullptr) { 
                cout << i_324 << ". " << "Nama : " << current_324->Nama_324 << ", NIM : " << current_324->NIM_324 << endl;
                current_324 = current_324->next_324;
                i_324++;
            }
            for (; i_324 <= maksimalQueue_324; i_324++) { 
                cout << i_324 << ". (kosong)" << endl;
            }
        }
    }

    bool isEmpty_324() {
        return front_324 == nullptr;
    }

    int countQueue_324() {
        int count_324 = 0;
        Node* current_324 = front_324;
        while (current_324!= nullptr) { 
            count_324++;
            current_324 = current_324->next_324;
        }
        return count_324; 
    }

    void clearQueue_324() {
        while (!isEmpty_324()) { 
            dequeue_324();
        } 
        cout << "Antrian telah dibersihkan." << endl;
    }
};

int main() {
    Queue queue;
    queue.enqueue_324("Dheva Dewa Septiantoni", "2311102324");
    queue.enqueue_324("Kylan Mbappe", "2311111111");
    queue.enqueue_324("Cristiano Ronaldo", "2311111112");
    queue.displayQueue_324();
    cout << "Jumlah Antrian = " << queue.countQueue_324() << endl;
    queue.dequeue_324();
    queue.displayQueue_324();
    cout << "Jumlah Antrian = " << queue.countQueue_324() << endl;
    queue.dequeue_324();
    queue.displayQueue_324();
    cout << "Jumlah Antrian = " << queue.countQueue_324() << endl;

    return 0;
}