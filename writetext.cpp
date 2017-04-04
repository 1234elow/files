#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   ofstream out;
   out.open("abc.txt");
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)
   out<<a<<" "<<b<<" "<<c;
   cout<<endl<<endl;
 
   return 0;
}
