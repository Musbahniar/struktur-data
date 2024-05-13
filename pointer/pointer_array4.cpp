#include <iostream>
#include <cstring>
#define panjang 20
using namespace std;
// --------- Isi Nama1 dan Nama2 Awal -----------
char *nama1 = "Budi";
char *nama2 = "Tatang";

int main()
{
 char *namax;
 cout<<"-= NAMA AWAL =-"<<endl;
 cout<<"Nama1 = "<<nama1<<endl;
 cout<<"Nama2 = "<<nama2<<endl;
 cout<<endl;
 
 // -------- Penukaran String------------
 namax = nama1;
 nama1 = nama2;
 nama2 = namax;
 
 cout<<"-= NAMA SEKARANG =-"<<endl;
 cout<<"Nama1 = "<<nama1<<endl;
 cout<<"Nama2 = "<<nama2<<endl;
  
 getchar();
}
