#include <iostream>
#include <fstream>
#include <bitset>
using namespace std;

int main( )
{
   //create some data
 
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
  
 ifstream in {"abc.bin", ios::binary};
 ofstream out {"abc.bin", ios::binary};
  if (out)
{
in.read (reinterpret_cast<char*>(&a), sizeof(a));
in.read (reinterpret_cast<char*> (&b), sizeof(b));
in.read (reinterpret_cast<char*> (&c), sizeof(c));
}
else
cout <<"Error";
int x = *(int *)&b;
bitset<sizeof(int) *8> binary(x);
int y = *(int *)&a;
bitset<sizeof(int) *8> binary1(y);
int z = *(int *)&c;
bitset<sizeof(int) *8> binary2(z);
// cout<<binary;
  cout<<binary1<<" "<<binary<<" "<<binary2;
out.write((char*)&x,sizeof(x));
out.write((char*)&y,sizeof(y));
out.write((char*)&z,sizeof(z));  
// cout<<endl<<endl;
  // out<<a<<" "<<b<<" "<<c;
   
//   out.close();
 
  // return 0;
}
