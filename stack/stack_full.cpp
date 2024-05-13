#include <iostream>
#include <cstring>
#define MAX_STACK 10
using namespace std;

struct STACK {
       int top;
       char data[10][10];
}; STACK tumpuk;

void inisialisasi() {
     tumpuk.top = -1;
}

int IsFull() {
    if(tumpuk.top == MAX_STACK - 1) return 1; else return 0;
}

int IsEmpty() {
    if (tumpuk.top == -1) return 1; else return 0;
}

void Push(char d[10]){
     tumpuk.top++;
     strcpy(tumpuk.data[tumpuk.top],d);
}

void Pop (){
     cout <<"Data yang terambil = "<<tumpuk.data[tumpuk.top];
     tumpuk.top--;
}

void TampilkanStack(){
     for (int i=tumpuk.top; i>=0; i--) {
         cout <<"Tampil data: "<<tumpuk.data[i]<<endl;
     }
}

void Clear() {
     tumpuk.top = -1;
}

int main() {
    int pil;
    inisialisasi();
    char dt[10];
    do {
       cout <<"1. Push \n";
       cout <<"2. Pop \n";
       cout <<"3. Tampilkan data \n";
       cout <<"4. Clear \n";
       cout <<"5. Keluar\n";
       cout <<"Pilihan : ";
       cin>>pil;
       
       switch (pil) {
              case 1:
                   if (IsFull() != 1) {
                      cout <<"Data = "; cin>>dt;
                      Push(dt);
                   } else {
                     cout <<"\n Stack penuh!\n";
                   }
                   break;
              case 2:
                   if (IsEmpty() != 1) {
                      Pop();
                   } else {
                       cout <<"\n Stack kosong! \n";
                   }
                   break;
              case 3:
                   if (IsEmpty() != 1) {
                      TampilkanStack();
                   } else {
                       cout <<"\n Stack kosong! \n";
                   }
                   break;
             case 4:
                  Clear();
                  cout <<"\n Stack sudah kosong! \n";
                  break;
       }
    } while (pil != 5);
    
    //return 0;
     getchar();
}
