#include <iostream>
#include <string>

using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

void push(char value) {
    if (top == MAX - 1){ 
        cout << "stack penuh\n";
    }
    else {
        top++;
        stack[top] = value;
    }
}

char pop() {
    if(top == -1) {
        cout << "stack kosong\n";
    }
    else {
        char karakter = stack[top];
        top--;
        return karakter;
    }
}

void display () {
    if (top == -1) {    
        cout << "stack kosong\n";
    }
    else {
        cout << "kata terbalik:\n";
        for (int i = top; i >= 0; i--) {
            cout << stack[i];
        }
        cout << endl;
    }
}

int main() {

    string kata, kataterbalik;
    
    cout << "Masukkan sebuah kata: ";
    cin >> kata;

    for (size_t i = 0; i < kata.length(); i++) {
        push(kata[i]);
    }

    cout << "Kata dibalik: ";
    while (top != -1) {
        cout << pop();
    }
    
    cout << endl;

    return 0;
}