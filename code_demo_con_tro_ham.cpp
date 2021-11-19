/////////////////////////////////////////////////// Functions pointers (CON TRỎ HÀM) //////////////////////////////////////////////
// CÚ PHÁP: [KIEU TRẢ VỀ](*TÊN CON TRỎ)(DANH SÁCH ĐỐI SỐ)
//EXAMPLE:  bool(*comparisonFcn)(int,int) 
// CÓ THỂ GÁN CO TRỎ HÀM BẰNG 1 HÀM CON LÀ 2 HÀM ĐÓ PHẢI CÙNG KIỂU TRẢ VỀ
//EXAMPLE:  bool(*comparisonFcn)(int,int)  == (TÊN HÀM CON)
#include<stdio.h>
#include<iostream>
using namespace std;
void SwapNumber(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
//ham ascending (tang dan)s
bool Acs(int a, int b){
    return a > b;
}
// functiom decrease (giam dan)
bool Des(int a, int b){
    return a < b;
}
// function apply con trỏ hàm để sắp xếp mảng.
void SelectionSort(int arr[],int n, bool(*comparisonFcn)(int,int)){
    int find_idx;
    for(int i = 0; i < n-1; i++){
        find_idx = i;
        for(int j = i+1; j < n; j++){
            if(comparisonFcn(arr[find_idx],arr[j])){
                find_idx = j;
            }
        }
        SwapNumber(arr[find_idx],arr[i]);
    }
}
void show(int arr[],int n){
    for(int i = 0; i< n; i++){
        cout << arr[i];
        
    }
}
void phantulonnhat(int arr[],int n){
    int max;
    for(int i = 0; i < n - 1; i++){
        max = arr[0];
        for(int j = i+1; j < n; j++){
            if(arr[i] < arr[j]){
                max = arr[j];
            
            }
        }
        
    }
    cout << "gia tri lon nhat: " << max << endl;  
}
void phantunhonhat(int arr[], int n){
    int min;
     for(int i = 0; i < n - 1; i++){
        min = arr[0];
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                min = arr[j];
            
            }
        }
        
    }
    cout << "gia tri nho nhat: " << min << endl;
}
int main(){
    int arr[]= {5,8,9,2,1,7};
    int n = sizeof(arr)/sizeof(int);
    SelectionSort(arr,n,Acs);
    show(arr,n);
    cout << endl;
    phantulonnhat(arr, n);
    phantunhonhat(arr, n);
    


}