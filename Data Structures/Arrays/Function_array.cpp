#include <iostream>
using namespace std;

// Function using Array
void Func(int a[], int n){
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
}
int main()
{
    int arr[5]= {4, 8,3,2,5};
    Func(arr, 5);
}