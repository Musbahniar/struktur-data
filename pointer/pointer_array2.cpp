#include <iostream>
using namespace std;

int main()
{
 int x;
 int y;
 int *px;
 
 x = 12;
 px = &x;
 y  = *px;
 
 cout<<"Alamat x = " <<&x<<endl;
 cout<<"Isi px=" <<px<<endl;
 cout<<"Nilai yg ditunjuk px="<<*px<<endl;
 cout<<"Nilai y="<<y;
 
 getchar();
}
