///////////////////////////////////////////////////Exception Handing /////////////////////////////////////////////////
/*
Exception cung cấp một cách để truyền điều khiển từ một phần của một chương trình tới phần khác. Exception Handling (Xử lý ngoại lệ) trong C++ được xây dựng dựa trên 3 từ khóa là: try, catch, và throw.

throw: Một chương trình ném một Exception khi một vấn đề xuất hiện. Việc này được thực hiện bởi sử dụng từ khóa throw trong C++.

catch: Một chương trình bắt một Exception với một Exception Handler tại vị trí trong một chương trình nơi bạn muốn xử lý vấn đề đó. Từ khóa catch trong C++ chỉ dẫn việc bắt một exception.

try: Một khối try có thể được bắt bởi một số lượng cụ thể exception. Nó được theo sau bởi một hoặc nhiều khối catch.
*/
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

double division(int a, int b)
{
   if (b == 0)
   {
      throw "b Division by zero!";
   }
   else if (a == 0)
   {
      throw "a Division by zero!";
   }
   return (a / b);
}
int main()
{
   int x = 0;
   int y = 40;
   double z = 0;

   try
   {
      z = division(x, y);
      cout << z << endl;
   }
   catch (const char *msg)
   {
      cout << msg << endl;
   }

   catch (const char *msg1)
   {
      cout << msg1 << endl;
   }

   return 0;
}