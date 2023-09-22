#include <iostream>
using namespace std;

// Pattern to be printing
// 1 2 3 4 5 6       
// 7 8 9 10 11 12    
// 13 14 15 16 17 18 
// 19 20 21 22 23 24 
// 25 26 27 28 29 30 
// 31 32 33 34 35 36 

int main()
{
    int k;
    cin >> k;
    int i= 1;
    int sum = 1;
    while (i <= k){
        int m = 1;
        while(m<=k){
            cout << sum << " ";
            sum = sum + 1;
            m = m + 1;
        }
        cout << endl;
        i = i + 1;
    }
}