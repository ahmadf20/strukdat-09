/*
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal dibuat	: 07/05/2019 
***********************************************/
#include <iostream>
using namespace std;

struct stack {
    char isi;
    stack* next;
};

typedef stack* pointer;
typedef pointer list;

void createList(list& top){
    top = NULL;
}

void createElement(pointer& pBaru){
    pBaru = new stack;
    cout << "char : "; cin >> pBaru->isi;
    pBaru->next = NULL;
}

void push(list& top, pointer pBaru){ //insertfirst
    if(top == NULL){
        top = pBaru;
    } else {
        pBaru->next = top;
        top = pBaru;
    }
}

void pop(list& top, pointer& pHapus){    //deletefirst
    if(top == NULL){
        cout << "tidak ada data!" << endl;
    } else if (top->next == NULL){
        pHapus = top;
        top = NULL;
    } else {
        pHapus = top;
        top = pHapus->next;
        pHapus->next = NULL;
    }
}

void traversal(list top){
    pointer pBantu = top;
    while(pBantu != NULL){
        cout << pBantu->isi << " ";
        pBantu = pBantu->next;
    }
    cout << endl;
}

int main(){
    pointer p;
    list top;

    createList(top);
    
    int n;
    cout << "banyak char: "; cin >> n;
    for(int i = 0; i < n; i++){
        createElement(p);
        push(top, p);
    }
    for(int i = 0; i < n; i++){
        pop(top, p);
        cout << p->isi << " ";
    }
}
