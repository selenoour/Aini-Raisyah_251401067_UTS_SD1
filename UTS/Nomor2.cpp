#include <iostream>
using namespace std;

struct node {
    int value;
    node *next;
};

int nilai;
string nama;
char pil;

node *head = NULL;
node *tail = NULL;

void printList() {
    node *temp = head;
    cout << "User menambah data: " << endl;
    while(temp != NULL) {
        cout << temp -> value << "->";
        temp = temp -> next;
    }
    cout << "NULL\n";
}

void nilaiLolos(){
    if (nilai >= 75){
    cout << "Nilai yang lolos: " << endl;
    }
}

void insertFirst(int n) {
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head == NULL) {
        head = newnode;
        tail = head;
    }
    else {
        newnode -> next = head;
        head = newnode;
    }

    printList();
}

void insertLast(int n) {
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head == NULL){
        head = newnode;
        tail = head;
    }
    else {
        tail -> next = newnode;
        tail = newnode;
    }

    printList();
}

void deleteHead(int n) {
    if (head == NULL) {
        cout << "list kosong\n";
        return;
    }

    node *temp = head;
    head = head -> next;

    if (head==NULL) tail = NULL;
    delete temp;

    printList();
}




int main (){
    do{
        cout << "Pilih Menu!" << endl;
        cout << "1. Tambah data di awal" << endl;
        cout << "2. Tambah data di akhir" << endl;
        cout << "3. Hapus data di awal" << endl;
        cout << "4. Tampilkan pendaftar yang lolos" << endl;
        cout << "pilih menu (1-4): ";
        cin >> pil;

        if (pil == '1') {
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan nilai: ";
            cin >> nilai;
            insertFirst(nilai);
        }

        else if (pil == '2'){
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan nilai: ";
            cin >> nilai;
            insertLast(nilai);
        }

        else if (pil == '3'){
            deleteHead(nilai);
        }

        else if (pil == '4'){
            nilaiLolos();
            }
    }
        while (pil != '5');
    } 