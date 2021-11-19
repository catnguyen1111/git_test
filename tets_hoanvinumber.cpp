
#include <stdio.h>
#include <math.h>
#include<iostream>
using namespace std;
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
bool checksonguyento(int n){
   if(n < 2){
       return false;
   }
   else {
       if( n == 2 ){
            return true;
        }
       else {
           if(n %2 == 0){
            return false;
           }
            else{
                for(int i =2 ;i< n;i++){
                    if( n % i == 0){
                       return false;
                    }
                }
           }
       }
   }
   return true;
  
}
void showsonguyento(int arr[], int n){
    for(int i = 0; i< n;i++){
        if(checksonguyento(arr[i])== true){
            cout << arr[i] << " ";
        }
    }
}
int main(){
    int arr[1000];
    int n;
    cout << "nhap n: ";
    cin >> n;
    nhapmang(arr, n);
    xuatmang(arr,n);
    cout << endl;
    showsonguyento(arr,n);

    
    
}
 