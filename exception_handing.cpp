///////////////////////////////////////////////////Exception Handing /////////////////////////////////////////////////
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
 
double division(int a, int b) {
   if( b == 0 ) {
      throw "b Division by zero!";
   }
   else if(a == 0){
       throw "a Division by zero!";
   
   }
   return (a/b);
}
int main () {
   int x = 0;
   int y = 40;
   double z = 0;
 
   try {
      z = division(x, y);
      cout << z << endl;
   } catch (const char* msg) {
     cout << msg << endl;
   }
   catch(const char* msg1){
     cout << msg1 << endl;
   }
 
   return 0;
}
