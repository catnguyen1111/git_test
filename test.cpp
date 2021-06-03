#include <iostream>
using namespace std;
#define MAX 20
void nhapmang(int arr[], int n){
     for(int i =0 ; i < n;i++)
     {

          cout << "nhap gia tri arr["<< i << "]: ";
          cin >> arr[i];
     }
}
void xuatmang(int arr[],int n)
{
     for(int i=0;i<n;i++)
     {
     
          cout << arr[i] <<" ";
     }
}
void addarr(int arr[], int &n, int val, int pos)
{
     if(n >= MAX)
     {
          cout << "over data";
     }
     if(pos <= 0) // add element before arr
     {
          pos = 0;
     }
     else if( pos >=n)// add element after arr
     {
          pos =n;
     }
     for (int i=n ;i > pos;i-- )// di chuyen mang để tao ổ trống trước khi thêm phân tử
     {
          arr[i] = arr[i-1];
     }
     arr[pos] = val; // add element vao arr
     ++n; // tăng số lượn phần tử trong mảng lên
     
}
void XoaPhanTu(int a[], int &n, int pos){
    // Mang rong, khong the xoa.
    if(n <= 0){
        return;
    }
    // Neu pos <= 0 => Xoa dau
    if(pos < 0){
        pos = 0;
    }
    // Neu pos >= n => Xoa cuoi
    else if(pos >= n){
        pos = n-1;
    }
    // Dich chuyen mang
    for(int i = pos; i < n - 1; i++){
        a[i] = a[i+1];
    }
    // Giam so luong phan tu sau khi xoa.
    --n;
}
void hoanvi(int &a, int &b)
{
     int temp = a;
     a = b;
     b = temp;
}
void sapxepmangtangdan(int arr[],int n)
{
     for(int i =0;i < n -1;i++)
     {
          for ( int j = i+1; j< n;j++)
          {
               if(arr[i] > arr[j]){
                    hoanvi(arr[i],arr[j]);
               }
               
          }
     }
}
void sapxepmanggiamdan(int arr[],int n)
{
     for(int i = 0; i<n-1;i++)
     {
          for(int j = i+1;j<n;j++)
          {
               if(arr[i] < arr[j])
               {
                    hoanvi(arr[i],arr[j]);
               }
          }
     }
}
int main(){
  int arr[MAX];
  int n, val, pos;
  cout << "nhap n: ";
  cin >> n;
  nhapmang(arr,n);
  sapxepmangtangdan(arr,n);
  xuatmang(arr,n);
  
  cout << "\nnhap gia tri can add vao: ";
  cin >> val;
  cout << "\nnhap vi tri can them vao: ";
  cin >> pos;
  addarr(arr,n,val,pos);
  xuatmang(arr,n);
  cout << "\n nhap vi tri can xoa: ";
  cin >> pos;
  XoaPhanTu(arr, n, pos);
  xuatmang(arr,n);
  

}