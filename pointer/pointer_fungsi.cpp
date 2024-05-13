#include <iostream>
using namespace std;

int main()
{
 int a = 12;
 int b = 18;
 int *x;
 int *y;
 int c;
 int d;
 int angkax;
 x = &a;
 y = &b;
 c = *x;
 d = *y;
 
 cout<<"Nilai semula: a= "<<c<<", b=" <<d<<endl;
 // --------- Penukaran yg ditunjuk oleh pointer -----------
 angkax = c;
 c=d;
 d=angkax;
 cout<<"Nilai sekarang: a="<<c<<", b= "<<d;
 
 getchar();
}
