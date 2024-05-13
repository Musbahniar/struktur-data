#include <iostream>
using namespace std;

int main()
{
 int tgl_lahir[] = { 12,3,1981 };
 int i;
 int *ptgl;
 ptgl = tgl_lahir;
 for (i=0; i<1; i++) {
     cout<<*ptgl+1;
 }
 
 getchar();
}
