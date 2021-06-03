#include<iostream>
using namespace std;
#define MAX 20;
bool IsGrow1(int a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i + 1] >= a[i]) dem++;
    }
    if (dem == n ) return true;
    else return false;
}
void Enter_value(int a[], int n){
    for(int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
}
int main(){
    int Arr[10];
    int m,i;
    cout << "nhap m ";
    cin >> m;
    Enter_value(Arr,m);
    if(IsGrow1(Arr,m) == true )
    {
        cout << "dãy số tăng dần";
    }

    else 
    {
        cout << "day so giam";
    }
}