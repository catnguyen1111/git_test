#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    /* hàm tạo file và viết data vào file
    ofstream Myfile ("filetest.txt"); // tạo và mở 1 file test
    Myfile << "hello every body"; // viết vao file
    Myfile.close(); // đóng file
    */
    
    //hàm dùng để đọc data trong file
    string mytest; // tạo biến sử dụng lưu những z đọc được từ file
    ifstream MyReadFile("filetest.txt"); // câu lệnh đọc file
    while (getline(MyReadFile,mytest))//Sử dụng vòng lặp while cùng với hàm getline () để đọc từng dòng tệp
    {
        cout << mytest << endl;
    }
    MyReadFile.close();
    

}
