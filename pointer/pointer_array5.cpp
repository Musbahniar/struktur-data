#include <iostream>
using namespace std;

int main()
{
 int var_x = 12;
 int *ptr1;
 int **ptr2;
 ptr1 = &var_x;
 ptr2 = &ptr1;
 
 // --------- Mengakses nilai var_x melalui ptr1 -----------
 cout <<"Nilai var_x = " <<*ptr1<<endl;
 
 
 // --------- Mengakses nilai var_x melalui ptr2 -----------
 cout <<"Nilai var_x = " <<**ptr2<<endl;
 
 
 getchar();
}
