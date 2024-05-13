#include <iostream>
#include <cstring>
#define panjang 20
using namespace std;
// --------- Isi Nama1 dan Nama2 Awal -----------
char nama1[panjang] = "Budi";
char nama2[panjang] = "Tatang";

int main()
{
 char namax[panjang];
 cout<<"-= NAMA AWAL =-"<<endl;
 cout<<"Nama1 = "<<nama1<<endl;
 cout<<"Nama2 = "<<nama2<<endl;
 cout<<endl;
 
 // -------- Penukaran String------------
 strcpy (namax, nama1);
 strcpy (nama1, nama2);
 strcpy (nama2, namax);
 
 cout<<"-= NAMA SEKARANG =-"<<endl;
 cout<<"Nama1 = "<<nama1<<endl;
 cout<<"Nama2 = "<<nama2<<endl;
  
 getchar();
}
