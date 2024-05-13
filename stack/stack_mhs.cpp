#include <iostream>
#include <cstring>
#define MAX_STACK 10
using namespace std;

struct STACK {
       int top;
       char nim[12][10];
       char nama[30][10];
       char jurusan[30][10];
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

void Push(char dNIM[10],char dNAMA[10],char dJURUSAN[10]){
     tumpuk.top++;
     strcpy(tumpuk.nim[tumpuk.top],dNIM);
     strcpy(tumpuk.nama[tumpuk.top],dNAMA);
     strcpy(tumpuk.jurusan[tumpuk.top],dJURUSAN);
}

void Pop (){
     cout <<"Data yang terambil = "<<tumpuk.nim[tumpuk.top];
     tumpuk.top--;
}

void TampilkanStack(){
     cout << "NIM\tNama\tJurusan" << endl;
    for(int i=tumpuk.top; i>=0; i--){
        cout << tumpuk.nim[i] << "\t" << tumpuk.nama[i] << "\t" << tumpuk.jurusan[i] << endl;
    }
}

void Clear() {
     tumpuk.top = -1;
}

int main() {
    int pil;
    inisialisasi();
    char dtNIM[10];
    char dtNAMA[10];
    char dtJURUSAN[10];
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
                      cout <<"NIM = "; cin>>dtNIM;
                      cout <<"NAMA = "; cin>>dtNAMA;
                      cout <<"JURUSAN = "; cin>>dtJURUSAN;
                      Push(dtNIM,dtNAMA,dtJURUSAN);
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
