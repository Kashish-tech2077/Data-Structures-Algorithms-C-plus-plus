#include <iostream>
using namespace std;

// Question- 2: Reverse a number n using Function, Constraints: -5000<=n<=5000

// Reverse Integer Function
int ReverseInt(int num)
{
    int ans = 0, rem;
    while(num > 0){
        rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;
    }
    return ans;
}

int main(){
    int num;
    cout << "Enter num: ";
    cin >> num;
    cout << ReverseInt(num);
}