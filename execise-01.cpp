/*
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal dibuat	: 07/05/2019 
***********************************************/
#include <iostream>
using namespace std;

const int maxElement = 255;
struct stack {
    char isi[maxElement];
    int TOP;
};
stack s;

void createStack(stack& s){
    s.TOP = -1;
}

void createElement(char& elementBaru){
    cout << "Masukkan char : "; 
    cin >> elementBaru;
}

void push(stack& S, char elemenBaru){
    if(S.TOP == maxElement-1){
            cout<<"Tumpukan sudah penuh" << endl;
    }else{
        S.TOP=S.TOP+1;
        S.isi[S.TOP]=elemenBaru;
    }
}

void pop(stack& S, char& elementHsl){
    if (S.TOP < 0){
        cout << "Tumpukan kosong!" << endl;
    } else {
        elementHsl = S.isi[S.TOP];
        S.TOP = S.TOP - 1;
    }
}

void printData(stack s){
    cout << s.isi[s.TOP] << " ";
}

int main(){
    char c;
    createStack(s);
    int n;

    cout << "Banyak data: "; cin >> n;

    cout << "----INPUT----" << endl;
    for(int i = 0; i < n; i++){
        createElement(c);
        push(s, c);
    }

    cout << "----POP----" << endl;
    for(int i = 0; i < n; i++)
    {
        printData(s);
        pop(s, c);
    }
}